//Файл с обработчиками событий, для этого подключается сама форма (ui_*) и заголовочный файл (first)
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "first.h"

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

// Обработчик события "Клик" на кнопку pushButton_calc
void MainWindow::on_pushButton_calc_clicked()
{
    //Проверка введённого значения
    if((ui->lineEdit_input_n->text().toFloat() > 0)&(ui->lineEdit_input_n->text().toFloat()<100))
    {
    //Возврат белого цвета фона, если всё ок
    ui->lineEdit_input_n->setStyleSheet("background-color: white");
    //Вызов функции для расчёта
    int x = ui->lineEdit_input_n->text().toFloat();
    ui->label_result->setText( QString::number(firstnumber(x)) );
    }
        else{//Если введено некорректное значение
            ui->lineEdit_input_n->setStyleSheet("background-color: red");
        }
}

