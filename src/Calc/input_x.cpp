#include "input_x.h"
#include "ui_input_x.h"
#include <QMessageBox>

Input_x::Input_x(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Input_x)
{
    ui->setupUi(this);
}

Input_x::~Input_x()
{
    delete ui;
}


void Input_x::on_lineEdit_returnPressed()
{
    QString s = ui->lineEdit->text();
    QByteArray ba = s.toLocal8Bit();
    char *str_x = ba.data();

    int res_code = 1;
    int i = 0, flag_point = 0;
    while(str_x[i]) {
        if((str_x[i] == '+' || str_x[i] == '-') && i != 0) {
            res_code = 0;
        } else if (str_x[i] < '0' && str_x[i] != '+' && str_x[i] != '-' && str_x[i] != '.') {
            res_code = 0;
        } else if (str_x[i] > '9') {
            res_code = 0;
        }
        if (str_x[i] == '.') {
            if (flag_point) {
                res_code = 0;
            }
            if(str_x[i - 1] == '+' || str_x[i - 1] == '-') {
                res_code = 0;
            }
            flag_point = 1;
        }
        i++;
    }
    if (res_code) {
        x_value = s.toDouble();
        flag = 1;
    } else {
        flag = 0;
        QMessageBox::information(this, "Error", "Input error x");
    }
}




void Input_x::on_pushButton_clicked()
{
    QString s = ui->lineEdit->text();
    QByteArray ba = s.toLocal8Bit();
    char *str_x = ba.data();

    int res_code = 1;
    int i = 0, flag_point = 0;
    while(str_x[i]) {
        if((str_x[i] == '+' || str_x[i] == '-') && i != 0) {
            res_code = 0;
        } else if (str_x[i] < '0' && str_x[i] != '+' && str_x[i] != '-' && str_x[i] != '.') {
            res_code = 0;
        } else if (str_x[i] > '9') {
            res_code = 0;
        }
        if (str_x[i] == '.') {
            if (flag_point) {
                res_code = 0;
            }
            if(str_x[i - 1] == '+' || str_x[i - 1] == '-') {
                res_code = 0;
            }
            flag_point = 1;
        }
        i++;
    }
    if (res_code) {
        x_value = s.toDouble();
        flag = 1;
    } else {
        flag = 0;
        QMessageBox::information(this, "Error", "Input error x");
    }
}

