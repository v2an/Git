#ifndef FINDERCONTROLLER_H
#define FINDERCONTROLLER_H

#include <QObject>
#include <QSharedPointer>
#include "finder.h"

class FinderController : public QObject
{
    Q_OBJECT
public:
    explicit FinderController(QObject *parent = nullptr);
    ~FinderController();
    void startFind(QString dir, QString file);
private:
    QSharedPointer<Finder>findThread;
    QString currentPath;
signals:
    void changFindPath(QString);
    void genPathOfFile(QString);
    void newFind();
public slots:
    void deleteThread();
    void printCurrentPath(QString);
    void genStringPathFile(QString);
    void finishThread();
};

#endif // FINDERCONTROLLER_H
