#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "recitem.h"
#include "elipseitem.h"
#include "staritem.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->resize(640,640);
    this->setFixedSize(640,640);
    Scence = new QGraphicsScene(this);

    ui->graphicsView->resize(600,600);
    ui->graphicsView->setScene(Scence);
    ui->graphicsView->setRenderHint(QPainter::Antialiasing);
    ui->graphicsView->setCacheMode(QGraphicsView::CacheBackground);
    ui->graphicsView->setViewportUpdateMode(QGraphicsView::BoundingRectViewportUpdate);
    ui->graphicsView->installEventFilter(this);
    ui->graphicsView->setTransformationAnchor(QGraphicsView::AnchorUnderMouse);
    Scence->setSceneRect(0,0,500,500);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    if (watched != ui->graphicsView)
    {
        return false;
    }
    if (event->type() == QEvent::MouseButtonPress)
    {
        auto mouse_event = static_cast<QMouseEvent*>(event);
        if (mouse_event->button() == Qt::LeftButton)
        {
            if (count % 3 == 1)
            {
                RecItem* item = new RecItem();
                item->setPos(ui->graphicsView->mapToScene(mouse_event->x(), mouse_event->y()));
                Scence->addItem(item);
                ++count;
            }
            else if (count % 3 == 2)
            {
                ElipseItem* item = new ElipseItem();
                item->setPos(ui->graphicsView->mapToScene(mouse_event->x(), mouse_event->y()));
                Scence->addItem(item);
                ++count;
            }
            else
            {
                StarItem* item = new StarItem();
                item->setPos(ui->graphicsView->mapToScene(mouse_event->x(), mouse_event->y()));
                Scence->addItem(item);
                ++count;
            }
        }
        else if (mouse_event->button() == Qt::RightButton)
        {
            auto figure = Scence->itemAt(mouse_event->x(), mouse_event->y(), QTransform{});
            if (figure)
            {
                Scence->removeItem(figure);
            }
        }
    }
    return false;
}



