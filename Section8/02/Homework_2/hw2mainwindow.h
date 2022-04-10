#ifndef HW2MAINWINDOW_H
#define HW2MAINWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QItemSelectionModel>
#include <QListView>

QT_BEGIN_NAMESPACE
namespace Ui { class HW2MainWindow; }
QT_END_NAMESPACE

class HW2MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    HW2MainWindow(QWidget *parent = nullptr);
    ~HW2MainWindow();

private slots:
    void on_IconsCheck_clicked(bool checked);

    void on_UpButton_clicked();

    void on_DownButton_clicked();

    void on_AddButton_clicked();

    void on_DeleteButton_clicked();

private:
    Ui::HW2MainWindow *ui;
    QStandardItemModel model;
    QItemSelectionModel SettedModel;
};
#endif // HW2MAINWINDOW_H
