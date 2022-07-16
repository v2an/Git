#ifndef RECITEM_H
#define RECITEM_H

#include <QObject>
#include <QGraphicsItem>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QCursor>

class RecItem : public QObject, public QGraphicsItem
{
    Q_OBJECT
public:
    explicit RecItem(QObject *parent = nullptr);
    ~RecItem();

signals:

private:
    QRectF boundingRect() const;
    void paint(QPainter* painter, const QStyleOptionGraphicsItem* option, QWidget* widget);
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event);
    void mousePressEvent(QGraphicsSceneMouseEvent* event);
    int pen[3] = {rand()%255, rand()%255, rand()%255};
    int brush[3] = {rand()%255, rand()%255, rand()%255};
};

#endif // RECITEM_H
