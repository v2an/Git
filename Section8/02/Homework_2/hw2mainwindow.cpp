#include "hw2mainwindow.h"
#include "ui_hw2mainwindow.h"
#include <QStandardItemModel>
#include <QIcon>

HW2MainWindow::HW2MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::HW2MainWindow)
{
    ui->setupUi(this);

    SettedModel.setModel(&model);

    ui->listView->setModel(&model);
    ui->listView->setSelectionModel(&SettedModel);
    ui->listView->setSelectionMode(QAbstractItemView::SingleSelection);

    model.appendRow(new QStandardItem(QIcon{":/js.png"}, "JavaScript"));
    model.appendRow(new QStandardItem(QIcon{":/py.svg"}, "Python"));
    model.appendRow(new QStandardItem(QIcon{":/c++.png"}, "C++"));
    model.appendRow(new QStandardItem(QIcon{":/csh.png"}, "C#"));
}

HW2MainWindow::~HW2MainWindow()
{
    delete ui;
}

void HW2MainWindow::on_IconsCheck_clicked(bool checked)
{
    if (checked)
    {
        ui->listView->setViewMode(QListView::IconMode);
    }
    else
    {
        ui->listView->setViewMode(QListView::ListMode);
    }
}

void HW2MainWindow::on_UpButton_clicked()
{
    if (SettedModel.hasSelection())
    {
        auto index = SettedModel.currentIndex();
        if (index.isValid())
        {
            auto line = index.row();
            if (line > 0)
            {
                auto ctrlc = model.takeRow(index.row());
                model.insertRow(--line, ctrlc);
            }
            ui->listView->setCurrentIndex(model.index(line, 0));
        }
    }
}

void HW2MainWindow::on_DownButton_clicked()
{
    if (SettedModel.hasSelection())
    {
        auto index = SettedModel.currentIndex();
        if (index.isValid())
        {
            auto line = index.row();
            if (line < (model.rowCount()-1))
            {
                auto ctrlc = model.takeRow(index.row());
                model.insertRow(++line, ctrlc);
            }
            ui->listView->setCurrentIndex(model.index(line, 0));
        }
    }
}

void HW2MainWindow::on_AddButton_clicked()
{
    QString Insert = ui->AddInput->text();
    if (Insert != nullptr)
    {
        model.appendRow(new QStandardItem(QIcon{":/def.svg"}, Insert));
    }
}

void HW2MainWindow::on_DeleteButton_clicked()
{
    if (SettedModel.hasSelection())
    {
        model.removeRow(SettedModel.currentIndex().row());
    }
}

