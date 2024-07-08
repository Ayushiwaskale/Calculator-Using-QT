#include "mainwindow.h"
#include "./ui_mainwindow.h"

 double firstNum;
bool userIsTypingSecondNumber= false;



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->Button0,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Button1,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Button2,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Button3,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Button4,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Button5,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Button6,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Button7,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Button8,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->Button9,SIGNAL(released()),this,SLOT(digit_pressed()));

    connect(ui->ButtonPlusMinus,SIGNAL(released()),this,SLOT(unary_operation_pressed()));
    connect(ui->ButtonPercent,SIGNAL(released()),this,SLOT(unary_operation_pressed()));

    connect(ui->ButtonPlus,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->ButtonMinus,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->ButtonMultiply,SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->ButtonDivide,SIGNAL(released()),this,SLOT(binary_operation_pressed()));

    ui->ButtonPlus->setCheckable(true);
    ui->ButtonMinus->setCheckable(true);
    ui->ButtonMultiply->setCheckable(true);
    ui->ButtonDivide->setCheckable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::digit_pressed()
{
    QPushButton * button= (QPushButton*)sender();

    double labelNumber;
    QString newLabel;

    if((ui->ButtonPlus->isChecked() || ui->ButtonMinus->isChecked() || ui->ButtonMultiply->isChecked() ||ui->ButtonDivide->isChecked()) && (!userIsTypingSecondNumber) )
    {
        labelNumber = button->text().toDouble();
        userIsTypingSecondNumber= true;
        newLabel= QString :: number(labelNumber, 'g',15);
    }

    else
    {
        if(ui->label->text().contains('.')&& button->text()=="0")
        {
            newLabel=ui->label->text()+ button->text();
        }
        else
        {
            labelNumber = (ui->label->text()+ button->text()).toDouble();
            newLabel= QString :: number(labelNumber, 'g',15);
        }
    }

    ui->label->setText(newLabel);
}

void MainWindow::on_pushButton_decimal_released()
{
    ui->label->setText(ui->label->text()+".") ;
}

void MainWindow::unary_operation_pressed()
{
    QPushButton * button=(QPushButton*) sender();
    double labelNumber;
    QString newLabel;

    if(button->text()=="+/-")
    {
        labelNumber=ui->label->text().toDouble();
        labelNumber= labelNumber* -1;
        newLabel= QString::number(labelNumber,'g', 15);
        ui->label->setText(newLabel);
    }

    if(button->text()=="%")
    {
        labelNumber=ui->label->text().toDouble();
        labelNumber= labelNumber* 0.01;
        newLabel= QString::number(labelNumber,'g', 15);
        ui->label->setText(newLabel);
    }

    if(button->text()=="%")
    {
        labelNumber=ui->label->text().toDouble();
        labelNumber= labelNumber* 0.01;
        newLabel= QString::number(labelNumber,'g', 15);
        ui->label->setText(newLabel);
    }
}




void MainWindow::on_ButtonClear_released()
{
    ui->ButtonPlus->setChecked(false);
    ui->ButtonMinus->setChecked(false);
    ui->ButtonMultiply->setChecked(false);
    ui->ButtonDivide->setChecked(false);

    userIsTypingSecondNumber = false;

    ui->label->setText("0");
}


void MainWindow::on_ButtonEqualsTo_released()
{
    double labelNumber, secondNum;
    QString newLabel;

    secondNum = ui->label->text().toDouble();

    if(ui->ButtonPlus->isChecked())
    {
        labelNumber= firstNum + secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->ButtonPlus->setChecked(false);
    }

    else if(ui->ButtonMinus->isChecked())
    {
        labelNumber= firstNum - secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->ButtonMinus->setChecked(false);
    }


    else if(ui->ButtonMultiply->isChecked())
    {
        labelNumber= firstNum * secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->ButtonMultiply->setChecked(false);
    }


    else if(ui->ButtonDivide->isChecked())
    {
        labelNumber= firstNum / secondNum;
        newLabel = QString::number(labelNumber,'g',15);
        ui->label->setText(newLabel);
        ui->ButtonDivide->setChecked(false);
    }

    userIsTypingSecondNumber = false;

}

void MainWindow::binary_operation_pressed()
{
     QPushButton * button=(QPushButton*) sender();

    firstNum = ui->label->text().toDouble();

    button->setChecked(true);

}

