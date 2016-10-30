#ifndef WIDGET_H
#define WIDGET_H
#include "geter.h"
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QGraphicsScene>
#include <QTextEdit>
#include <QGraphicsView>
#include <QString>


class Widget : public QGraphicsView{
    Q_OBJECT
    QPushButton *butt;
    QTextEdit *tb;
    QLabel * lb;
    QLabel * lb1;
     QLabel * lb2;
    QGraphicsScene *sc;
    geter * gt;
public:
    QLabel * getlabel();
    QString getAdderss();
    void setGeter(geter *);
    Widget();
    ~Widget();
public slots:
    void butpushed();
};

#endif // WIDGET_H
