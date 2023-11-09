#pragma once

#ifndef LAB6_H
#define LAB6_H

#include <QObject>
#include <QGraphicsScene>
#include <QGraphicsView>
#include <QAbstractGraphicsShapeItem>
#include <QPainter>
#include <QPalette>
#include <QPointF>
#include <QActionGroup>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsRectItem>
#include <QGraphicsEllipseItem>
#include <QColorDialog>
#include <QMainWindow>
#include <QColor>
#include <QFile>
#include <QFileDialog>
#include <QPixmap>
#include <cmath>

enum shapeType{Line, Rectangle, Ellipse, Triangle, Image};

class MyScene;
class Dialog;


namespace Ui {
class Lab6;
}

class Lab6 : public QMainWindow
{
   Q_OBJECT

    MyScene* scene;
    QActionGroup* actionGroup;

public:
    explicit Lab6(QWidget *parent = 0);
    ~Lab6();

private slots:
    void on_actionRectangle_triggered();
    void on_actionEllipse_triggered();
    void on_actionChoose_Color_triggered();
    void on_actionSettings_dialog_triggered();
    void on_actionTriangle_triggered();
    void on_actionLine_triggered();


    void AddShapeToTableSlot(shapeType shape, QSize size,  QColor penColor,  QColor brushColor, QPixmap pix, int thick);

    void on_actionReset_triggered();

    void on_actionImage_triggered();

private:
    Ui::Lab6 *ui;
};

#endif // LAB6_H
