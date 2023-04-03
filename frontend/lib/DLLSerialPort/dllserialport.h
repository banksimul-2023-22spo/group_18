#ifndef DLLSERIALPORT_H
#define DLLSERIALPORT_H

#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>
#include "DLLSerialPort_global.h"

class DLLSERIALPORT_EXPORT DLLSerialPort : public QObject
{
    Q_OBJECT

public:
    explicit DLLSerialPort(QObject *parent = nullptr);
    QString sendData();

signals:
    void dataReceived(const QString& data);

private slots:
    void handleReadyRead();

private:
    QSerialPort m_serialPort;
};

#endif // DLLSERIALPORT_H
