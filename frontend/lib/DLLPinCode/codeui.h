#ifndef CODEUI_H
#define CODEUI_H

#include <QDialog>
#include "DLLPinCode_global.h"

namespace Ui {
class CodeUI;
}

class DLLPINCODE_EXPORT CodeUI : public QDialog
{
    Q_OBJECT

public:
    explicit CodeUI(QWidget *parent = nullptr);
    ~CodeUI();
signals:
    void sendPin(short);
private slots:
    void numberClickHandler();
    void enterClickHandler();

private:
    Ui::CodeUI *ui;
    QString InsertingPin;
    QString CheckPin;
    QString SQLPin;
    QString InsertedPin;
    bool CompareStrings(QString,QString);
};

#endif // CODEUI_H