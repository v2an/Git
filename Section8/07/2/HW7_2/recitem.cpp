#include "recitem.h"
#include <QRandomGenerator>

RecItem::RecItem(QObject *parent) : QObject(parent)
{

}

RecItem::~RecItem()
{

}

QRectF RecItem::boundingRect() const
{
    return QRectF (-20,-30,50,60);
}

void RecItem::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setPen(QColor(pen[2], pen[1], pen[0]));
    painter->setBrush(QColor(brush[2], pen[1], pen[0]));
    painter->drawRect(-20,-30,50,60);
    Q_UNUSED(option);
    Q_UNUSED(widget);
}

void RecItem::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    this->setPos(mapToScene(event->pos()));
}

void RecItem::mousePressEvent(QGraphicsSceneMouseEvent *event)
{

}

