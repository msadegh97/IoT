#include "reqer.h"
reqer::reqer(geter *a)
{
    regeter =a;
    timer=new  QTimer();
    timer->start(300);
    connect(timer,SIGNAL(timeout()),this,SLOT(req()));
}

void reqer::req()
{
    regeter->get();

}


