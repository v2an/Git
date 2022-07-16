#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QMouseEvent>
#include <QKeyEvent>
#include <QRandomGenerator>
#include <QGraphicsItem>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    bool eventFilter(QObject *watched, QEvent *event) override;

private:
    Ui::MainWindow *ui;
    QGraphicsScene *Scence;
    QPoint StPoint;
    int count = 1;

};
#endif // MAINWINDOW_H
