/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *ButtonClear;
    QPushButton *ButtonPlusMinus;
    QPushButton *ButtonPercent;
    QPushButton *ButtonDivide;
    QPushButton *Button8;
    QPushButton *ButtonMultiply;
    QPushButton *Button9;
    QPushButton *Button7;
    QPushButton *Button6;
    QPushButton *Button4;
    QPushButton *Button5;
    QPushButton *ButtonMinus;
    QPushButton *ButtonPlus;
    QPushButton *Button1;
    QPushButton *Button3;
    QPushButton *Button2;
    QPushButton *ButtonDot;
    QPushButton *ButtonEqualsTo;
    QPushButton *Button0;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(160, 231);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 161, 31));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        ButtonClear = new QPushButton(centralwidget);
        ButtonClear->setObjectName("ButtonClear");
        ButtonClear->setGeometry(QRect(0, 30, 41, 41));
        ButtonClear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        ButtonPlusMinus = new QPushButton(centralwidget);
        ButtonPlusMinus->setObjectName("ButtonPlusMinus");
        ButtonPlusMinus->setGeometry(QRect(40, 30, 41, 41));
        ButtonPlusMinus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        ButtonPercent = new QPushButton(centralwidget);
        ButtonPercent->setObjectName("ButtonPercent");
        ButtonPercent->setGeometry(QRect(80, 30, 41, 41));
        ButtonPercent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        ButtonDivide = new QPushButton(centralwidget);
        ButtonDivide->setObjectName("ButtonDivide");
        ButtonDivide->setGeometry(QRect(120, 30, 41, 41));
        ButtonDivide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName("Button8");
        Button8->setGeometry(QRect(40, 70, 41, 41));
        Button8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   /* border: 1px solid gray; */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        ButtonMultiply = new QPushButton(centralwidget);
        ButtonMultiply->setObjectName("ButtonMultiply");
        ButtonMultiply->setGeometry(QRect(120, 70, 41, 41));
        ButtonMultiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName("Button9");
        Button9->setGeometry(QRect(80, 70, 41, 41));
        Button9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   /* border: 1px solid gray; */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName("Button7");
        Button7->setGeometry(QRect(0, 70, 41, 41));
        Button7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   /* border: 1px solid gray; */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName("Button6");
        Button6->setGeometry(QRect(80, 110, 41, 41));
        Button6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"/* border: 1px solid gray; */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName("Button4");
        Button4->setGeometry(QRect(0, 110, 41, 41));
        Button4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   /* border: 1px solid gray; */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName("Button5");
        Button5->setGeometry(QRect(40, 110, 41, 41));
        Button5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  /* border: 1px solid gray; */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        ButtonMinus = new QPushButton(centralwidget);
        ButtonMinus->setObjectName("ButtonMinus");
        ButtonMinus->setGeometry(QRect(120, 110, 41, 41));
        ButtonMinus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        ButtonPlus = new QPushButton(centralwidget);
        ButtonPlus->setObjectName("ButtonPlus");
        ButtonPlus->setGeometry(QRect(120, 150, 41, 41));
        ButtonPlus->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName("Button1");
        Button1->setGeometry(QRect(0, 150, 41, 41));
        Button1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   /* border: 1px solid gray; */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName("Button3");
        Button3->setGeometry(QRect(80, 150, 41, 41));
        Button3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  /* border: 1px solid gray; */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName("Button2");
        Button2->setGeometry(QRect(40, 150, 41, 41));
        Button2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   /* border: 1px solid gray; */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        ButtonDot = new QPushButton(centralwidget);
        ButtonDot->setObjectName("ButtonDot");
        ButtonDot->setGeometry(QRect(80, 190, 41, 41));
        ButtonDot->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(215, 215, 215);\n"
"  border: 1px solid gray;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #BEBEBE, stop: 1 #D7D7D7);\n"
"}"));
        ButtonEqualsTo = new QPushButton(centralwidget);
        ButtonEqualsTo->setObjectName("ButtonEqualsTo");
        ButtonEqualsTo->setGeometry(QRect(120, 190, 41, 41));
        ButtonEqualsTo->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  background-color: rgb(255, 151, 57);\n"
"  color: white; \n"
"  border: 1px solid gray;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #FF7832, stop: 1 #FF9739);\n"
"}"));
        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName("Button0");
        Button0->setGeometry(QRect(0, 190, 81, 41));
        Button0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"   /* border: 1px solid gray; */\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        ButtonClear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        ButtonPlusMinus->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        ButtonPercent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        ButtonDivide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        Button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        ButtonMultiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        Button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        ButtonMinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        ButtonPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        Button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        Button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        ButtonDot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        ButtonEqualsTo->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        Button0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
