#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->upButton, SIGNAL(released()), this, SLOT(buttonPressed()));
    connect(ui->downButton, SIGNAL(released()), this, SLOT(buttonPressed()));
    connect(ui->leftButton, SIGNAL(released()), this, SLOT(buttonPressed()));
    connect(ui->rightButton, SIGNAL(released()), this, SLOT(buttonPressed()));
    connect(ui->selectButton, SIGNAL(released()), this, SLOT(buttonPressed()));
    connect(ui->powerButton, SIGNAL(released()), this, SLOT(buttonPressed()));
    connect(ui->backButton, SIGNAL(released()), this, SLOT(buttonPressed()));
    connect(ui->homeButton, SIGNAL(released()), this, SLOT(buttonPressed()));
    connect(ui->batterySlider, SIGNAL(valueChanged(int)),
            ui->batteryBar, SLOT(setValue(int)));
    connect(ui->batterySlider, SIGNAL(valueChanged(int)),
            ui->percentLabel, SLOT(setNum(int)));
    connect(ui->powerButton, SIGNAL(pressed()),
            ui->listWidget, SLOT(clear()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::battery(){

}

void MainWindow::buttonPressed(){
    QPushButton * button = (QPushButton*) sender();

    ui->denasLabel->setText(button->text());

}
