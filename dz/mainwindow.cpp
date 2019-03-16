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
        if(login =="admin" && password == "admin123" )
    {
QMessageBox::information(this, "Успешно" , "Вы успешно авторизовались как администратор");

}

else if(login =="manager" && password == "qwerty123"){
QMessageBox::information(this, "Успешно" , "Вы успешно авторизовались как менеджер");

}

else if(login =="log67" && password == "log67GTH!"){
QMessageBox::information(this, "Успешно" , "Вы успешно авторизовались как пользователь");


}

else {
QMessageBox::warning(this, "Ну и о чём ты думал?" , "Что-то пошло не так");
//ui->statusBar->showMessage("Неудача");
}

}
