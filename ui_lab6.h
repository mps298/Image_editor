/********************************************************************************
** Form generated from reading UI file 'lab6.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LAB6_H
#define UI_LAB6_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Lab6
{
public:
    QAction *actionRectangle;
    QAction *actionEllipse;
    QAction *actionChoose_Color;
    QAction *actionSettings_dialog;
    QAction *actionTriangle;
    QAction *actionLine;
    QAction *actionReset;
    QAction *actionImage;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;
    QTableWidget *shapesTableWidget;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuSettings;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Lab6)
    {
        if (Lab6->objectName().isEmpty())
            Lab6->setObjectName(QStringLiteral("Lab6"));
        Lab6->resize(1520, 1641);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Lab6->sizePolicy().hasHeightForWidth());
        Lab6->setSizePolicy(sizePolicy);
        actionRectangle = new QAction(Lab6);
        actionRectangle->setObjectName(QStringLiteral("actionRectangle"));
        actionRectangle->setCheckable(true);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images_lab6/Rect.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionRectangle->setIcon(icon);
        actionEllipse = new QAction(Lab6);
        actionEllipse->setObjectName(QStringLiteral("actionEllipse"));
        actionEllipse->setCheckable(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images_lab6/Circle.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionEllipse->setIcon(icon1);
        actionChoose_Color = new QAction(Lab6);
        actionChoose_Color->setObjectName(QStringLiteral("actionChoose_Color"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images_lab6/Colors.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionChoose_Color->setIcon(icon2);
        actionSettings_dialog = new QAction(Lab6);
        actionSettings_dialog->setObjectName(QStringLiteral("actionSettings_dialog"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Images_lab6/Settings.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings_dialog->setIcon(icon3);
        actionTriangle = new QAction(Lab6);
        actionTriangle->setObjectName(QStringLiteral("actionTriangle"));
        actionTriangle->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Images_lab6/Triangle.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionTriangle->setIcon(icon4);
        actionLine = new QAction(Lab6);
        actionLine->setObjectName(QStringLiteral("actionLine"));
        actionLine->setCheckable(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Images_lab6/Line.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionLine->setIcon(icon5);
        actionReset = new QAction(Lab6);
        actionReset->setObjectName(QStringLiteral("actionReset"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Images_lab6/reset.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionReset->setIcon(icon6);
        actionImage = new QAction(Lab6);
        actionImage->setObjectName(QStringLiteral("actionImage"));
        actionImage->setCheckable(true);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Images_lab6/image-outline.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImage->setIcon(icon7);
        centralWidget = new QWidget(Lab6);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralWidget->sizePolicy().hasHeightForWidth());
        centralWidget->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(2);
        sizePolicy2.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy2);
        graphicsView->setMinimumSize(QSize(500, 500));

        verticalLayout->addWidget(graphicsView);

        shapesTableWidget = new QTableWidget(centralWidget);
        if (shapesTableWidget->columnCount() < 5)
            shapesTableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        shapesTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        shapesTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        shapesTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        shapesTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        shapesTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        shapesTableWidget->setObjectName(QStringLiteral("shapesTableWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(shapesTableWidget->sizePolicy().hasHeightForWidth());
        shapesTableWidget->setSizePolicy(sizePolicy3);
        shapesTableWidget->horizontalHeader()->setDefaultSectionSize(200);
        shapesTableWidget->horizontalHeader()->setMinimumSectionSize(30);
        shapesTableWidget->horizontalHeader()->setStretchLastSection(false);
        shapesTableWidget->verticalHeader()->setCascadingSectionResizes(false);

        verticalLayout->addWidget(shapesTableWidget);

        Lab6->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Lab6);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1520, 25));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QStringLiteral("menuSettings"));
        Lab6->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Lab6);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Lab6->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Lab6);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Lab6->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuMenu->addAction(actionRectangle);
        menuMenu->addAction(actionEllipse);
        menuMenu->addAction(actionTriangle);
        menuMenu->addAction(actionLine);
        menuMenu->addAction(actionImage);
        menuSettings->addAction(actionChoose_Color);
        menuSettings->addAction(actionSettings_dialog);
        menuSettings->addAction(actionReset);
        mainToolBar->addAction(actionRectangle);
        mainToolBar->addAction(actionEllipse);
        mainToolBar->addAction(actionTriangle);
        mainToolBar->addAction(actionLine);
        mainToolBar->addAction(actionImage);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionChoose_Color);
        mainToolBar->addAction(actionReset);
        mainToolBar->addAction(actionSettings_dialog);

        retranslateUi(Lab6);

        QMetaObject::connectSlotsByName(Lab6);
    } // setupUi

    void retranslateUi(QMainWindow *Lab6)
    {
        Lab6->setWindowTitle(QApplication::translate("Lab6", "Lab6", nullptr));
        actionRectangle->setText(QApplication::translate("Lab6", "Rectangle", nullptr));
        actionEllipse->setText(QApplication::translate("Lab6", "Ellipse", nullptr));
        actionChoose_Color->setText(QApplication::translate("Lab6", "Color", nullptr));
        actionSettings_dialog->setText(QApplication::translate("Lab6", "  Settings Dialog", nullptr));
        actionTriangle->setText(QApplication::translate("Lab6", "Triangle", nullptr));
        actionLine->setText(QApplication::translate("Lab6", "Line", nullptr));
        actionReset->setText(QApplication::translate("Lab6", "Reset", nullptr));
        actionImage->setText(QApplication::translate("Lab6", "Image", nullptr));
        QTableWidgetItem *___qtablewidgetitem = shapesTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Lab6", "Shape type", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = shapesTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Lab6", "Size", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = shapesTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Lab6", "Pen color", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = shapesTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Lab6", "Brush color", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = shapesTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Lab6", "Pen thickness", nullptr));
        menuMenu->setTitle(QApplication::translate("Lab6", "Shape", nullptr));
        menuSettings->setTitle(QApplication::translate("Lab6", "Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Lab6: public Ui_Lab6 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LAB6_H
