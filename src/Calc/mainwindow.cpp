#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "graph_window.h"
#include "input_x.h"
#include "credit.h"
#include "depozit.h"
#include <QMessageBox>

#ifdef __cplusplus
extern "C"
{
#endif
#include "../s21_SmartCalc.h"
#ifdef __cplusplus
}
#endif

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

void MainWindow::on_pushButton_ac_clicked()
{
    ui->label->setText("");
}

void MainWindow::on_pushButton_point_clicked()
{
    if(!(ui->label->text().contains('.')))
    ui->label->setText(ui->label->text() + ".");
}



void MainWindow::on_pushButton_1_clicked()
{
       ui->label->setText(ui->label->text() + "1");
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->label->setText(ui->label->text() + "2");
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->label->setText(ui->label->text() + "3");
}


void MainWindow::on_pushButton_4_clicked()
{
    ui->label->setText(ui->label->text() + "4");
}


void MainWindow::on_pushButton_5_clicked()
{
    ui->label->setText(ui->label->text() + "5");
}


void MainWindow::on_pushButton_6_clicked()
{
    ui->label->setText(ui->label->text() + "6");
}


void MainWindow::on_pushButton_7_clicked()
{
    ui->label->setText(ui->label->text() + "7");
}


void MainWindow::on_pushButton_8_clicked()
{
    ui->label->setText(ui->label->text() + "8");
}


void MainWindow::on_pushButton_9_clicked()
{
    ui->label->setText(ui->label->text() + "9");
}


void MainWindow::on_pushButton_0_clicked()
{
    ui->label->setText(ui->label->text() + "0");
}


void MainWindow::on_pushButton_plus_clicked()
{
    ui->label->setText(ui->label->text() + "+");
}


void MainWindow::on_pushButton_minus_clicked()
{
    ui->label->setText(ui->label->text() + "-");
}


void MainWindow::on_pushButton_mult_clicked()
{
    ui->label->setText(ui->label->text() + "*");
}


void MainWindow::on_pushButton_div_clicked()
{
    ui->label->setText(ui->label->text() + "/");
}


void MainWindow::on_pushButton_mod_clicked()
{
    ui->label->setText(ui->label->text() + "mod");
}


void MainWindow::on_pushButton_pow_clicked()
{
    ui->label->setText(ui->label->text() + "^");
}


void MainWindow::on_pushButton_log_clicked()
{
    ui->label->setText(ui->label->text() + "log(");
}


void MainWindow::on_pushButton_ln_clicked()
{
    ui->label->setText(ui->label->text() + "ln(");
}


void MainWindow::on_pushButton_cos_clicked()
{
    ui->label->setText(ui->label->text() + "cos(");
}


void MainWindow::on_pushButton_sin_clicked()
{
    ui->label->setText(ui->label->text() + "sin(");
}


void MainWindow::on_pushButton_tan_clicked()
{
    ui->label->setText(ui->label->text() + "tan(");
}


void MainWindow::on_pushButton_acos_clicked()
{
    ui->label->setText(ui->label->text() + "acos(");
}


void MainWindow::on_pushButton_asin_clicked()
{
    ui->label->setText(ui->label->text() + "asin(");
}


void MainWindow::on_pushButton_atan_clicked()
{
    ui->label->setText(ui->label->text() + "tan(");
}


void MainWindow::on_pushButton_openh_clicked()
{
    ui->label->setText(ui->label->text() + "(");
}


void MainWindow::on_pushButton_closeh_clicked()
{
    ui->label->setText(ui->label->text() + ")");
}


void MainWindow::on_pushButton_x_clicked()
{
    ui->label->setText(ui->label->text() + "x");
}


void MainWindow::on_pushButton_graph_clicked()
{
    if(ui->label->text() == "") {
        QMessageBox::information(this, "Error", "Not enough arguments");
    } else {

        char* str = new char (ui->label->text().length());
        QByteArray barr = ui->label->text().toLatin1();
        strlcpy(str, barr, ui->label->text().length() + 1);

        if(check_before_start(str) == 1) {
            QMessageBox::information(this, "Error", "Input error");
        } else if (check_before_start(str) == 2) {
            QMessageBox::information(this, "Error", "Too long expression");
        } else {

            Graph_window window;
            window.get_str(str);
            window.setModal(true);
            window.exec();

        }
    }
}


int MainWindow::get_x(double *x)
{
    Input_x window;
    window.setModal(true);
    window.exec();
    *x = window.x_value;
    return window.flag;
}

void MainWindow::on_pushButton_equal_clicked()
{
    if(ui->label->text() == "") {
        QMessageBox::information(this, "Error", "Not enough arguments");
    } else {
        char str[1024]="";
        QByteArray barr = ui->label->text().toLatin1();
        strlcpy(str, barr, ui->label->text().length() + 1);


        if(check_before_start(str) == 1) {
            QMessageBox::information(this, "Error", "Input error");
        } else if (check_before_start(str) == 2) {
            QMessageBox::information(this, "Error", "Too long expression");
        } else {
            double result, x = 0;
            if(ui->label->text().contains('x')) {
                 if(get_x(&x)) {
                     start(str, x, &result);

                     QString new_label;
                     new_label = QString::number(result, 'g', 15);
                     ui->label->setText(new_label);
                 }
            } else {
                start(str, x, &result);

                QString new_label;
                new_label = QString::number(result, 'g', 15);
                ui->label->setText(new_label);
            }
        }
    }
}



void MainWindow::on_pushButton_del_clicked()
{
    ui->label->backspace();
}


void MainWindow::on_pushButton_acos_2_clicked()
{
    ui->label->setText(ui->label->text() + "sqrt(");
}


void MainWindow::on_pushButton_10_clicked()
{
    Credit window;
    window.setModal(true);
    window.exec();
}


void MainWindow::on_pushButton_11_clicked()
{
    Depozit window;
    window.setModal(true);
    window.exec();
}

