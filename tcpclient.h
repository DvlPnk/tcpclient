#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class TcpClient; }
QT_END_NAMESPACE

class TcpClient : public QDialog
{
    Q_OBJECT

public:
    TcpClient(QWidget *parent = nullptr);
    ~TcpClient();

private:
    Ui::TcpClient *ui;
};
#endif // TCPCLIENT_H
