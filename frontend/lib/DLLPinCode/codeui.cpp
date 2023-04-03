#include "codeui.h"
#include "ui_codeui.h"

CodeUI::CodeUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CodeUI)
{
    ui->setupUi(this);
     ui->lineEdit->setMaxLength(4); // Set the maximum length to 4 digits
     ui->lineEdit->setReadOnly(true);
    connect(ui->button1,SIGNAL(clicked()),this,SLOT(numberClickHandler()));
    connect(ui->button2,SIGNAL(clicked()),this,SLOT(numberClickHandler()));
    connect(ui->button3,SIGNAL(clicked()),this,SLOT(numberClickHandler()));
    connect(ui->button4,SIGNAL(clicked()),this,SLOT(numberClickHandler()));
    connect(ui->button5,SIGNAL(clicked()),this,SLOT(numberClickHandler()));
    connect(ui->button6,SIGNAL(clicked()),this,SLOT(numberClickHandler()));
    connect(ui->button7,SIGNAL(clicked()),this,SLOT(numberClickHandler()));
    connect(ui->button8,SIGNAL(clicked()),this,SLOT(numberClickHandler()));
    connect(ui->button9,SIGNAL(clicked()),this,SLOT(numberClickHandler()));
    connect(ui->button0,SIGNAL(clicked()),this,SLOT(numberClickHandler()));
    connect(ui->buttonEnter,SIGNAL(clicked()),this,SLOT(enterClickHandler()));
}

CodeUI::~CodeUI()
{
    delete ui;
}

void CodeUI::handleCardHexCodeReceived(const QString& hexCode)
{
    ui->cardhexcodeLabel->setText(hexCode);
}

void CodeUI::numberClickHandler()
{
    QPushButton *numberButton = qobject_cast<QPushButton *>(sender());
        QString clickedValue = numberButton->text();

        InsertingPin += clickedValue;
        ui->lineEdit->setText(InsertingPin);

}

void CodeUI::enterClickHandler()
{

      CheckPin = ui->lineEdit->text();
      //emit sendPin(CheckPin.toShort());
      if(CompareStrings(CheckPin,SQLPin))
      {

      }
      else
      {

      }
}

bool CodeUI::CompareStrings(QString str1,QString str2)
{
    if(str1.compare(str2) == 0) {
        return true;
    }
    else {
        return false;
    }
}
