#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    SelModel.setModel(&model);
    ui->tableView->setModel(&model);
    ui->tableView->setSelectionModel(&SelModel);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    QList<QStandardItem*> list(4);
    list[0] = new QStandardItem("No");
    list[1] = new QStandardItem("PC Name");
    list[2] = new QStandardItem("IP Adress");
    list[3] = new QStandardItem("MAC Adress");
    model.appendRow(list);
    list[0] = new QStandardItem("01");
    list[1] = new QStandardItem("1488");
    list[2] = new QStandardItem("192.168.1.21");
    list[3] = new QStandardItem("3a:05:9a:43:31:32");
    model.appendRow(list);
    list[0] = new QStandardItem("02");
    list[1] = new QStandardItem("1489");
    list[2] = new QStandardItem("192.168.1.27");
    list[3] = new QStandardItem("a8:e4:f6:98:5f:da");
    model.appendRow(list);
    list[0] = new QStandardItem("03");
    list[1] = new QStandardItem("1490");
    list[2] = new QStandardItem("192.168.1.37");
    list[3] = new QStandardItem("5b:21:2e:dc:a7:8d");
    model.appendRow(list);
    list[0] = new QStandardItem("04");
    list[1] = new QStandardItem("1471");
    list[2] = new QStandardItem("192.168.1.71");
    list[3] = new QStandardItem("32:9e:5d:79:42:4b");
    model.appendRow(list);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_ColorButton_clicked()
{
    if (SelModel.hasSelection())
    {
        int row = SelModel.currentIndex().row();
        if (row != 0)
        {
            for (int i = 0; i < 4; ++i)
            {
                auto item = model.item(row, i);
                item->setData(QColor(Qt::gray), Qt::BackgroundRole);
            }
        }
    }
}


void MainWindow::on_DeselectButton_clicked()
{
    if (SelModel.hasSelection())
    {
        int row = SelModel.currentIndex().row();
        if (row != 0)
        {
            for (int i = 0; i < 4; ++i)
            {
                auto item = model.item(row, i);
                item->setData(QColor(Qt::white), Qt::BackgroundRole);
            }
        }
    }
}

