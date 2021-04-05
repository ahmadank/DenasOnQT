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

private slots:
    void battery();
    void buttonPressed();
    void navigation();
    void powerClicked();
    void navUp();
    void navDown();
    void programsClicked();
<<<<<<< HEAD
    void okClicked();
=======
    void homeClicked();
>>>>>>> 10680e8aaf93d3ca41794ffaf9c330611ffb23a1

};

#endif // MAINWINDOW_H
