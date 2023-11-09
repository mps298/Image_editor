#include "example.h"
#include <QPainter>
#include <QDebug>


Example::Example(QWidget *parent) : QWidget(parent)
{

}

void Example::SetPenRed(int r)
{
    QColor tmp = examplePen.color();
     examplePen.setColor(QColor(r, tmp.green(), tmp.blue()));
     repaint();
}

void Example::SetPenBlue(int b)
{
    QColor tmp = examplePen.color();
     examplePen.setColor(QColor(tmp.red(), tmp.green(), b));
     repaint();
}

void Example::SetPenGreen(int g)
{
    QColor tmp = examplePen.color();
     examplePen.setColor(QColor(tmp.red(), g, tmp.blue()));
     repaint();
}

void Example::SetPenStyle(int s)
{
    switch (s)
    {
        case 0: examplePen.setStyle(Qt::NoPen); break;
        case 1: examplePen.setStyle(Qt::SolidLine); break;
        case 2: examplePen.setStyle(Qt::DashLine); break;
        case 3: examplePen.setStyle(Qt::DotLine); break;
        case 4: examplePen.setStyle(Qt::DashDotLine); break;
        case 5: examplePen.setStyle(Qt::DashDotDotLine); break;
        case 6: examplePen.setStyle(Qt::CustomDashLine); break;

    default:
        break;
    }
    repaint();
}

void Example::SetPenThick(int t)
{
    examplePen.setWidth(t);
    repaint();
}

void Example::SetBrushRed(int r)
{
   QColor tmp = exampleBrush.color();
    exampleBrush.setColor(QColor(r, tmp.green(), tmp.blue()));
    repaint();
}

void Example::SetBrushGreen(int g)
{
    QColor tmp = exampleBrush.color();
     exampleBrush.setColor(QColor(tmp.red(), g, tmp.blue()));
     repaint();
}

void Example::SetBrushBlue(int b)
{
    QColor tmp = exampleBrush.color();
     exampleBrush.setColor(QColor(tmp.red(), tmp.green(), b));
     repaint();
}

void Example::SetBrushStyle(int s)
{
    switch (s)
    {
        case 0: exampleBrush.setStyle(Qt::NoBrush); break;
        case 1: exampleBrush.setStyle(Qt::SolidPattern); break;
        case 2: exampleBrush.setStyle(Qt::Dense1Pattern); break;
        case 3: exampleBrush.setStyle(Qt::Dense2Pattern); break;
        case 4: exampleBrush.setStyle(Qt::Dense3Pattern); break;
        case 5: exampleBrush.setStyle(Qt::Dense4Pattern); break;
        case 6: exampleBrush.setStyle(Qt::Dense5Pattern); break;
        case 7: exampleBrush.setStyle(Qt::Dense6Pattern); break;
        case 8: exampleBrush.setStyle(Qt::Dense7Pattern); break;
        case 9: exampleBrush.setStyle(Qt::HorPattern); break;
        case 10: exampleBrush.setStyle(Qt::VerPattern); break;
        case 11: exampleBrush.setStyle(Qt::CrossPattern); break;
        case 12: exampleBrush.setStyle(Qt::BDiagPattern); break;
        case 13: exampleBrush.setStyle(Qt::FDiagPattern); break;
        case 14: exampleBrush.setStyle(Qt::DiagCrossPattern); break;

    default:
        break;
    }
    repaint();
}

void Example::SetShapeType(int s)
{
    exampleShape = static_cast<shapeType>(s);
    repaint();
}

void Example::SetPix(QPixmap p)
{
    examplePix = p;
    repaint();
}



void Example::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    painter.setPen(examplePen);
    painter.setBrush(exampleBrush);

    switch (exampleShape)
    {
        case Rectangle: painter.drawRect(QRect(width()/3, height()/3, width()/3, height()/3)); break;
        case Ellipse: painter.drawEllipse(QRect(width()/3, height()/3, width()/3, height()/3)); break;
        case Triangle:
        {
            QPointF points[3] = {QPointF(width()/2, height()/3), QPointF(width()/3, height()/3*2), QPointF(width()/3*2, height()/3*2)};
            painter.drawPolygon(points, 3);
            break;
        }
        case Line: painter.drawLine(QPointF(width()/3, height()/3), QPointF(width()/3*2, height()/3*2)); break;
        case Image:
        {
            if (examplePix == QPixmap())
            {
                painter.fillRect(QRect(width()/3, height()/3, width()/3, height()/3), QBrush(QPixmap(":/Images_lab6/image-outline.png"))); break;
            }
            else
            {
                painter.fillRect(QRect(width()/3, height()/3, width()/3, height()/3), QBrush(examplePix)); break;
            }
        }

    default:
        break;
    }
}
