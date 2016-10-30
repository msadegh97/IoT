#ifndef GETER_H
#define GETER_H
#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QDateTime>
#include <QFile>
#include <QDebug>
#include <QByteArray>
#include <QLabel>
#include <QString>

class geter:public QObject
{
    Q_OBJECT
public:
    explicit geter(QObject *parent = 0);
    void get();
    void setLabel(QLabel *);
    void setHost(QString);

signals:

public slots:
    void replyFinished (QNetworkReply *reply);

private:
    QString host;
   QLabel * lb;
   QNetworkAccessManager *manager;

};

#endif // GETER_H
