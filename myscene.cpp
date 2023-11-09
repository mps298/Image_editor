 #include "myscene.h"
#include <QDebug>


QPixmap MyScene::getMyPix() const
{
    return myPix;
}

void MyScene::setMyPix(const QPixmap &value)
{
    myPix = value;
}

MyScene::MyScene(QGraphicsScene *parent) : QGraphicsScene(parent)
{
    setSceneRect(0,0,500,500);


    isDrawing = false;
    myShape = Rectangle;
    m_startPoint = QPointF(0,0);
    myPen.setColor(Qt::black);
    myPen.setStyle(Qt::SolidLine);
    myPen.setWidth(5);

    myBrush.setColor(Qt::lightGray);
    myBrush.setStyle(Qt::SolidPattern);

    current = nullptr;
    currentLine = nullptr;
    currentPix = nullptr;
}

MyScene::~MyScene()
{
    if (current)
    {
        delete current;
    }
    if (currentLine)
    {
        delete currentLine;
    }
    if(currentPix)
    {
        delete currentPix;
    }

}

shapeType MyScene::GetShapeType() const
{
    return myShape;
}

QPen MyScene::GetPen() const
{
    return myPen;
}

QBrush MyScene::GetBrush() const
{
    return myBrush;
}




void MyScene::SetShapeType(shapeType s)
{
    myShape = s;
}

void MyScene::SetPen(QPen p)
{
    myPen = p;
}

void MyScene::SetBrush(QBrush b)
{
    myBrush = b;
}



void MyScene::SetPenColor()
{
    QColor color = QColorDialog::getColor();
    if (color.isValid())
    {
        myPen.setColor(color);
    }

}



void MyScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->button()==Qt::RightButton)
    {
        m_startPoint = event->scenePos();
         switch (myShape)
         {
            case Image:
            {
                currentPix = new QGraphicsPixmapItem();
                currentPix->setShapeMode(QGraphicsPixmapItem::BoundingRectShape);
                currentPix->setOffset(m_startPoint);
                break;
            }
            case Rectangle: current = new QGraphicsRectItem(m_startPoint.x(), m_startPoint.y(), 0.,0.); break;
            case Ellipse: current = new QGraphicsEllipseItem(m_startPoint.x(), m_startPoint.y(), 0.,0.); break;
            case Triangle:
            {
                QVector<QPointF> trianglePoints(3, m_startPoint);
                current = new QGraphicsPolygonItem(QPolygonF(trianglePoints)); break;
            }
            case Line: currentLine = new QGraphicsLineItem(QLineF(m_startPoint, m_startPoint));
            default: break;
         }

        if (myShape == Line)
        {
            currentLine->setPen(myPen);
            currentLine->setFlags(QGraphicsItem::ItemIsSelectable);
            currentLine->setFlags(QGraphicsItem::ItemIsMovable);

            addItem(currentLine);
        }
        else if (myShape == Image)
        {
            currentPix->setFlags(QGraphicsItem::ItemIsSelectable);
            currentPix->setFlags(QGraphicsItem::ItemIsMovable);

            addItem(currentPix);
        }
        else
        {
            current->setPen(myPen);
            current->setBrush(myBrush);
            current->setFlags(QGraphicsItem::ItemIsSelectable);
            current->setFlags(QGraphicsItem::ItemIsMovable);

            addItem(current);
        }

        isDrawing = true;
    }
    QGraphicsScene::mousePressEvent(event);
}

void MyScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if (isDrawing)
    {
        switch (myShape)
        {
            case Image:
            {
                if (myPix == QPixmap())
                {
                    QString currentFileOpened = QFileDialog::getOpenFileName(0, "Download image", ".", "*.jpg");

                    if (!QFile::exists(currentFileOpened))
                    {
                        return;
                    }

                    QFile file(currentFileOpened);
                    if (!file.open(QIODevice::ReadOnly|QIODevice::Text))
                    {
                         return;
                    }

                    QImage image;
                    image.load(currentFileOpened);
                    myPix = QPixmap::fromImage(image);
                }
                QRectF tmpRect  = QRectF (m_startPoint, event->scenePos()).normalized();

                QPixmap tmpPix = myPix.scaled(QSize(tmpRect.width(), tmpRect.height()));
                qDebug()<<tmpPix;
                currentPix->setOffset(tmpRect.topLeft());
                currentPix->setPixmap(tmpPix);
                break;
            }
            case Rectangle: qgraphicsitem_cast<QGraphicsRectItem*>(current)->setRect(QRectF(m_startPoint, event->scenePos()).normalized()); break;
            case Ellipse: qgraphicsitem_cast<QGraphicsEllipseItem*>(current)->setRect(QRectF(m_startPoint, event->scenePos()).normalized()); break;
            case Triangle:
            {
                QPointF p1((event->scenePos().x() + m_startPoint.x())/2, m_startPoint.y());
                QPointF p2(m_startPoint.x(), event->scenePos().y());
                QPointF p3(event->scenePos());
                QVector<QPointF> trianglePoints = {p1,p2,p3};

                qgraphicsitem_cast<QGraphicsPolygonItem*>(current)->setPolygon(QPolygonF(trianglePoints));
                break;
            }
            case Line: currentLine->setLine(QLineF(m_startPoint, event->scenePos())); break;

        default: break;
        }

    }
    QGraphicsScene::mouseMoveEvent(event);
}

void MyScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    if (event->button()==Qt::RightButton)
    {
        if (isDrawing)
        {
            isDrawing = false;

            QSize size (abs(m_startPoint.x() - event->scenePos().x()), abs(m_startPoint.y() - event->scenePos().y()));

            if (myShape == Line)
            {
                emit NewShapeAddedSignal(myShape, size, currentLine->pen().color(), QColor(), QPixmap(), currentLine->pen().width());
                currentLine = nullptr;
            }
            else if (myShape == Image)
            {
                emit NewShapeAddedSignal(myShape, size, QColor(), QColor(), myPix, int());
                currentPix = nullptr;
            }
            else
            {
                emit NewShapeAddedSignal(myShape, size, current->pen().color(), current->brush().color(), QPixmap(), current->pen().width());
                current = nullptr;
            }
        }
    }

    QGraphicsScene::mouseReleaseEvent(event);
}































