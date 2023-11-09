#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

class MyScene;
#include "lab6.h"

namespace Ui {
class Dialog;

}

class Dialog : public QDialog
{
    Q_OBJECT


public:
    explicit Dialog(const shapeType shape, const QPen pen, const QBrush brush, const QPixmap pix, QWidget *parent = 0);
    ~Dialog();
    shapeType GetShapeType();
    QPen GetPen ();
    QBrush GetBrush();

private:
    Ui::Dialog *ui;

    QPixmap dialogPix;

signals:
    void ShapeIsNotLine(bool);
    void ImageChoosenSignal(QPixmap);


private slots:
    void on_buttonBox_accepted();
    void DisableBrushSettings(int);
};

#endif // DIALOG_H
