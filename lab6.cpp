#include "lab6.h"
#include "ui_lab6.h"
#include "myscene.h"
#include "dialog.h"
#include <QDebug>



Lab6::Lab6(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Lab6)
{
     ui->setupUi(this);

     actionGroup = new QActionGroup(this);
     actionGroup->addAction(ui->actionRectangle);
     actionGroup->addAction(ui->actionEllipse);
     actionGroup->addAction(ui->actionTriangle);
     actionGroup->addAction(ui->actionLine);
     actionGroup->addAction(ui->actionImage);

     ui->actionRectangle->setChecked(true);


    scene = new MyScene();
    ui->graphicsView->setScene(scene);


setWindowTitle("Medvedev Photoshop");

connect(scene, SIGNAL(NewShapeAddedSignal(shapeType,QSize,QColor,QColor,QPixmap,int)),
        this, SLOT(AddShapeToTableSlot(shapeType,QSize,QColor,QColor,QPixmap,int)));

}

Lab6::~Lab6()
{
    delete ui;
    if (scene)
    {
//        delete scene;
    }
}

void Lab6::on_actionRectangle_triggered()
{
    scene->SetShapeType(Rectangle);
}

void Lab6::on_actionEllipse_triggered()
{
    scene->SetShapeType(Ellipse);
}

void Lab6::on_actionTriangle_triggered()
{
    scene->SetShapeType(Triangle);
}

void Lab6::on_actionLine_triggered()
{
    scene->SetShapeType(Line);
}

void Lab6::on_actionImage_triggered()
{
    scene->setMyPix(QPixmap());
    scene->SetShapeType(Image);
    QString currentFileOpened = QFileDialog::getOpenFileName(0, "Download image", ".", "*.jpg");

    if (!QFile::exists(currentFileOpened))
    {
        ui->statusBar->showMessage("No file", 1500);
        return;
    }

    QFile file(currentFileOpened);
    if (!file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
         ui->statusBar->showMessage("Downloading failed", 1500);
         return;
    }

    QImage image;
    image.load(currentFileOpened);
    QPixmap pix = QPixmap::fromImage(image);

    scene->setMyPix(pix);
    qDebug()<<pix;
}

void Lab6::on_actionChoose_Color_triggered()
{
    scene->SetPenColor();
}

void Lab6::on_actionReset_triggered()
{
    scene->clear();
    ui->shapesTableWidget->setRowCount(0);
}


void Lab6::on_actionSettings_dialog_triggered()
{

    QPen pen;
    QBrush brush;
    QPixmap pix;
    if (scene->GetShapeType()!=Image)
    {
        pen = scene->GetPen();
        brush = scene->GetBrush();
    }
    else
    {
        pix = scene->getMyPix();
    }

    Dialog settingsDialog(scene->GetShapeType(),pen,brush,pix);

    if (settingsDialog.exec()==0)   {  return;  }
    qDebug()<<"Still works after return!";


        switch (settingsDialog.GetShapeType())
        {
            case Image:
            {
                ui->actionEllipse->setChecked(false);
                ui->actionTriangle->setChecked(false);
                ui->actionLine->setChecked(false);
                ui->actionRectangle->setChecked(false);
                ui->actionImage->setChecked(true);
                break;
            }
            case Rectangle:
            {
                ui->actionEllipse->setChecked(false);
                ui->actionTriangle->setChecked(false);
                ui->actionLine->setChecked(false);
                ui->actionRectangle->setChecked(true);
                ui->actionImage->setChecked(false);
                break;
            }
            case Ellipse:
            {
                ui->actionEllipse->setChecked(true);
                ui->actionTriangle->setChecked(false);
                ui->actionRectangle->setChecked(false);
                ui->actionLine->setChecked(false);
                ui->actionImage->setChecked(false);
                break;
            }
            case Triangle:
            {
                ui->actionEllipse->setChecked(false);
                ui->actionTriangle->setChecked(true);
                ui->actionRectangle->setChecked(false);
                ui->actionLine->setChecked(false);
                ui->actionImage->setChecked(false);
                break;
            }
            case Line:
            {
                ui->actionEllipse->setChecked(false);
                ui->actionTriangle->setChecked(false);
                ui->actionRectangle->setChecked(false);
                ui->actionLine->setChecked(true);
                ui->actionImage->setChecked(false);
                break;
            }
            default: break;
        }

        scene->SetShapeType(settingsDialog.GetShapeType());
        scene->SetPen(settingsDialog.GetPen());
        scene->SetBrush(settingsDialog.GetBrush());

        if (settingsDialog.GetShapeType()==Image)
        {
//            qDebug()<<"Still works!";
            QString currentFileOpened = QFileDialog::getOpenFileName(0, "Download image", ".", "*.jpg");

            if (!QFile::exists(currentFileOpened))
            {
                ui->statusBar->showMessage("No file", 1500);
                return;
            }

            QFile file(currentFileOpened);
            if (!file.open(QIODevice::ReadOnly|QIODevice::Text))
            {
                 ui->statusBar->showMessage("Downloading failed", 1500);
                 return;
            }

            QImage image;
            image.load(currentFileOpened);
            QPixmap pix = QPixmap::fromImage(image);
            scene->setMyPix(pix);
        }

}

