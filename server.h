#ifndef SERVER_H
#define SERVER_H

#include <QDialog>
#include <QTcpSocket>
#include <QTcpServer>
#include <QMessageBox>
#include <QDebug>
#include <QDateTime>
#include <QSqlError>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class Server;
}

class Server : public QDialog
{
    Q_OBJECT

public:
    explicit Server(QWidget *parent = 0);
    ~Server();

private slots:
    // 定义函数，在cpp里实现。
    void on_stopButton_clicked();
    void acceptConnection();
    void sendMessage();
    void displayError(QAbstractSocket::SocketError);
    void receiveMessage();
    void saveMessage(QString , QString , QString);
private:
    Ui::Server *ui;
    QTcpServer *tcpServer;
    QTcpSocket *tcpSocketConnection;
};

#endif
