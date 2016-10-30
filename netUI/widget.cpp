#include "widget.h"


QLabel *Widget::getlabel()
{
    return lb;
}

QString Widget::getAdderss()
{
    return tb->toPlainText();
}

void Widget::setGeter(geter *g)
{
    gt=g;
}

Widget::Widget()
{
    lb=new QLabel();
    lb1=new QLabel();
    lb2=new QLabel();
    butt=new QPushButton();
    tb=new QTextEdit();
    sc=new QGraphicsScene();
    connect(butt,SIGNAL(clicked(bool)),this,SLOT(butpushed()));
    this->setScene(sc);
    this->setFixedSize(600,600);
    sc->addWidget(butt);
    butt->setGeometry(-200,-450,100,50);
    butt->setText("Connect");
    sc->addWidget(lb1);
    lb1->setGeometry(-640,-600,50,10);
    lb1->setText("Adress:");
    sc->addWidget(lb2);
    lb2->setGeometry(-650,-300,50,10);
    lb2->setText("Output:");
    sc->addWidget(lb);
    lb->setGeometry(-600,-300,500,100);

    sc->addWidget(tb);
    tb->setGeometry(-550,-600,400,100);


    butt->setStyleSheet("QPushButton{ border-radius: 25px; border: 2px solid #73AD21;  padding: 20px;background-color: white; } QPushButton:pressed {background-color: #73AD21;border-style: inset; }");
    tb->setStyleSheet("QTextEdit{ border-radius: 25px; border: 2px solid #73AD21;  padding: 20px;background-color: white;  font-style: italic; }");

    lb->setStyleSheet("QLabel{ border-radius: 25px; border: 2px solid #73AD21;  padding: 20px;background-color: white;font-style: oblique;font-size: 16px; }");
    lb1->setStyleSheet("QLabel{background-color: white; }");
     lb2->setStyleSheet("QLabel{background-color: white; }");
}

Widget::~Widget()
{

}

void Widget::butpushed()
{
   gt->setHost(tb->toPlainText());

}
