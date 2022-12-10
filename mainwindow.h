#ifndef MAINWINDOW_H//include guard
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow//Класс формы
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);//Конструктор
    ~MainWindow();//Деструктор

private slots://Слоты/обработчики событий
    void on_pushButton_calc_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
