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
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
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
    QLabel *denasLabel;
    QWidget *layoutWidget;
    QVBoxLayout *batteryLayout;
    QLabel *batteryLabel;
    QSlider *batterySlider;
    QProgressBar *batteryBar;
    QFrame *line;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *frequencyLayout;
    QLabel *frequencyLabel;
    QSlider *frequencySlider;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *powerLayout;
    QLabel *powerLabel;
    QSlider *powerSlider;
    QCheckBox *touchSkinBox;
    QLabel *percentLabel;
    QLabel *label;
    QListWidget *listWidget;

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
        denasLabel = new QLabel(centralWidget);
        denasLabel->setObjectName(QString::fromUtf8("denasLabel"));
        denasLabel->setGeometry(QRect(10, 10, 221, 21));
        denasLabel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	qproperty-alignment: AlignCenter;\n"
"	border: 1px solid gray;\n"
"    background-color: white;\n"
"}\n"
"\n"
""));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(260, 390, 211, 71));
        batteryLayout = new QVBoxLayout(layoutWidget);
        batteryLayout->setSpacing(6);
        batteryLayout->setContentsMargins(11, 11, 11, 11);
        batteryLayout->setObjectName(QString::fromUtf8("batteryLayout"));
        batteryLayout->setContentsMargins(0, 0, 0, 0);
        batteryLabel = new QLabel(layoutWidget);
        batteryLabel->setObjectName(QString::fromUtf8("batteryLabel"));

        batteryLayout->addWidget(batteryLabel);

        batterySlider = new QSlider(layoutWidget);
        batterySlider->setObjectName(QString::fromUtf8("batterySlider"));
        batterySlider->setValue(99);
        batterySlider->setOrientation(Qt::Horizontal);

        batteryLayout->addWidget(batterySlider);

        batteryBar = new QProgressBar(layoutWidget);
        batteryBar->setObjectName(QString::fromUtf8("batteryBar"));
        batteryBar->setValue(100);

        batteryLayout->addWidget(batteryBar);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(230, 10, 31, 451));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(260, 70, 211, 51));
        frequencyLayout = new QVBoxLayout(verticalLayoutWidget);
        frequencyLayout->setSpacing(6);
        frequencyLayout->setContentsMargins(11, 11, 11, 11);
        frequencyLayout->setObjectName(QString::fromUtf8("frequencyLayout"));
        frequencyLayout->setContentsMargins(0, 0, 0, 0);
        frequencyLabel = new QLabel(verticalLayoutWidget);
        frequencyLabel->setObjectName(QString::fromUtf8("frequencyLabel"));

        frequencyLayout->addWidget(frequencyLabel);

        frequencySlider = new QSlider(verticalLayoutWidget);
        frequencySlider->setObjectName(QString::fromUtf8("frequencySlider"));
        frequencySlider->setOrientation(Qt::Horizontal);

        frequencyLayout->addWidget(frequencySlider);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(260, 10, 211, 51));
        powerLayout = new QVBoxLayout(verticalLayoutWidget_2);
        powerLayout->setSpacing(6);
        powerLayout->setContentsMargins(11, 11, 11, 11);
        powerLayout->setObjectName(QString::fromUtf8("powerLayout"));
        powerLayout->setContentsMargins(0, 0, 0, 0);
        powerLabel = new QLabel(verticalLayoutWidget_2);
        powerLabel->setObjectName(QString::fromUtf8("powerLabel"));

        powerLayout->addWidget(powerLabel);

        powerSlider = new QSlider(verticalLayoutWidget_2);
        powerSlider->setObjectName(QString::fromUtf8("powerSlider"));
        powerSlider->setOrientation(Qt::Horizontal);

        powerLayout->addWidget(powerSlider);

        touchSkinBox = new QCheckBox(centralWidget);
        touchSkinBox->setObjectName(QString::fromUtf8("touchSkinBox"));
        touchSkinBox->setGeometry(QRect(260, 130, 211, 23));
        percentLabel = new QLabel(centralWidget);
        percentLabel->setObjectName(QString::fromUtf8("percentLabel"));
        percentLabel->setGeometry(QRect(180, 10, 31, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(210, 10, 21, 21));
        listWidget = new QListWidget(centralWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 30, 221, 141));
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
        denasLabel->setText(QCoreApplication::translate("MainWindow", "DENAS", nullptr));
        batteryLabel->setText(QCoreApplication::translate("MainWindow", "Battery", nullptr));
        frequencyLabel->setText(QCoreApplication::translate("MainWindow", "Frequency", nullptr));
        powerLabel->setText(QCoreApplication::translate("MainWindow", "Power Level", nullptr));
        touchSkinBox->setText(QCoreApplication::translate("MainWindow", "Device Touching Skin", nullptr));
        percentLabel->setText(QCoreApplication::translate("MainWindow", "100", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "%", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "Programs", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "Frequency", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "Recordings", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("MainWindow", "Settings", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
