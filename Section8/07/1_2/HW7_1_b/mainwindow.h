#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextDocumentFragment>
#include <QTextDocument>
#include <QTextCharFormat>
#include <QFontDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private slots:

    void on_FCopy_clicked();

    void on_FPaste_clicked();

    void on_ChFont_clicked();

    void on_ALeft_clicked();

    void on_AMiddle_clicked();

    void on_ARight_clicked();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QTextCharFormat currFormat;
};
#endif // MAINWINDOW_H
