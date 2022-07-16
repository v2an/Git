#include "foldervewer.h"
#include "ui_foldervewer.h"
#include <QStringList>
#include <QDir>
#include <QStatusBar>


FolderVewer::FolderVewer(QWidget *parent, const QString &folder) :
    QDialog(parent),
    ui(new Ui::FolderVewer)
{
    ui->setupUi(this);
    ui->lineEdit->setText(folder);
    ui->SResoult->setReadOnly(true);
    currFolder = folder;

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



    if (QSysInfo::productType() == "windows")
    {
        QFileInfoList infolist = QDir::drives();
        int amount = infolist.count();
        for (int i = 0; i < amount; i++)
        {
            ui->SDiskB->addItem(infolist.at(i).path());
        }
    }
    else
    {
        QStringList str = {"/", "/home/", "/mount/", "/opt/"};
        int amount = str.count();
        for (int i = 0; i < amount; i++)
        {
            ui->SDiskB->addItem(str.at(i));
        }
    }
    connect(ui->SButton, SIGNAL(clicked()), this, SLOT(findFileSlot()));
    controllerl = new FinderController(this);
    connect(controllerl, SIGNAL(changFindPath(QString)), this, SLOT(changStatusLabel(QString)));
    connect(controllerl, SIGNAL(genPathOfFile(QString)), this, SLOT(printFindFile(QString)));
    connect(controllerl, SIGNAL(newFind()), ui->SResoult, SLOT(clear()));
    connect(ui->SButtonCurrent, SIGNAL(clicked()), this, SLOT(findCurrentFileSlot()));
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

void FolderVewer::findFileSlot()
{
    QString linesearch = ui->SInput->text();
    if (linesearch.length() == 0) return;
    controllerl->startFind(ui->SDiskB->currentText(), linesearch);
}

void FolderVewer::findCurrentFileSlot()
{
    QString linesearch = ui->SInput->text();
    if (linesearch.length() == 0) return;
    controllerl->startFind(currFolder, linesearch);
}

void FolderVewer::changStatusLabel(QString line)
{
    ui->SStatus->setText(line);
}

void FolderVewer::printFindFile(QString str)
{
    ui->SResoult->append(str);
}

