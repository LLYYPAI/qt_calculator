#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <unistd.h>
QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_One_Button_clicked();

    void on_Zero_Button_clicked();

    void on_Five_Button_clicked();

    void on_Two_Button_clicked();

    void on_Three_Button_clicked();

    void on_Four_Button_clicked();

    void on_Six_Button_clicked();

    void on_Seven_Button_clicked();

    void on_Eight_Button_clicked();

    void on_Nine_Button_clicked();

    void on_Add_Button_clicked();

    void on_Sub_Button_clicked();

    void on_Mul_button_clicked();

    void on_Div_Button_clicked();

    void on_Left_Button_clicked();

    void on_Right_Button_clicked();

    void on_Back_Button_clicked();

    void on_Clear_Button_clicked();

    void on_Equal_Button_clicked();

private:
    Ui::Widget *ui;
    QString QMessage;
};
#endif // WIDGET_H
