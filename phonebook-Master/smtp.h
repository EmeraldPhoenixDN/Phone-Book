
#ifndef SMTP_H
#define SMTP_H


#include <QtNetwork/QAbstractSocket>
#include <QtNetwork/QSslSocket>
#include <QString>
#include <QTextStream>
#include <QDebug>
#include <QtWidgets/QMessageBox>
#include <QByteArray>
#include <QFile>
#include <QFileInfo>



class Smtp : public QObject
{
    Q_OBJECT


public:
    Smtp( const QString &user, const QString &pass,
          const QString &host, int port = 465, int timeout = 30000 );
    ~Smtp();

    void sendMail( const QString &from, const QString &to,
                   const QString &subject, const QString &body,
                   QStringList files = QStringList());

signals:

    void send_status(QString);

private slots:
    void stateChanged(QAbstractSocket::SocketState socketState);
    void errorReceived(QAbstractSocket::SocketError socketError);
    void disconnected();
    void connected();
    void readyRead();

private:
    QString message;
    QTextStream *t;
    QSslSocket *socket;
    QString from;
    QString rcpt;
    QString response;
    QString host;
    QString user;
    QString pass;    
    int port;
    int timeout;
    enum states{Tls, HandShake ,Auth,User,Pass,Rcpt,Mail,Data,Init,Body,Quit,Close};
    int state;

};
#endif
