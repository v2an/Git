#include "foldervewer.h"
#include "ui_foldervewer.h"
#include <QStringList>

FolderVewer::FolderVewer(QWidget *parent, const QString &folder) :
    QDialog(parent),
    ui(new Ui::FolderVewer)
{
    ui->setupUi(this);
    ui->lineEdit->setText(folder);

    model = new QFileSystemModel;
    ui->treeView->setModel(model);
    model->setRootPath(folder);
    model->setFilter(QDir::AllDirs | QDir::Files | QDir::NoDotAndDotDot | QDir::NoSymLinks);
    QStringList filter;
    filter.append("*.txt");
    filter.append(".*");
    model->setNameFilters(filter);
    model->setNameFilterDisables(false);
    QStringList dirs = folder.split("/");
    if (dirs.size()>0)
    {
        for (int i = 0; i < dirs.size(); i++)
        {
            QString currPath;
            for (int k = 0; k <= i; k++)
            {
                currPath.append(dirs[k]).append("/");
            }
            ui->treeView->expand(model->index(currPath));
        }
    }
    ui->treeView->hideColumn(1);
    ui->treeView->hideColumn(2);
    ui->treeView->resizeColumnToContents(0);
    if (ui->treeView->columnWidth(0) < 450)
        ui->treeView->setColumnWidth(0, 450);
}

FolderVewer::~FolderVewer()
{
    delete ui;
}

void FolderVewer::ReciveLang(int Lang)
{
    if (Lang == 1)
    {
        transl.load(":/HW4_ru");
        qApp->installTranslator(&transl);
        ui->retranslateUi(this);
    }
    else if (Lang == 2)
    {
        transl.load(":/HW4_en");
        qApp->installTranslator(&transl);
        ui->retranslateUi(this);
    }
}
