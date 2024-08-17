#include "widget.h"
#include "ui_widget.h"
#include "calc_process.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setMaximumSize(200,280);
    this->setMinimumSize(200,280);
    QIcon con("F:\\QtProject\\QtCalc\\del.png");
    ui->Back_Button->setIcon(con);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_One_Button_clicked()
{
    QMessage += '1';
    ui->lineEdit->setText(QMessage);
}


void Widget::on_Zero_Button_clicked()
{
    QMessage += '0';
    ui->lineEdit->setText(QMessage);
}


void Widget::on_Five_Button_clicked()
{
    QMessage += '5';
    ui->lineEdit->setText(QMessage);
}


void Widget::on_Two_Button_clicked()
{
    QMessage += '2';
    ui->lineEdit->setText(QMessage);
}


void Widget::on_Three_Button_clicked()
{
    QMessage += '3';
    ui->lineEdit->setText(QMessage);
}


void Widget::on_Four_Button_clicked()
{
    QMessage += '4';
    ui->lineEdit->setText(QMessage);
}


void Widget::on_Six_Button_clicked()
{
    QMessage += '6';
    ui->lineEdit->setText(QMessage);
}


void Widget::on_Seven_Button_clicked()
{
    QMessage += '7';
    ui->lineEdit->setText(QMessage);
}


void Widget::on_Eight_Button_clicked()
{
    QMessage += '8';
    ui->lineEdit->setText(QMessage);
}


void Widget::on_Nine_Button_clicked()
{
    QMessage += '9';
    ui->lineEdit->setText(QMessage);
}


void Widget::on_Add_Button_clicked()
{
    QMessage += '+';
    ui->lineEdit->setText(QMessage);
}


void Widget::on_Sub_Button_clicked()
{
    QMessage += '-';
    ui->lineEdit->setText(QMessage);
}


void Widget::on_Mul_button_clicked()
{
    QMessage += '*';
    ui->lineEdit->setText(QMessage);
}


void Widget::on_Div_Button_clicked()
{
    QMessage += '/';
    ui->lineEdit->setText(QMessage);
}


void Widget::on_Left_Button_clicked()
{
    QMessage += '(';
    ui->lineEdit->setText(QMessage);
}


void Widget::on_Right_Button_clicked()
{
    QMessage += ')';
    ui->lineEdit->setText(QMessage);
}


void Widget::on_Back_Button_clicked()
{
    QMessage.chop(1);
    ui->lineEdit->setText(QMessage);
}


void Widget::on_Clear_Button_clicked()
{
    QMessage.clear();
    ui->lineEdit->setText(QMessage);
    ui->Div_Button;
}


void Widget::on_Equal_Button_clicked()
{
    bool right = true;
    QByteArray ba = QMessage.toLatin1();
    char *ans = ba.data();
    string h = Conv(ans);
    char arr[128];
    strcpy_s(arr, h.c_str());
    if(arr=="")
    {
        right = false;
        QMessage.clear();
        ui->lineEdit->setText(QMessage);
    }
    if(right){
    double result = comvalue(arr);
    if(result==139213.8772)
    {
        QMessage.clear();
        ui->lineEdit->setText(QMessage);

    }
    else{QMessage = QString::number(result);ui->lineEdit->setText(QMessage);}

    }
}

