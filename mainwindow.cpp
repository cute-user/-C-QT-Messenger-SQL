#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->Login_Button,SIGNAL(clicked()),this,SLOT(on_Login_Button_clicked()));
    connect(ui->Reg_Button,SIGNAL(clicked()),this,SLOT(on_Reg_Button_clicked()));

    dataBase.setDatabaseName("myDB.sqlite");
    querry = new QSqlQuery(dataBase);

    if(!dataBase.open())
        cout << "Error 1. Database did not open";
    if(dataBase.open())
        cout << "Database opened";
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Login_Button_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_Reg_Button_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}
