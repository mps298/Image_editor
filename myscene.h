#pragma once

#ifndef MYSCENE_H
#pragma once

#define MYSCENE_H

#include "lab6.h"

class MyScene : public QGraphicsScene
{
    Q_OBJECT

    QAbstractGraphicsShapeItem* current;
    QGraphicsLineItem* currentLine;
    QGraphicsPixmapItem* currentPix;


    bool isDrawing;
    shapeType myShape;
    QPointF m_startPoint;
    QPen myPen;
    QBrush myBrush;
    QPixmap myPix;


public:
    explicit MyScene(QGraphicsScene *parent = nullptr);
    ~MyScene();

    shapeType GetShapeType() const;
    QPen GetPen() const;
    QBrush GetBrush() const;

    void SetPen(QPen);
    void SetBrush(QBrush);

    QPixmap getMyPix() const;
    void setMyPix(const QPixmap &value);

signals:
    void NewShapeAddedSignal(shapeType shape, QSize size,  QColor penColor,  QColor brushColor, QPixmap pix, int thick);

public slots:
    void SetShapeType(shapeType);
    void SetPenColor();




    // QGraphicsScene interface
protected:
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *event);
    virtual void mouseMoveEvent(QGraphicsSceneMouseEvent *event);
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
};

#endif // MYSCENE_H
