#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->upButton, SIGNAL(released()), this, SLOT(navUp()));
    connect(ui->downButton, SIGNAL(released()), this, SLOT(navDown()));
    connect(ui->leftButton, SIGNAL(released()), this, SLOT(buttonPressed()));
    connect(ui->rightButton, SIGNAL(released()), this, SLOT(buttonPressed()));
    connect(ui->selectButton, SIGNAL(released()), this, SLOT(buttonPressed()));
    connect(ui->powerButton, SIGNAL(released()), this, SLOT(buttonPressed()));
    connect(ui->backButton, SIGNAL(released()), this, SLOT(buttonPressed()));
    connect(ui->homeButton, SIGNAL(released()), this, SLOT(homeClicked()));
    connect(ui->batterySlider, SIGNAL(valueChanged(int)),
            ui->batteryBar, SLOT(setValue(int)));
    connect(ui->batterySlider, SIGNAL(valueChanged(int)),
            ui->percentLabel, SLOT(setNum(int)));
    connect(ui->powerButton, SIGNAL(pressed()),
            this, SLOT(powerClicked()));
    connect(ui->selectButton, SIGNAL(pressed()), this, SLOT(okClicked()));

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

void MainWindow::navigation(){


}

void MainWindow::navUp(){
    --menuLocation;
    if(menuLocation == -1)
        menuLocation=ui->listWidget->count() -1;
    ui->listWidget->setCurrentRow(menuLocation);

}

void MainWindow::navDown(){
    ++menuLocation;
    if(menuLocation == ui->listWidget->count())
        menuLocation = 0;
    ui->listWidget->setCurrentRow(menuLocation);
}

void MainWindow::powerClicked(){
    if (powerOn){
        ui->listWidget->clear();
        menuLocation=0;
    }else{
        ui->listWidget->addItem("Programs");
        ui->listWidget->addItem("Frequency");
        ui->listWidget->addItem("Recordings");
        ui->listWidget->addItem("Settings");
        menuLocation=0;
        ui->listWidget->setCurrentRow(menuLocation);
    }

    powerOn = !powerOn;
}

void MainWindow::programsClicked(){
    ui->listWidget->clear();
    ui->listWidget->addItem("Pain");
    ui->listWidget->addItem("Throat");
    ui->listWidget->addItem("Head");
    ui->listWidget->addItem("Bloating");
    ui->listWidget->setCurrentRow(0);
}

void MainWindow::frequencyClicked(){

        ui->listWidget->clear();

        ui->listWidget->addItem("10Hz");
        ui->listWidget->addItem("30Hz");
        ui->listWidget->addItem("75Hz");
        ui->listWidget->addItem("125Hz");
        ui->listWidget->setCurrentRow(0);
    }

void MainWindow::homeClicked(){
    ui->listWidget->clear();
    ui->listWidget->addItem("Programs");
    ui->listWidget->addItem("Frequency");
    ui->listWidget->addItem("Recordings");
    ui->listWidget->addItem("Settings");
    menuLocation=0;
    ui->listWidget->setCurrentRow(menuLocation);
    }

void MainWindow::okClicked(){
    //program selected from menu
    if (menuLocation == 0){
        programsClicked();
    } else if (menuLocation == 1) {
        frequencyClicked();
    }


    }

