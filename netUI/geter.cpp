#include "geter.h"
#include <QMessageBox>

geter::geter(QObject *parent):
    QObject(parent)
{

}

void geter::get()
{
    manager=new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)),this, SLOT(replyFinished(QNetworkReply*)));
    manager->get(QNetworkRequest(QUrl(host)));
}

void geter::setLabel(QLabel *label)
{
    lb=label;
}

void geter::setHost(QString st)
{
    host=st;

}

void geter::replyFinished(QNetworkReply *reply)
{


    if(reply->error())
    {
       lb->setText(reply->errorString());
    }
    else{
         lb->setText(reply->readAll());
    }

    /*QFile * file=new QFile("/home/darkness/out.txt");
    if(file->open(QFile::Append))
            {
                file->write(reply->readAll());
                file->flush();
                file->close();
            }*/
}
