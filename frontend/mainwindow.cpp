#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPort>
#include "dllserialport.h"
#include "dllrestapi.h"
#include "codeui.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_serialPort = new DLLSerialPort(this);
    m_codeUI = new CodeUI(this);
    // Numeroikaa connectionit, jotta voidaan refrensoida niihin dokumentaatiossa.
    connect(m_serialPort, &DLLSerialPort::dataReceived, this, &MainWindow::handleSerialDataReceived); //1. signaali
    connect(this, &MainWindow::cardHexCodeUpdated, m_codeUI, &CodeUI::handleCardHexCodeReceived); //2. signaali
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::getBaseUrl()
{
    return "https://bankdb-r18.onrender.com";
}

void MainWindow::getCustomerData()
{
    QString site_url = MainWindow::getBaseUrl() + "/customer/1";
    QNetworkRequest request((site_url));
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QByteArray authHeader = QString("Bearer %1").arg(token).toLatin1();
    request.setRawHeader("Authorization", authHeader);

    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    connect(manager, &QNetworkAccessManager::finished,
        this, [=](QNetworkReply *reply) {

        if (reply->error()) {
            qDebug() << reply->errorString();
        }
        else {
            QByteArray response = reply->readAll();
            qDebug() << "Raw response:" << response;
            QJsonDocument document = QJsonDocument::fromJson(response);
            QJsonObject object = document.object();
            QString firstName = object.value("first_name").toString();
            QString lastName = object.value("last_name").toString();
            ui->firstName->setText(firstName);
            ui->lastName->setText(lastName);
        }
        reply->deleteLater();
    });

    manager->get(request);
}

//nappi ylläolevaan
void MainWindow::on_customerButton_clicked()
{
    getCustomerData();

}

//tämä funktio emittaa cardhexcoden Mikan DLLpincoden käyttöön
void MainWindow::handleSerialDataReceived(const QString& data)
{
    qDebug() << "Serial data received:" << data;
    ui->serialDataLabel->setText(data);
    cardhexcode = data;
    emit cardHexCodeUpdated(cardhexcode);
}
