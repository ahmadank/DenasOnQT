#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    connect(ui->upButton, SIGNAL(released()), this, SLOT(navUp()));
    connect(ui->downButton, SIGNAL(released()), this, SLOT(navDown()));
    connect(ui->leftButton, SIGNAL(released()), this, SLOT(returnButton()));
    connect(ui->rightButton, SIGNAL(released()), this, SLOT(okClicked()));
    connect(ui->backButton, SIGNAL(released()), this, SLOT(returnButton()));
    connect(ui->homeButton, SIGNAL(released()), this, SLOT(homeClicked()));
    connect(ui->batterySlider, SIGNAL(valueChanged(int)), ui->batteryBar, SLOT(setValue(int)));
    connect(ui->batterySlider, SIGNAL(valueChanged(int)), ui->percentLabel, SLOT(setNum(int)));
    connect(ui->powerButton, SIGNAL(pressed()), this, SLOT(powerClicked()));
    connect(ui->selectButton, SIGNAL(pressed()), this, SLOT(okClicked()));
    connect(ui->touchSkinBox, SIGNAL(stateChanged(int)), this, SLOT(decreaseBattery()));
    connect(ui->powerSlider, SIGNAL(valueChanged(int)), this, SLOT(powerLevel(int)));

}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::navUp(){
    device.setMenuLocation(device.getMenuLocation() - 1);
    if(device.getMenuLocation() == -1)
        device.setMenuLocation(ui->listWidget->count() -1);
    ui->listWidget->setCurrentRow(device.getMenuLocation());
}

void MainWindow::navDown(){
    device.setMenuLocation(device.getMenuLocation() + 1);;
    if(device.getMenuLocation() == ui->listWidget->count())
        device.setMenuLocation(0);
    ui->listWidget->setCurrentRow(device.getMenuLocation());
}

void MainWindow::powerLevel(int x){
    if(device.getNestedMenu() >1)
        ui->message->setText("Please choose a power level.\n " + QString::number(x));
}

void MainWindow::powerClicked(){
    if (device.getPowerStatus()){
        ui->listWidget->clear();
        ui->message->clear();
        device.setMenuLocation(0);
    }else{
        fillHomeMenu();
        device.setMenuLocation(0);
        ui->listWidget->setCurrentRow(device.getMenuLocation());
        ui->powerSlider->setDisabled(true);
        ui->frequencySlider->setDisabled(true);
    }

    device.setPowerStatus(!device.getPowerStatus());
    device.setMenuScreen(0);
    device.setNestedMenu(0);
}

void MainWindow::programsClicked(){
    ui->listWidget->clear();
    fillPrograms();
    ui->listWidget->setCurrentRow(0);
    device.setMenuScreen(1);
    device.setNestedMenu(1);
    device.setOption(0);
}

void MainWindow::programMessage(){
    ui->listWidget->clear();
    ui->powerSlider->setDisabled(false);
    ui->message->setText("Please choose a power level.\n " + QString::number(ui->powerSlider->value()));
    device.setMenuScreen(3);
    device.setNestedMenu(device.getNestedMenu()+1);
    device.setMenuScreen(3);
}

void MainWindow::frequencyClicked(){
    ui->frequencySlider->setDisabled(false);
    ui->listWidget->clear();
    ui->listWidget->addItem("10Hz");
    ui->listWidget->addItem("30Hz");
    ui->listWidget->addItem("75Hz");
    ui->listWidget->addItem("125Hz");
    ui->listWidget->setCurrentRow(0);
    device.setMenuScreen(2);
    device.setNestedMenu(1);
    device.setOption(1);
}

void MainWindow::recordingsClicked(){
    ui->listWidget->clear();

    if (recordingCollection.size() > 0) {
        for(int i=0; i<recordingCollection.size(); i++) {
            ui->listWidget->addItem(recordingCollection[i].getTherapy() + " (" + recordingCollection[i].getTime() + ")");
        }
    }
    device.setMenuScreen(3);
    device.setNestedMenu(1);
    device.setOption(2);
}

void MainWindow::settingsClicked(){
    ui->listWidget->clear();
    ui->listWidget->addItem("Clear Recordings History");
    ui->listWidget->addItem("Sound");
    ui->listWidget->addItem("Brightness");
    ui->listWidget->addItem("Economy");
    ui->listWidget->addItem("Clock");
    ui->listWidget->addItem("Alarm Clock");
    ui->listWidget->addItem("Language");
    ui->listWidget->addItem("Color");
    ui->listWidget->setCurrentRow(0);
    device.setMenuScreen(4);
    device.setNestedMenu(1);
    device.setOption(3);
}

void MainWindow::homeClicked(){
    ui->powerSlider->setValue(0);
    ui->powerSlider->setDisabled(true);
    ui->frequencySlider->setValue(0);
    ui->frequencySlider->setDisabled(true);
    ui->listWidget->clear();
    ui->message->clear();
    fillHomeMenu();
    device.setMenuLocation(0);
    ui->listWidget->setCurrentRow(device.getMenuLocation());
    device.setMenuScreen(0);
    device.setNestedMenu(0);
}

void MainWindow::okClicked(){
    //program selected from menu
    if (device.getMenuScreen() == 0){
        if (device.getMenuLocation() == 0){
            programsClicked();
        } else if (device.getMenuLocation() == 1) {
            frequencyClicked();
        } else if (device.getMenuLocation() == 2) {
            recordingsClicked();
        } else if (device.getMenuLocation() == 3) {
            settingsClicked();
        }

        device.setMenuLocation(0);

    } else if (device.getMenuScreen() == 1){
        programMessage();
        if (device.getMenuLocation() == 0 && ui->recordTherapyBox->isChecked()){
            recordingCollection.push_back(Recording(programs.getProgram(0)));
        } else if (device.getMenuLocation() == 1 && ui->recordTherapyBox->isChecked()) {
            recordingCollection.push_back(Recording(programs.getProgram(1)));
        } else if (device.getMenuLocation() == 2 && ui->recordTherapyBox->isChecked()) {
            recordingCollection.push_back(Recording(programs.getProgram(2)));
        } else if (device.getMenuLocation() == 3 && ui->recordTherapyBox->isChecked()) {
            recordingCollection.push_back(Recording(programs.getProgram(3)));
        }
    }

}

void MainWindow::returnButton(){
    if(device.getNestedMenu() == 1){
        device.setNestedMenu(0);
        homeClicked();
    }
    else if(device.getNestedMenu() == 2){
        device.setNestedMenu(1);
        ui->message->clear();
        ui->powerSlider->setDisabled(true);
        ui->powerSlider->setValue(0);
        if(device.getOption() == 0)
            programsClicked();
        else if(device.getOption() == 1)
            frequencyClicked();
        else if(device.getOption() == 2)
            recordingsClicked();
        else if(device.getOption() == 3)
            settingsClicked();
    }
}

void MainWindow::decreaseBattery(){
        while (ui->batterySlider->value() && ui->touchSkinBox->isChecked()){
            ui->batterySlider->setValue(ui->batterySlider->value() - 1);
             therapyTimer.waitInterval(3500 - (270* ui->powerSlider->value()));

            }

}

void MainWindow::fillPrograms(){
    for (int i=0; i<programs.getNumOfPrograms();i++){
        ui->listWidget->addItem(programs.getProgram(i));
    }
}

void MainWindow::fillHomeMenu(){
    for (int i=0; i<homeMenu.getNumOfItems();i++){
        ui->listWidget->addItem(homeMenu.getMenuItem(i));
    }
}
