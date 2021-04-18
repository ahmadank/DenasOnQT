#ifndef HOMEMENU_H
#define HOMEMENU_H
#include <vector>
#include <QString>


class HomeMenu {

public:
    HomeMenu();
    ~HomeMenu();
    QString getMenuItem(int);
    int getNumOfItems();

private:
    vector<QString> homeMenuCollection;
    int numOfItems;
};

#endif // HOMEMENU_H
