/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "example.h"

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_2;
    QComboBox *penStyleComboBox;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout;
    QSlider *penRedSlider;
    QSpinBox *penRedSpinBox;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QSlider *penGreenSlider;
    QSpinBox *penGreenSpinBox;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_3;
    QSlider *penBlueSlider;
    QSpinBox *penBlueSpinBox;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_12;
    QComboBox *brushStyleComboBox;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_4;
    QSlider *brushRedSlider;
    QSpinBox *brushRedSpinBox;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_5;
    QSlider *brushGreenSlider;
    QSpinBox *brushGreenSpinBox;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_6;
    QSlider *brushBlueSlider;
    QSpinBox *brushBlueSpinBox;
    QVBoxLayout *verticalLayout_19;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *shapeComboBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_11;
    QSpinBox *penThickSpinBox;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *verticalSpacer_2;
    Example *exampleWidget;
    QLabel *label_19;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(829, 646);
        horizontalLayout_8 = new QHBoxLayout(Dialog);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_2);

        penStyleComboBox = new QComboBox(Dialog);
        penStyleComboBox->addItem(QString());
        penStyleComboBox->addItem(QString());
        penStyleComboBox->addItem(QString());
        penStyleComboBox->addItem(QString());
        penStyleComboBox->addItem(QString());
        penStyleComboBox->addItem(QString());
        penStyleComboBox->addItem(QString());
        penStyleComboBox->setObjectName(QStringLiteral("penStyleComboBox"));

        verticalLayout_3->addWidget(penStyleComboBox);


        verticalLayout_8->addLayout(verticalLayout_3);


        verticalLayout_10->addLayout(verticalLayout_8);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(label_3);

        label_4 = new QLabel(Dialog);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(label_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        penRedSlider = new QSlider(Dialog);
        penRedSlider->setObjectName(QStringLiteral("penRedSlider"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(penRedSlider->sizePolicy().hasHeightForWidth());
        penRedSlider->setSizePolicy(sizePolicy);
        penRedSlider->setMaximum(255);
        penRedSlider->setOrientation(Qt::Horizontal);
        penRedSlider->setTickPosition(QSlider::TicksAbove);
        penRedSlider->setTickInterval(25);

        horizontalLayout->addWidget(penRedSlider);

        penRedSpinBox = new QSpinBox(Dialog);
        penRedSpinBox->setObjectName(QStringLiteral("penRedSpinBox"));
        penRedSpinBox->setMaximum(255);

        horizontalLayout->addWidget(penRedSpinBox);


        verticalLayout_5->addLayout(horizontalLayout);

        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(label_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        penGreenSlider = new QSlider(Dialog);
        penGreenSlider->setObjectName(QStringLiteral("penGreenSlider"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(penGreenSlider->sizePolicy().hasHeightForWidth());
        penGreenSlider->setSizePolicy(sizePolicy1);
        penGreenSlider->setMaximum(255);
        penGreenSlider->setOrientation(Qt::Horizontal);
        penGreenSlider->setTickPosition(QSlider::TicksAbove);
        penGreenSlider->setTickInterval(25);

        horizontalLayout_2->addWidget(penGreenSlider);

        penGreenSpinBox = new QSpinBox(Dialog);
        penGreenSpinBox->setObjectName(QStringLiteral("penGreenSpinBox"));
        penGreenSpinBox->setMaximum(255);

        horizontalLayout_2->addWidget(penGreenSpinBox);


        verticalLayout_5->addLayout(horizontalLayout_2);

        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_5->addWidget(label_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        penBlueSlider = new QSlider(Dialog);
        penBlueSlider->setObjectName(QStringLiteral("penBlueSlider"));
        sizePolicy1.setHeightForWidth(penBlueSlider->sizePolicy().hasHeightForWidth());
        penBlueSlider->setSizePolicy(sizePolicy1);
        penBlueSlider->setMaximum(255);
        penBlueSlider->setOrientation(Qt::Horizontal);
        penBlueSlider->setTickPosition(QSlider::TicksAbove);
        penBlueSlider->setTickInterval(25);

        horizontalLayout_3->addWidget(penBlueSlider);

        penBlueSpinBox = new QSpinBox(Dialog);
        penBlueSpinBox->setObjectName(QStringLiteral("penBlueSpinBox"));
        penBlueSpinBox->setMaximum(255);

        horizontalLayout_3->addWidget(penBlueSpinBox);


        verticalLayout_5->addLayout(horizontalLayout_3);


        verticalLayout_10->addLayout(verticalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_3);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_12 = new QLabel(Dialog);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setAlignment(Qt::AlignCenter);

        verticalLayout_7->addWidget(label_12);

        brushStyleComboBox = new QComboBox(Dialog);
        brushStyleComboBox->addItem(QString());
        brushStyleComboBox->addItem(QString());
        brushStyleComboBox->addItem(QString());
        brushStyleComboBox->addItem(QString());
        brushStyleComboBox->addItem(QString());
        brushStyleComboBox->addItem(QString());
        brushStyleComboBox->addItem(QString());
        brushStyleComboBox->addItem(QString());
        brushStyleComboBox->addItem(QString());
        brushStyleComboBox->addItem(QString());
        brushStyleComboBox->addItem(QString());
        brushStyleComboBox->addItem(QString());
        brushStyleComboBox->addItem(QString());
        brushStyleComboBox->addItem(QString());
        brushStyleComboBox->addItem(QString());
        brushStyleComboBox->setObjectName(QStringLiteral("brushStyleComboBox"));

        verticalLayout_7->addWidget(brushStyleComboBox);


        verticalLayout_10->addLayout(verticalLayout_7);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_9 = new QLabel(Dialog);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_9);

        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        brushRedSlider = new QSlider(Dialog);
        brushRedSlider->setObjectName(QStringLiteral("brushRedSlider"));
        sizePolicy1.setHeightForWidth(brushRedSlider->sizePolicy().hasHeightForWidth());
        brushRedSlider->setSizePolicy(sizePolicy1);
        brushRedSlider->setMaximum(255);
        brushRedSlider->setOrientation(Qt::Horizontal);
        brushRedSlider->setTickPosition(QSlider::TicksAbove);
        brushRedSlider->setTickInterval(25);

        horizontalLayout_4->addWidget(brushRedSlider);

        brushRedSpinBox = new QSpinBox(Dialog);
        brushRedSpinBox->setObjectName(QStringLiteral("brushRedSpinBox"));
        brushRedSpinBox->setMaximum(255);

        horizontalLayout_4->addWidget(brushRedSpinBox);


        verticalLayout_4->addLayout(horizontalLayout_4);

        label_10 = new QLabel(Dialog);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_10);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        brushGreenSlider = new QSlider(Dialog);
        brushGreenSlider->setObjectName(QStringLiteral("brushGreenSlider"));
        sizePolicy1.setHeightForWidth(brushGreenSlider->sizePolicy().hasHeightForWidth());
        brushGreenSlider->setSizePolicy(sizePolicy1);
        brushGreenSlider->setMaximum(255);
        brushGreenSlider->setOrientation(Qt::Horizontal);
        brushGreenSlider->setTickPosition(QSlider::TicksAbove);
        brushGreenSlider->setTickInterval(25);

        horizontalLayout_5->addWidget(brushGreenSlider);

        brushGreenSpinBox = new QSpinBox(Dialog);
        brushGreenSpinBox->setObjectName(QStringLiteral("brushGreenSpinBox"));
        brushGreenSpinBox->setMaximum(255);

        horizontalLayout_5->addWidget(brushGreenSpinBox);


        verticalLayout_4->addLayout(horizontalLayout_5);

        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_4->addWidget(label_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        brushBlueSlider = new QSlider(Dialog);
        brushBlueSlider->setObjectName(QStringLiteral("brushBlueSlider"));
        sizePolicy1.setHeightForWidth(brushBlueSlider->sizePolicy().hasHeightForWidth());
        brushBlueSlider->setSizePolicy(sizePolicy1);
        brushBlueSlider->setMaximum(255);
        brushBlueSlider->setOrientation(Qt::Horizontal);
        brushBlueSlider->setTickPosition(QSlider::TicksAbove);
        brushBlueSlider->setTickInterval(25);

        horizontalLayout_6->addWidget(brushBlueSlider);

        brushBlueSpinBox = new QSpinBox(Dialog);
        brushBlueSpinBox->setObjectName(QStringLiteral("brushBlueSpinBox"));
        brushBlueSpinBox->setMaximum(255);

        horizontalLayout_6->addWidget(brushBlueSpinBox);


        verticalLayout_4->addLayout(horizontalLayout_6);


        verticalLayout_10->addLayout(verticalLayout_4);


        horizontalLayout_8->addLayout(verticalLayout_10);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        shapeComboBox = new QComboBox(Dialog);
        shapeComboBox->addItem(QString());
        shapeComboBox->addItem(QString());
        shapeComboBox->addItem(QString());
        shapeComboBox->addItem(QString());
        shapeComboBox->addItem(QString());
        shapeComboBox->setObjectName(QStringLiteral("shapeComboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(shapeComboBox->sizePolicy().hasHeightForWidth());
        shapeComboBox->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(shapeComboBox);


        horizontalLayout_7->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_11 = new QLabel(Dialog);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(label_11);

        penThickSpinBox = new QSpinBox(Dialog);
        penThickSpinBox->setObjectName(QStringLiteral("penThickSpinBox"));
        penThickSpinBox->setAlignment(Qt::AlignCenter);
        penThickSpinBox->setMaximum(20);

        verticalLayout_2->addWidget(penThickSpinBox);


        horizontalLayout_7->addLayout(verticalLayout_2);


        verticalLayout_6->addLayout(horizontalLayout_7);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);

        exampleWidget = new Example(Dialog);
        exampleWidget->setObjectName(QStringLiteral("exampleWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(exampleWidget->sizePolicy().hasHeightForWidth());
        exampleWidget->setSizePolicy(sizePolicy3);
        label_19 = new QLabel(exampleWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(0, 50, 396, 31));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_19->setFont(font);
        label_19->setAlignment(Qt::AlignCenter);

        verticalLayout_9->addWidget(exampleWidget);


        verticalLayout_6->addLayout(verticalLayout_9);


        verticalLayout_19->addLayout(verticalLayout_6);

        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_19->addWidget(buttonBox);


        horizontalLayout_8->addLayout(verticalLayout_19);


        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));
        QObject::connect(shapeComboBox, SIGNAL(currentIndexChanged(int)), exampleWidget, SLOT(SetShapeType(int)));
        QObject::connect(penThickSpinBox, SIGNAL(valueChanged(int)), exampleWidget, SLOT(SetPenThick(int)));
        QObject::connect(penRedSlider, SIGNAL(valueChanged(int)), exampleWidget, SLOT(SetPenRed(int)));
        QObject::connect(penGreenSlider, SIGNAL(valueChanged(int)), exampleWidget, SLOT(SetPenGreen(int)));
        QObject::connect(penBlueSlider, SIGNAL(valueChanged(int)), exampleWidget, SLOT(SetPenBlue(int)));
        QObject::connect(brushRedSlider, SIGNAL(valueChanged(int)), exampleWidget, SLOT(SetBrushRed(int)));
        QObject::connect(brushGreenSlider, SIGNAL(valueChanged(int)), exampleWidget, SLOT(SetBrushGreen(int)));
        QObject::connect(brushBlueSlider, SIGNAL(valueChanged(int)), exampleWidget, SLOT(SetBrushBlue(int)));
        QObject::connect(brushStyleComboBox, SIGNAL(currentIndexChanged(int)), exampleWidget, SLOT(SetBrushStyle(int)));
        QObject::connect(shapeComboBox, SIGNAL(activated(int)), Dialog, SLOT(DisableBrushSettings(int)));
        QObject::connect(shapeComboBox, SIGNAL(currentIndexChanged(int)), Dialog, SLOT(DisableBrushSettings(int)));
        QObject::connect(shapeComboBox, SIGNAL(activated(int)), exampleWidget, SLOT(SetShapeType(int)));
        QObject::connect(penRedSlider, SIGNAL(valueChanged(int)), penRedSpinBox, SLOT(setValue(int)));
        QObject::connect(penGreenSlider, SIGNAL(valueChanged(int)), penGreenSpinBox, SLOT(setValue(int)));
        QObject::connect(penBlueSlider, SIGNAL(valueChanged(int)), penBlueSpinBox, SLOT(setValue(int)));
        QObject::connect(brushRedSlider, SIGNAL(valueChanged(int)), brushRedSpinBox, SLOT(setValue(int)));
        QObject::connect(brushGreenSlider, SIGNAL(valueChanged(int)), brushGreenSpinBox, SLOT(setValue(int)));
        QObject::connect(brushBlueSlider, SIGNAL(valueChanged(int)), brushBlueSpinBox, SLOT(setValue(int)));
        QObject::connect(penRedSpinBox, SIGNAL(valueChanged(int)), penRedSlider, SLOT(setValue(int)));
        QObject::connect(penGreenSpinBox, SIGNAL(valueChanged(int)), penGreenSlider, SLOT(setValue(int)));
        QObject::connect(penBlueSpinBox, SIGNAL(valueChanged(int)), penBlueSlider, SLOT(setValue(int)));
        QObject::connect(brushRedSpinBox, SIGNAL(valueChanged(int)), brushRedSlider, SLOT(setValue(int)));
        QObject::connect(brushGreenSpinBox, SIGNAL(valueChanged(int)), brushGreenSlider, SLOT(setValue(int)));
        QObject::connect(brushBlueSpinBox, SIGNAL(valueChanged(int)), brushBlueSlider, SLOT(setValue(int)));
        QObject::connect(penStyleComboBox, SIGNAL(currentIndexChanged(int)), exampleWidget, SLOT(SetPenStyle(int)));
        QObject::connect(Dialog, SIGNAL(ImageChoosenSignal(QPixmap)), exampleWidget, SLOT(SetPix(QPixmap)));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        label_2->setText(QApplication::translate("Dialog", "Pen style", nullptr));
        penStyleComboBox->setItemText(0, QApplication::translate("Dialog", "No pen", nullptr));
        penStyleComboBox->setItemText(1, QApplication::translate("Dialog", "Solid line", nullptr));
        penStyleComboBox->setItemText(2, QApplication::translate("Dialog", "Dash line", nullptr));
        penStyleComboBox->setItemText(3, QApplication::translate("Dialog", "Dot line", nullptr));
        penStyleComboBox->setItemText(4, QApplication::translate("Dialog", "Dash dot line", nullptr));
        penStyleComboBox->setItemText(5, QApplication::translate("Dialog", "Dash dot dot line", nullptr));
        penStyleComboBox->setItemText(6, QApplication::translate("Dialog", "Custom dash line", nullptr));

        label_3->setText(QApplication::translate("Dialog", "Pen color", nullptr));
        label_4->setText(QApplication::translate("Dialog", "Red", nullptr));
        label_5->setText(QApplication::translate("Dialog", "Green", nullptr));
        label_6->setText(QApplication::translate("Dialog", "Blue", nullptr));
        label_12->setText(QApplication::translate("Dialog", "Brush style", nullptr));
        brushStyleComboBox->setItemText(0, QApplication::translate("Dialog", "No Brush", nullptr));
        brushStyleComboBox->setItemText(1, QApplication::translate("Dialog", "Solid Pattern", nullptr));
        brushStyleComboBox->setItemText(2, QApplication::translate("Dialog", "Dense1 Pattern", nullptr));
        brushStyleComboBox->setItemText(3, QApplication::translate("Dialog", "Dense2 Pattern", nullptr));
        brushStyleComboBox->setItemText(4, QApplication::translate("Dialog", "Dense3 Pattern", nullptr));
        brushStyleComboBox->setItemText(5, QApplication::translate("Dialog", "Dense4 Pattern", nullptr));
        brushStyleComboBox->setItemText(6, QApplication::translate("Dialog", "Dense5 Pattern", nullptr));
        brushStyleComboBox->setItemText(7, QApplication::translate("Dialog", "Dense6 Pattern", nullptr));
        brushStyleComboBox->setItemText(8, QApplication::translate("Dialog", "Dense7 Pattern", nullptr));
        brushStyleComboBox->setItemText(9, QApplication::translate("Dialog", "Horizontal Pattern", nullptr));
        brushStyleComboBox->setItemText(10, QApplication::translate("Dialog", "Vertical Pattern", nullptr));
        brushStyleComboBox->setItemText(11, QApplication::translate("Dialog", "Cross Pattern", nullptr));
        brushStyleComboBox->setItemText(12, QApplication::translate("Dialog", "Backward Diagonal Pattern", nullptr));
        brushStyleComboBox->setItemText(13, QApplication::translate("Dialog", "Forward Diagonal Pattern", nullptr));
        brushStyleComboBox->setItemText(14, QApplication::translate("Dialog", "Diagonal Cross Pattern", nullptr));

        label_9->setText(QApplication::translate("Dialog", "Brush color", nullptr));
        label_8->setText(QApplication::translate("Dialog", "Red", nullptr));
        label_10->setText(QApplication::translate("Dialog", "Green", nullptr));
        label_7->setText(QApplication::translate("Dialog", "Blue", nullptr));
        label->setText(QApplication::translate("Dialog", "Shape", nullptr));
        shapeComboBox->setItemText(0, QApplication::translate("Dialog", "Line", nullptr));
        shapeComboBox->setItemText(1, QApplication::translate("Dialog", "Rectagle", nullptr));
        shapeComboBox->setItemText(2, QApplication::translate("Dialog", "Ellipse", nullptr));
        shapeComboBox->setItemText(3, QApplication::translate("Dialog", "Triangle", nullptr));
        shapeComboBox->setItemText(4, QApplication::translate("Dialog", "Image", nullptr));

        label_11->setText(QApplication::translate("Dialog", "Pen thickness", nullptr));
        label_19->setText(QApplication::translate("Dialog", "Your figure will look like this:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
