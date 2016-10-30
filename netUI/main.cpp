#include "widget.h"
#include "geter.h"
#include "reqer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget * w=new Widget;

    geter g;
    w->setGeter(&g);
    g.setLabel(w->getlabel());
   reqer * req=new reqer(&g);

    w->setVisible(true);

    return a.exec();
}
