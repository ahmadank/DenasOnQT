#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    bool powerOn = false;
    int menuLocation;
    int menuScreen;
    int nestedMenu;

private slots:
    void battery();
    void buttonPressed();
    void navigation();
    void powerClicked();
    void navUp();
    void navDown();
    void programsClicked();
    void frequencyClicked();
    void recordingsClicked();
    void settingsClicked();
    void okClicked();
    void homeClicked();
    void returnButton();

};

#endif // MAINWINDOW_H
