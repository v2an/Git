#ifndef FOLDERVEWER_H
#define FOLDERVEWER_H

#include <QDialog>
#include <QTranslator>
#include <QObject>
#include <QFileSystemModel>
#include "findercontroller.h"

namespace Ui {
class FolderVewer;
}

class FolderVewer : public QDialog
{
    Q_OBJECT

public:
    explicit FolderVewer(QWidget *parent = nullptr, const QString &folder = nullptr);
    ~FolderVewer();

public slots:
    void ReciveLang(int Lang);

private:
    Ui::FolderVewer *ui;
    QTranslator transl;
    QFileSystemModel* model;
    FinderController* controllerl;
    QString currFolder;

private slots:
    void findFileSlot();
    void changStatusLabel(QString);
    void printFindFile(QString);
    void findCurrentFileSlot();


};

#endif // FOLDERVEWER_H
