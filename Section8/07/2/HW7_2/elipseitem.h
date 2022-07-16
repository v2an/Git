#ifndef ELIPSEITEM_H
#define ELIPSEITEM_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QCursor>

class ElipseItem : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit ElipseItem(QObject *parent = nullptr);
    ~ElipseItem();

signals:

private:
    QRectF boundingRect() const;
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event);
    void mousePressEvent(QGraphicsSceneMouseEvent* event);
    int pen[3] = {rand()%255, rand()%255, rand()%255};
    int brush[3] = {rand()%255, rand()%255, rand()%255};
};

#endif // ELIPSEITEM_H
