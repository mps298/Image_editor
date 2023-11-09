#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <QWidget>
#include "lab6.h"

#include <QPainter>

class Example : public QWidget
{
    Q_OBJECT
    QPen examplePen;
    QBrush exampleBrush;
    shapeType exampleShape;
    QPixmap examplePix;

public:
    explicit Example(QWidget *parent = nullptr);

signals:

public slots:
    void SetPenRed(int);
    void SetPenBlue(int);
    void SetPenGreen(int);
    void SetPenStyle(int);
    void SetPenThick(int);

    void SetBrushRed(int);
    void SetBrushGreen(int);
    void SetBrushBlue(int);
    void SetBrushStyle(int);

    void SetShapeType(int);
    void SetPix(QPixmap);



    // QWidget interface
protected:
    virtual void paintEvent(QPaintEvent *event);
};

#endif // EXAMPLE_H
