#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"
#include "settwindget.h"
#include <QTranslator>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void saveToFile(QString);
    void loadFromFile();

private slots:
    void on_SaveButton_clicked();

    void on_OpenButton_clicked();

    void on_HelpButton_clicked();

    void on_ROOpenButton_clicked();

    void on_TrEng_clicked();

    void on_TrRus_clicked();

    void keyReleaseEvent(QKeyEvent *event) override;

    void on_SettButton_clicked();

    void on_Setts_clicked();

private:
    Ui::MainWindow *ui;
    Dialog *dialog;
    SettWindget* setwidg;
    QTranslator transl;
    void Open();
    void Exit();
    void Save();
    void New();
    void About();

signals:

};
#endif // MAINWINDOW_H
