#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>
#include "dllserialport.h"
#include "dllrestapi.h"
#include "codeui.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void handleSerialDataReceived(const QString& data);
    ~MainWindow();
    static QString getBaseUrl();

signals:
    //tämä funktio päivittää nykyisen luetun cardhexcoden
    void cardHexCodeUpdated(const QString& hexCode);

private slots:
    void on_customerButton_clicked();
    void getCustomerData();

private:
    Ui::MainWindow *ui;
    QNetworkReply *reply;
    DLLSerialPort *m_serialPort;
    CodeUI *m_codeUI;
    QNetworkAccessManager *loginManager;
    QString response_data;
    QString username;
    QString token;
    QString cardhexcode;
};

#endif // MAINWINDOW_H