void Lab6::AddShapeToTableSlot(shapeType shape, QSize size, QColor penColor,  QColor brushColor, QPixmap pix, int thick)
{
    ui->shapesTableWidget->insertRow(ui->shapesTableWidget->rowCount());

    QTableWidgetItem *current0 = new QTableWidgetItem;
    QTableWidgetItem *current1 = new QTableWidgetItem;
    QTableWidgetItem *current2 = new QTableWidgetItem;
    QTableWidgetItem *current3 = new QTableWidgetItem;
    QTableWidgetItem *current4 = new QTableWidgetItem;

    switch (shape)
    {
        case Image:
        {
            current0->setIcon(QIcon(pix));
            current0->setText("Image");
            break;
        }
        case Rectangle:
        {
            current0->setIcon(QIcon(":/Images_lab6/Rect.ico"));
            current0->setText("Rectangle");
            break;
        }
        case Ellipse:
        {
            current0->setIcon(QIcon(":/Images_lab6/Circle.ico"));
            current0->setText("Ellipse");
            break;
        }
        case Triangle:
        {
            current0->setIcon(QIcon(":/Images_lab6/Triangle.ico"));
            current0->setText("Triangle");
            break;
        }
        case Line:
        {
            current0->setIcon(QIcon(":/Images_lab6/Line.ico"));
            current0->setText("Line");
            break;
        }
        default: break;
    }

    QString str1;
    if (shape == Line)
    {
            str1 = "length =" + QString::number(sqrt(size.width()*size.width() + size.height()*size.height()));
    }
    else
    {
        str1 = "width =" + QString::number(size.width()) + ", height = " + QString::number(size.height());
    }
    current1->setText(str1);

    if (shape != Image)
    {
        QString str2;
        str2 = "red = " + QString::number(penColor.red()) + ", green = " +
                QString::number(penColor.green()) + ", blue = " +
                QString::number(penColor.blue());

        current2->setText(str2);
        current2->setTextColor(penColor);

        QString str3;
        if (shape == Line)
        {
            str3 = "";
        }
        else
        {
            str3  = "red = " + QString::number(brushColor.red())
                    + ", green = " + QString::number(brushColor.green())
                    + ", blue = " + QString::number(brushColor.blue());
            current3->setTextColor(brushColor);
        }

        current3->setText(str3);

        current4->setData(Qt::DisplayRole, thick);
    }
    ui->shapesTableWidget->setItem(ui->shapesTableWidget->rowCount()-1, 0, current0);
    ui->shapesTableWidget->setItem(ui->shapesTableWidget->rowCount()-1, 1, current1);
    ui->shapesTableWidget->setItem(ui->shapesTableWidget->rowCount()-1, 2, current2);
    ui->shapesTableWidget->setItem(ui->shapesTableWidget->rowCount()-1, 3, current3);
    ui->shapesTableWidget->setItem(ui->shapesTableWidget->rowCount()-1, 4, current4);
}







