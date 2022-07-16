#include "findercontroller.h"

FinderController::FinderController(QObject *parent) : QObject(parent)
{

}


FinderController::~FinderController()
{
    if (findThread != nullptr)
    {
        if (findThread->isRunning())
        {
            findThread->findStop();
            findThread->terminate();
        }
        findThread.reset();
    }
}

void FinderController::startFind(QString dir, QString file)
{
    if (findThread.get())
    {
        findThread->findStop();
        findThread->terminate();
        findThread.reset();
        return;
    }
    findThread = QSharedPointer<Finder>::create(dir, file);
    findThread->start(QThread::NormalPriority);
    connect(findThread.get(), SIGNAL(stopedThread()), this, SLOT(deleteThread()));
    connect(findThread.get(), SIGNAL(writeFoundPath(QString)), this, SLOT(printCurrentPath(QString)));
    connect(findThread.get(), SIGNAL(findFile(QString)), this, SLOT(genStringPathFile(QString)));
    emit newFind();
}

void FinderController::deleteThread()
{
    FinderController::finishThread();
    findThread.reset();
}

void FinderController::printCurrentPath(QString path)
{
    currentPath = path;
    emit changFindPath(path);
}

void FinderController::genStringPathFile(QString file)
{
    QString s = currentPath + '/' + file;
    emit genPathOfFile(s);
}

void FinderController::finishThread()
{
    currentPath = tr("FINISH. Find complete");
    emit changFindPath(currentPath);
}

