#ifndef BUTTON_H
#define BUTTON_H

#include <QObject>

class button : public QObject
{
    Q_OBJECT
public:
    explicit button(QObject *parent = nullptr);

signals:

public slots:
};

#endif // BUTTON_H
