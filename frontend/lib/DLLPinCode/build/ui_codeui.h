/********************************************************************************
** Form generated from reading UI file 'codeui.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CODEUI_H
#define UI_CODEUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CodeUI
{
public:
    QPushButton *button1;
    QLineEdit *lineEdit;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button4;
    QPushButton *button5;
    QPushButton *button6;
    QPushButton *button7;
    QPushButton *button9;
    QPushButton *button8;
    QPushButton *buttonEnter;
    QPushButton *ButtonClear;
    QPushButton *ButtonStop;
    QPushButton *button0;
    QLabel *cardhexcodeLabel;

    void setupUi(QDialog *CodeUI)
    {
        if (CodeUI->objectName().isEmpty())
            CodeUI->setObjectName("CodeUI");
        CodeUI->resize(400, 324);
        button1 = new QPushButton(CodeUI);
        button1->setObjectName("button1");
        button1->setGeometry(QRect(130, 150, 21, 29));
        lineEdit = new QLineEdit(CodeUI);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(140, 100, 113, 28));
        button2 = new QPushButton(CodeUI);
        button2->setObjectName("button2");
        button2->setGeometry(QRect(160, 150, 21, 29));
        button3 = new QPushButton(CodeUI);
        button3->setObjectName("button3");
        button3->setGeometry(QRect(190, 150, 21, 29));
        button4 = new QPushButton(CodeUI);
        button4->setObjectName("button4");
        button4->setGeometry(QRect(130, 190, 21, 29));
        button5 = new QPushButton(CodeUI);
        button5->setObjectName("button5");
        button5->setGeometry(QRect(160, 190, 21, 29));
        button6 = new QPushButton(CodeUI);
        button6->setObjectName("button6");
        button6->setGeometry(QRect(190, 190, 21, 29));
        button7 = new QPushButton(CodeUI);
        button7->setObjectName("button7");
        button7->setGeometry(QRect(130, 230, 21, 29));
        button9 = new QPushButton(CodeUI);
        button9->setObjectName("button9");
        button9->setGeometry(QRect(190, 230, 21, 29));
        button8 = new QPushButton(CodeUI);
        button8->setObjectName("button8");
        button8->setGeometry(QRect(160, 230, 21, 29));
        buttonEnter = new QPushButton(CodeUI);
        buttonEnter->setObjectName("buttonEnter");
        buttonEnter->setGeometry(QRect(220, 230, 61, 29));
        ButtonClear = new QPushButton(CodeUI);
        ButtonClear->setObjectName("ButtonClear");
        ButtonClear->setGeometry(QRect(220, 190, 61, 29));
        ButtonStop = new QPushButton(CodeUI);
        ButtonStop->setObjectName("ButtonStop");
        ButtonStop->setGeometry(QRect(220, 150, 61, 29));
        button0 = new QPushButton(CodeUI);
        button0->setObjectName("button0");
        button0->setGeometry(QRect(160, 270, 21, 29));
        cardhexcodeLabel = new QLabel(CodeUI);
        cardhexcodeLabel->setObjectName("cardhexcodeLabel");
        cardhexcodeLabel->setGeometry(QRect(160, 30, 63, 20));

        retranslateUi(CodeUI);

        QMetaObject::connectSlotsByName(CodeUI);
    } // setupUi

    void retranslateUi(QDialog *CodeUI)
    {
        CodeUI->setWindowTitle(QCoreApplication::translate("CodeUI", "Dialog", nullptr));
        button1->setText(QCoreApplication::translate("CodeUI", "1", nullptr));
        button2->setText(QCoreApplication::translate("CodeUI", "2", nullptr));
        button3->setText(QCoreApplication::translate("CodeUI", "3", nullptr));
        button4->setText(QCoreApplication::translate("CodeUI", "4", nullptr));
        button5->setText(QCoreApplication::translate("CodeUI", "5", nullptr));
        button6->setText(QCoreApplication::translate("CodeUI", "6", nullptr));
        button7->setText(QCoreApplication::translate("CodeUI", "7", nullptr));
        button9->setText(QCoreApplication::translate("CodeUI", "9", nullptr));
        button8->setText(QCoreApplication::translate("CodeUI", "8", nullptr));
        buttonEnter->setText(QCoreApplication::translate("CodeUI", "ENTER", nullptr));
        ButtonClear->setText(QCoreApplication::translate("CodeUI", "CLEAR", nullptr));
        ButtonStop->setText(QCoreApplication::translate("CodeUI", "STOP", nullptr));
        button0->setText(QCoreApplication::translate("CodeUI", "0", nullptr));
        cardhexcodeLabel->setText(QCoreApplication::translate("CodeUI", "cardhexcode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CodeUI: public Ui_CodeUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CODEUI_H
