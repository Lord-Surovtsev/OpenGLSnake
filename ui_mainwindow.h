/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Wed Nov 13 22:32:44 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "glwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    GLWidget *widget;
    QVBoxLayout *verticalLayout;
    QSlider *hS_Dx;
    QSlider *hS_Dy;
    QSlider *hS_Dz;
    QFrame *line;
    QSlider *hS_Rx;
    QSlider *hS_Ry;
    QSlider *hS_Rz;
    QSpacerItem *verticalSpacer;
    QPushButton *pB_Quit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::ApplicationModal);
        MainWindow->resize(338, 351);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new GLWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(widget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        hS_Dx = new QSlider(centralwidget);
        hS_Dx->setObjectName(QString::fromUtf8("hS_Dx"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(hS_Dx->sizePolicy().hasHeightForWidth());
        hS_Dx->setSizePolicy(sizePolicy2);
        hS_Dx->setMinimum(-50);
        hS_Dx->setMaximum(50);
        hS_Dx->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(hS_Dx);

        hS_Dy = new QSlider(centralwidget);
        hS_Dy->setObjectName(QString::fromUtf8("hS_Dy"));
        sizePolicy2.setHeightForWidth(hS_Dy->sizePolicy().hasHeightForWidth());
        hS_Dy->setSizePolicy(sizePolicy2);
        hS_Dy->setMinimum(-50);
        hS_Dy->setMaximum(50);
        hS_Dy->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(hS_Dy);

        hS_Dz = new QSlider(centralwidget);
        hS_Dz->setObjectName(QString::fromUtf8("hS_Dz"));
        sizePolicy2.setHeightForWidth(hS_Dz->sizePolicy().hasHeightForWidth());
        hS_Dz->setSizePolicy(sizePolicy2);
        hS_Dz->setMinimum(-50);
        hS_Dz->setMaximum(50);
        hS_Dz->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(hS_Dz);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        hS_Rx = new QSlider(centralwidget);
        hS_Rx->setObjectName(QString::fromUtf8("hS_Rx"));
        sizePolicy2.setHeightForWidth(hS_Rx->sizePolicy().hasHeightForWidth());
        hS_Rx->setSizePolicy(sizePolicy2);
        hS_Rx->setMinimum(-90);
        hS_Rx->setMaximum(90);
        hS_Rx->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(hS_Rx);

        hS_Ry = new QSlider(centralwidget);
        hS_Ry->setObjectName(QString::fromUtf8("hS_Ry"));
        sizePolicy2.setHeightForWidth(hS_Ry->sizePolicy().hasHeightForWidth());
        hS_Ry->setSizePolicy(sizePolicy2);
        hS_Ry->setMinimum(-90);
        hS_Ry->setMaximum(90);
        hS_Ry->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(hS_Ry);

        hS_Rz = new QSlider(centralwidget);
        hS_Rz->setObjectName(QString::fromUtf8("hS_Rz"));
        sizePolicy2.setHeightForWidth(hS_Rz->sizePolicy().hasHeightForWidth());
        hS_Rz->setSizePolicy(sizePolicy2);
        hS_Rz->setMinimum(-90);
        hS_Rz->setMaximum(90);
        hS_Rz->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(hS_Rz);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pB_Quit = new QPushButton(centralwidget);
        pB_Quit->setObjectName(QString::fromUtf8("pB_Quit"));
        sizePolicy2.setHeightForWidth(pB_Quit->sizePolicy().hasHeightForWidth());
        pB_Quit->setSizePolicy(sizePolicy2);

        verticalLayout->addWidget(pB_Quit);


        horizontalLayout->addLayout(verticalLayout);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(pB_Quit, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(hS_Dx, SIGNAL(sliderMoved(int)), widget, SLOT(on_hS_Dx_sliderMoved(int)));
        QObject::connect(hS_Dy, SIGNAL(sliderMoved(int)), widget, SLOT(on_hS_Dy_sliderMoved(int)));
        QObject::connect(hS_Dz, SIGNAL(sliderMoved(int)), widget, SLOT(on_hS_Dz_sliderMoved(int)));
        QObject::connect(hS_Rx, SIGNAL(sliderMoved(int)), widget, SLOT(on_hS_Rx_sliderMoved(int)));
        QObject::connect(hS_Ry, SIGNAL(sliderMoved(int)), widget, SLOT(on_hS_Ry_sliderMoved(int)));
        QObject::connect(hS_Rz, SIGNAL(sliderMoved(int)), widget, SLOT(on_hS_Rz_sliderMoved(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        pB_Quit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
