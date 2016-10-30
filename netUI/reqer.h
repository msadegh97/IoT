#ifndef REQER_H
#define REQER_H
#include <QTimer>
#include <QObject>
#include <QLabel>
#include "geter.h"
class reqer :public QObject
{
    Q_OBJECT
public:

    reqer(geter *);
public slots:
    void req();

private:
    QTimer * timer;
    geter * regeter;

};

#endif // REQER_H
