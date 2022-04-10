#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableView>
#include <QItemSelectionModel>
#include <QStandardItemModel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ColorButton_clicked();

    void on_DeselectButton_clicked();

private:
    Ui::MainWindow *ui;
    QStandardItemModel model;
    QItemSelectionModel SelModel;
};
#endif // MAINWINDOW_H
