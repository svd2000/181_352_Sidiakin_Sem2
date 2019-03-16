#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "fstream"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
    {
        QString login = ui->login->text();
        QString password = ui->pass->text();
        if(login =="admin" && password == "admin" )
    {
QMessageBox::information(this, "Успешно" , "Вы успешно авторизовались как администратор");    
}

else if(login =="manager" && password == "qwerty"){
QMessageBox::information(this, "Успешно" , "Вы успешно авторизовались как менеджер");   
}

else if(login =="temp" && password == "A000000!"){
QMessageBox::information(this, "Успешно" , "Вы успешно авторизовались как простой смертный ");   
}

else {
QMessageBox::warning(this, "Неудача" , "Неужели сложно ввести admin 2 раза?");
//ui->statusBar->showMessage("Неудача");
}

}

