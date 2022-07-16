#include "finder.h"
#include <QDir>

Finder::Finder(QString dir, QString file, QObject *parent) : QThread(parent)
{
    this->dir = dir;
    this->file = file;
    toWork = true;
}

void Finder::run()
{
    QStringList dirs = {dir};
    for (int i = 0; dirs.count() && toWork; )
    {
        QDir search(dirs.at(i));
        emit writeFoundPath(dirs.at(i));
        search.setFilter(QDir::Hidden | QDir::Dirs | QDir::NoSymLinks | QDir::NoDotAndDotDot);
        QStringList foundDirs = search.entryList();
        int amount = foundDirs.count();
        for (int j = 0; j < amount && toWork; j++)
        {
            QString newPath = dirs.at(i) + foundDirs[j] + "/";
            if (newPath.indexOf("/.") == -1) dirs << newPath;
        }
        search.setFilter(QDir::Hidden | QDir::Files | QDir::NoSymLinks | QDir::NoDotAndDotDot);
        QStringList foundFiles = search.entryList();
        amount = foundFiles.count();
        for (int j = 0; j < amount && toWork; j++)
        {
            QString filename = foundFiles.at(j);
            if (filename.indexOf(file) != -1)
            {
                emit findFile(filename);
            }
        }
        dirs.removeAt(0);
    }
    emit stopedThread();
}
