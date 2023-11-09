#include "dialog.h"
#include "ui_dialog.h"
#include "myscene.h"


Dialog::Dialog(const shapeType shape, const QPen pen, const QBrush brush, const QPixmap pix, QWidget *parent) :
    QDialog(parent), dialogPix(pix),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->shapeComboBox->setCurrentIndex(static_cast<int>(shape));
    ui->penRedSlider->setValue(pen.color().red());
    ui->penGreenSlider->setValue(pen.color().green());
    ui->penBlueSlider->setValue(pen.color().blue());
    ui->penStyleComboBox->setCurrentIndex(pen.style());
    ui->penThickSpinBox->setValue(pen.width());
    ui->brushRedSlider->setValue(brush.color().red());
    ui->brushGreenSlider->setValue(brush.color().green());
    ui->brushBlueSlider->setValue(brush.color().blue());
    ui->brushStyleComboBox->setCurrentIndex(brush.style());

    emit ui->shapeComboBox->activated(ui->shapeComboBox->currentIndex());

    setWindowTitle("Figure Settings");

    repaint();
}

Dialog::~Dialog()
{
    delete ui;
}

shapeType Dialog::GetShapeType()
{
    return static_cast<shapeType>(ui->shapeComboBox->currentIndex());
}

QPen Dialog::GetPen()
{
    if (ui->shapeComboBox->currentText() == "Image")
    {
        return QPen();
    }


    QPen pen;
    pen.setColor(QColor(ui->penRedSlider->value(), ui->penGreenSlider->value(),ui->penBlueSlider->value()));
    switch (ui->penStyleComboBox->currentIndex())
    {
        case 0: pen.setStyle(Qt::NoPen); break;
        case 1: pen.setStyle(Qt::SolidLine); break;
        case 2: pen.setStyle(Qt::DashLine); break;
        case 3: pen.setStyle(Qt::DotLine); break;
        case 4: pen.setStyle(Qt::DashDotLine); break;
        case 5: pen.setStyle(Qt::DashDotDotLine); break;
        case 6: pen.setStyle(Qt::CustomDashLine); break;

    default:
        break;
    }
    pen.setWidth(ui->penThickSpinBox->value());

    return pen;
}

QBrush Dialog::GetBrush()
{
    if (ui->shapeComboBox->currentText() == "Image")
    {
        return QBrush();
    }

    QBrush brush;
    brush.setColor(QColor(ui->brushRedSlider->value(), ui->brushGreenSlider->value(),ui->brushBlueSlider->value()));

    switch (ui->brushStyleComboBox->currentIndex())
    {
        case 0: brush.setStyle(Qt::NoBrush); break;
        case 1: brush.setStyle(Qt::SolidPattern); break;
        case 2: brush.setStyle(Qt::Dense1Pattern); break;
        case 3: brush.setStyle(Qt::Dense2Pattern); break;
        case 4: brush.setStyle(Qt::Dense3Pattern); break;
        case 5: brush.setStyle(Qt::Dense4Pattern); break;
        case 6: brush.setStyle(Qt::Dense5Pattern); break;
        case 7: brush.setStyle(Qt::Dense6Pattern); break;
        case 8: brush.setStyle(Qt::Dense7Pattern); break;
        case 9: brush.setStyle(Qt::HorPattern); break;
        case 10: brush.setStyle(Qt::VerPattern); break;
        case 11: brush.setStyle(Qt::CrossPattern); break;
        case 12: brush.setStyle(Qt::BDiagPattern); break;
        case 13: brush.setStyle(Qt::FDiagPattern); break;
        case 14: brush.setStyle(Qt::DiagCrossPattern); break;

    default:
        break;
    }


    return brush;
}



void Dialog::on_buttonBox_accepted()
{

}

void Dialog::DisableBrushSettings(int shapeIndex)
{
    if (shapeIndex == static_cast<int>(Line))
    {
        ui->brushRedSlider->setEnabled(false);
        ui->brushGreenSlider->setEnabled(false);
        ui->brushBlueSlider->setEnabled(false);
        ui->brushStyleComboBox->setEnabled(false);
        ui->brushRedSpinBox->setEnabled(false);
        ui->brushGreenSpinBox->setEnabled(false);
        ui->brushBlueSpinBox->setEnabled(false);
    }
    else if (shapeIndex == static_cast<int>(Image))
    {
        ui->brushRedSlider->setEnabled(false);
        ui->brushGreenSlider->setEnabled(false);
        ui->brushBlueSlider->setEnabled(false);
        ui->brushStyleComboBox->setEnabled(false);
        ui->brushRedSpinBox->setEnabled(false);
        ui->brushGreenSpinBox->setEnabled(false);
        ui->brushBlueSpinBox->setEnabled(false);

        ui->penRedSlider->setEnabled(false);
        ui->penGreenSlider->setEnabled(false);
        ui->penBlueSlider->setEnabled(false);
        ui->penRedSpinBox->setEnabled(false);
        ui->penGreenSpinBox->setEnabled(false);
        ui->penBlueSpinBox->setEnabled(false);
        ui->penThickSpinBox->setEnabled(false);

        emit ImageChoosenSignal(dialogPix);
    }
    else
    {
        ui->brushRedSlider->setEnabled(true);
        ui->brushGreenSlider->setEnabled(true);
        ui->brushBlueSlider->setEnabled(true);
        ui->brushStyleComboBox->setEnabled(true);
        ui->brushRedSpinBox->setEnabled(true);
        ui->brushGreenSpinBox->setEnabled(true);
        ui->brushBlueSpinBox->setEnabled(true);

        ui->penRedSlider->setEnabled(true);
        ui->penGreenSlider->setEnabled(true);
        ui->penBlueSlider->setEnabled(true);
        ui->penRedSpinBox->setEnabled(true);
        ui->penGreenSpinBox->setEnabled(true);
        ui->penBlueSpinBox->setEnabled(true);
        ui->penThickSpinBox->setEnabled(true);
    }
}
