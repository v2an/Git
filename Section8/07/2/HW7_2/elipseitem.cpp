#include "elipseitem.h"

ElipseItem::ElipseItem(QObject *parent) : QObject(parent)
{

}

ElipseItem::~ElipseItem()
{

}

QRectF ElipseItem::boundingRect() const
{
    return QRectF (-30,-20,60,40);
}

void ElipseItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(QColor(pen[2], pen[1], pen[0]));
    painter->setBrush(QColor(brush[2], pen[1], pen[0]));
    painter->drawEllipse(-30,-20,60,40);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

void ElipseItem::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    this->setPos(mapToScene(event->pos()));
}

void ElipseItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

}
