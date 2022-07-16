#ifndef STARITEM_H
#define STARITEM_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QCursor>

class StarItem : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit StarItem(QObject *parent = nullptr);
    ~StarItem();

signals:

private:
    QRectF boundingRect() const;
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event);
    void mousePressEvent(QGraphicsSceneMouseEvent* event);
    int pen[3] = {rand()%255, rand()%255, rand()%255};
    int brush[3] = {rand()%255, rand()%255, rand()%255};
};

#endif // STARITEM_H
