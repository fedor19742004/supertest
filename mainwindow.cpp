#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    QString nolab;
    QString zal;
    QString zalo;
    QString zalos;
    QString zalos2;
    float numbers;
    numbers = (ui ->login->text()).toFloat();
    float numbers2;
    numbers2 = (ui ->pass->text()).toFloat();
    float numbers3;
    numbers3 = atan(numbers + numbers2) + 1/tan(numbers - numbers2);
    double numbers4;
    numbers4 = pow(sin(pow(numbers,3)),2) + pow(cos(numbers2),2) + sin(pow(numbers3,2));
    nolab = QString::number(numbers3,'g',15);
    zal = QString::number(numbers4,'g',15);


    ui->OTVET->setText(nolab);
    ui->OTVET_2->setText(zal);
    float numbers5;
    numbers5 = (ui ->login_2->text()).toFloat();
    float numbers6;
    numbers6 = pow(numbers5,1);
    float numbers7;
    numbers7 = pow(numbers5,4);
    zalo = QString::number(sqrt(numbers6));
    zalos = QString::number(sqrt(numbers7));
     if(numbers5 <= 0){
        ui->OTVET_3->setText("0");
    }
     else if(numbers5<1){
        ui->OTVET_3->setText(zalo);
    }
    else if(numbers5>1){
        ui->OTVET_3->setText(zalos);
    }
    float numbers8;
    numbers8 = (ui ->x->text()).toFloat();
    float numbers9;
    numbers9 = (ui ->m->text()).toFloat();
    float sum;
    sum = 1;
    for(int a = 1;a <= numbers9;a++){
        sum=sum*(numbers9 + (numbers8/(numbers9 - a + 1)));
    }
     zalos2 = QString::number(sum);
    ui->OTVET_4->setText(zalos2);

}

