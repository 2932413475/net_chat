#ifndef CLIENT_H
#define CLIENT_H

#include <QDialog>
#include <QTcpSocket>
#include <QObject>
#include <QMessageBox>
#include <QDebug>
#include <QDateTime>
#include <QSqlError>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class Client;
}

class Client : public QDialog
{
    Q_OBJECT

public:
    explicit Client(QWidget *parent = 0);
    ~Client();

private slots:
    void on_connectButton_clicked();
    void receiveMessage();
    void displayError(QAbstractSocket::SocketError);
    void sendMessage();
    bool check(QString ,QString );
    void on_logonbutton_clicked();
    void saveMessage(QString , QString , QString);

private:
    Ui::Client *ui;
    QTcpSocket *tcpSocket;

};

#endif // CLIENT_H
