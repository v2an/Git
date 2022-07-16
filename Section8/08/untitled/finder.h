#ifndef FINDER_H
#define FINDER_H

#include <QObject>
#include <QThread>

class Finder : public QThread
{
    Q_OBJECT
public:
    explicit Finder(QString dir, QString File, QObject *parent = nullptr);
    void findStop() {toWork = false;}

protected:
    void run();

private:
    QString dir;
    QString file;
    bool toWork;

signals:
    void stopedThread();
    void writeFoundPath(QString);
    void findFile(QString);

};

#endif // FINDER_H
