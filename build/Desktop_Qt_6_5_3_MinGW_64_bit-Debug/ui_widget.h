/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *lineEdit;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *Clear_Button;
    QPushButton *Add_Button;
    QPushButton *Sub_Button;
    QPushButton *Back_Button;
    QPushButton *Seven_Button;
    QPushButton *Eight_Button;
    QPushButton *Nine_Button;
    QPushButton *Mul_button;
    QPushButton *Four_Button;
    QPushButton *Five_Button;
    QPushButton *Six_Button;
    QPushButton *Div_Button;
    QPushButton *One_Button;
    QPushButton *Two_Button;
    QPushButton *Three_Button;
    QPushButton *Left_Button;
    QPushButton *Zero_Button;
    QPushButton *Right_Button;
    QPushButton *Equal_Button;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(194, 278);
        Widget->setMinimumSize(QSize(0, 0));
        Widget->setMaximumSize(QSize(16777, 16777));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 10, 171, 31));
        widget = new QWidget(Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 50, 174, 218));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Clear_Button = new QPushButton(widget);
        Clear_Button->setObjectName("Clear_Button");
        Clear_Button->setMinimumSize(QSize(40, 40));
        Clear_Button->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(Clear_Button, 0, 0, 1, 1);

        Add_Button = new QPushButton(widget);
        Add_Button->setObjectName("Add_Button");
        Add_Button->setMinimumSize(QSize(40, 40));
        Add_Button->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(Add_Button, 0, 1, 1, 1);

        Sub_Button = new QPushButton(widget);
        Sub_Button->setObjectName("Sub_Button");
        Sub_Button->setMinimumSize(QSize(40, 40));
        Sub_Button->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(Sub_Button, 0, 2, 1, 1);

        Back_Button = new QPushButton(widget);
        Back_Button->setObjectName("Back_Button");
        Back_Button->setMinimumSize(QSize(40, 40));
        Back_Button->setMaximumSize(QSize(40, 40));
        Back_Button->setIconSize(QSize(50, 100));

        gridLayout->addWidget(Back_Button, 0, 3, 1, 1);

        Seven_Button = new QPushButton(widget);
        Seven_Button->setObjectName("Seven_Button");
        Seven_Button->setMinimumSize(QSize(40, 40));
        Seven_Button->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(Seven_Button, 1, 0, 1, 1);

        Eight_Button = new QPushButton(widget);
        Eight_Button->setObjectName("Eight_Button");
        Eight_Button->setMinimumSize(QSize(40, 40));
        Eight_Button->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(Eight_Button, 1, 1, 1, 1);

        Nine_Button = new QPushButton(widget);
        Nine_Button->setObjectName("Nine_Button");
        Nine_Button->setMinimumSize(QSize(40, 40));
        Nine_Button->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(Nine_Button, 1, 2, 1, 1);

        Mul_button = new QPushButton(widget);
        Mul_button->setObjectName("Mul_button");
        Mul_button->setMinimumSize(QSize(40, 40));
        Mul_button->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(Mul_button, 1, 3, 1, 1);

        Four_Button = new QPushButton(widget);
        Four_Button->setObjectName("Four_Button");
        Four_Button->setMinimumSize(QSize(40, 40));
        Four_Button->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(Four_Button, 2, 0, 1, 1);

        Five_Button = new QPushButton(widget);
        Five_Button->setObjectName("Five_Button");
        Five_Button->setMinimumSize(QSize(40, 40));
        Five_Button->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(Five_Button, 2, 1, 1, 1);

        Six_Button = new QPushButton(widget);
        Six_Button->setObjectName("Six_Button");
        Six_Button->setMinimumSize(QSize(40, 40));
        Six_Button->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(Six_Button, 2, 2, 1, 1);

        Div_Button = new QPushButton(widget);
        Div_Button->setObjectName("Div_Button");
        Div_Button->setMinimumSize(QSize(40, 40));
        Div_Button->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(Div_Button, 2, 3, 1, 1);

        One_Button = new QPushButton(widget);
        One_Button->setObjectName("One_Button");
        One_Button->setMinimumSize(QSize(40, 40));
        One_Button->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(One_Button, 3, 0, 1, 1);

        Two_Button = new QPushButton(widget);
        Two_Button->setObjectName("Two_Button");
        Two_Button->setMinimumSize(QSize(40, 40));
        Two_Button->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(Two_Button, 3, 1, 1, 1);

        Three_Button = new QPushButton(widget);
        Three_Button->setObjectName("Three_Button");
        Three_Button->setMinimumSize(QSize(40, 40));
        Three_Button->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(Three_Button, 3, 2, 1, 1);

        Left_Button = new QPushButton(widget);
        Left_Button->setObjectName("Left_Button");
        Left_Button->setMinimumSize(QSize(40, 40));
        Left_Button->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(Left_Button, 4, 0, 1, 1);

        Zero_Button = new QPushButton(widget);
        Zero_Button->setObjectName("Zero_Button");
        Zero_Button->setMinimumSize(QSize(40, 40));
        Zero_Button->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(Zero_Button, 4, 1, 1, 1);

        Right_Button = new QPushButton(widget);
        Right_Button->setObjectName("Right_Button");
        Right_Button->setMinimumSize(QSize(40, 40));
        Right_Button->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(Right_Button, 4, 2, 1, 1);

        Equal_Button = new QPushButton(widget);
        Equal_Button->setObjectName("Equal_Button");
        Equal_Button->setMinimumSize(QSize(40, 40));
        Equal_Button->setMaximumSize(QSize(40, 80));

        gridLayout->addWidget(Equal_Button, 3, 3, 2, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        Clear_Button->setText(QCoreApplication::translate("Widget", "C", nullptr));
        Add_Button->setText(QCoreApplication::translate("Widget", "+", nullptr));
        Sub_Button->setText(QCoreApplication::translate("Widget", "-", nullptr));
        Back_Button->setText(QString());
        Seven_Button->setText(QCoreApplication::translate("Widget", "7", nullptr));
        Eight_Button->setText(QCoreApplication::translate("Widget", "8", nullptr));
        Nine_Button->setText(QCoreApplication::translate("Widget", "9", nullptr));
        Mul_button->setText(QCoreApplication::translate("Widget", "*", nullptr));
        Four_Button->setText(QCoreApplication::translate("Widget", "4", nullptr));
        Five_Button->setText(QCoreApplication::translate("Widget", "5", nullptr));
        Six_Button->setText(QCoreApplication::translate("Widget", "6", nullptr));
        Div_Button->setText(QCoreApplication::translate("Widget", "/", nullptr));
        One_Button->setText(QCoreApplication::translate("Widget", "1", nullptr));
        Two_Button->setText(QCoreApplication::translate("Widget", "2", nullptr));
        Three_Button->setText(QCoreApplication::translate("Widget", "3", nullptr));
        Left_Button->setText(QCoreApplication::translate("Widget", "(", nullptr));
        Zero_Button->setText(QCoreApplication::translate("Widget", "0", nullptr));
        Right_Button->setText(QCoreApplication::translate("Widget", ")", nullptr));
        Equal_Button->setText(QCoreApplication::translate("Widget", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
