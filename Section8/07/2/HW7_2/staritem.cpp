#include "staritem.h"

StarItem::StarItem(QObject *parent) : QObject(parent)
{

}

StarItem::~StarItem()
{

}

QRectF StarItem::boundingRect() const
{
    return QRectF (-40,-40,80,80);
}

void StarItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(QColor(pen[2], pen[1], pen[0]));
    painter->setBrush(QColor(brush[2], pen[1], pen[0]));
    QPolygonF polygon{};
    polygon << QPointF{-40, -10} << QPointF{-10,-10} << QPointF{0,-40} << QPointF{10,-10}
            << QPointF{40,-10}   << QPointF{20,10}   << QPointF{30,40} << QPointF{0,20}
            << QPointF{-30,40}   << QPointF{-20,10};
    painter->drawPolygon(polygon);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

void StarItem::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    this->setPos(mapToScene(event->pos()));
}

void StarItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

}
