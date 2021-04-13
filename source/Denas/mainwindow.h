#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <QTime>
#include "device.h"
#include <vector>
#include <string>
using namespace std;


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Device device;
    int nestedMenu;
    static vector<string> collectionVec;

private slots:
    void powerClicked();
    void navUp();
    void navDown();
    void programsClicked();
    void programMessage();
    void frequencyClicked();
    void recordingsClicked();
    void settingsClicked();
    void okClicked();
    void homeClicked();
    void returnButton();
    void decreaseBattery();

};

#endif // MAINWINDOW_H
