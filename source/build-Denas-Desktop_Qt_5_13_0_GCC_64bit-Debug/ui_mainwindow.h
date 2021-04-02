/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *downButton;
    QPushButton *upButton;
    QPushButton *selectButton;
    QPushButton *homeButton;
    QPushButton *powerButton;
    QPushButton *backButton;
    QPushButton *rightButton;
    QPushButton *leftButton;
    QLabel *display;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *batteryLabel;
    QSlider *batterySlider;
    QProgressBar *batteryBar;
    QFrame *line;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(487, 472);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        downButton = new QPushButton(centralWidget);
        downButton->setObjectName(QString::fromUtf8("downButton"));
        downButton->setGeometry(QRect(90, 310, 61, 61));
        upButton = new QPushButton(centralWidget);
        upButton->setObjectName(QString::fromUtf8("upButton"));
        upButton->setGeometry(QRect(90, 190, 61, 61));
        selectButton = new QPushButton(centralWidget);
        selectButton->setObjectName(QString::fromUtf8("selectButton"));
        selectButton->setGeometry(QRect(90, 250, 61, 61));
        homeButton = new QPushButton(centralWidget);
        homeButton->setObjectName(QString::fromUtf8("homeButton"));
        homeButton->setGeometry(QRect(170, 400, 61, 61));
        powerButton = new QPushButton(centralWidget);
        powerButton->setObjectName(QString::fromUtf8("powerButton"));
        powerButton->setGeometry(QRect(90, 400, 61, 61));
        backButton = new QPushButton(centralWidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(10, 400, 61, 61));
        rightButton = new QPushButton(centralWidget);
        rightButton->setObjectName(QString::fromUtf8("rightButton"));
        rightButton->setGeometry(QRect(150, 250, 61, 61));
        leftButton = new QPushButton(centralWidget);
        leftButton->setObjectName(QString::fromUtf8("leftButton"));
        leftButton->setGeometry(QRect(30, 250, 61, 61));
        display = new QLabel(centralWidget);
        display->setObjectName(QString::fromUtf8("display"));
        display->setGeometry(QRect(10, 10, 221, 171));
        display->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: 'AlignVCenter | AlignRight';\n"
"	border: 1px solid gray;\n"
"}\n"
"\n"
"background-color: white;"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(260, 390, 211, 71));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        batteryLabel = new QLabel(layoutWidget);
        batteryLabel->setObjectName(QString::fromUtf8("batteryLabel"));

        verticalLayout->addWidget(batteryLabel);

        batterySlider = new QSlider(layoutWidget);
        batterySlider->setObjectName(QString::fromUtf8("batterySlider"));
        batterySlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(batterySlider);

        batteryBar = new QProgressBar(layoutWidget);
        batteryBar->setObjectName(QString::fromUtf8("batteryBar"));
        batteryBar->setValue(24);

        verticalLayout->addWidget(batteryBar);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(230, 10, 31, 451));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "DENAS Simulator", nullptr));
        downButton->setText(QCoreApplication::translate("MainWindow", "DOWN", nullptr));
        upButton->setText(QCoreApplication::translate("MainWindow", "UP", nullptr));
        selectButton->setText(QCoreApplication::translate("MainWindow", "SELECT", nullptr));
        homeButton->setText(QCoreApplication::translate("MainWindow", "HOME", nullptr));
        powerButton->setText(QCoreApplication::translate("MainWindow", "POWER", nullptr));
        backButton->setText(QCoreApplication::translate("MainWindow", "BACK", nullptr));
        rightButton->setText(QCoreApplication::translate("MainWindow", "RIGHT", nullptr));
        leftButton->setText(QCoreApplication::translate("MainWindow", "LEFT", nullptr));
        display->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        batteryLabel->setText(QCoreApplication::translate("MainWindow", "Battery", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
