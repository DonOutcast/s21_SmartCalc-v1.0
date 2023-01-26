#include "credit.h"
#include "ui_credit.h"
#include <QMessageBox>

#ifdef __cplusplus
extern "C"
{
#endif
#include "../s21_SmartCalc.h"
#ifdef __cplusplus
}
#endif

Credit::Credit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Credit)
{
    ui->setupUi(this);
}

Credit::~Credit()
{
    delete ui;
}




void Credit::on_count_clicked()
{
    ui->l_month_payment->setText("");
    ui->l_overpayment->setText("");
    ui->l_total_payment->setText("");

    int marker = 1;

    double sum_credit, rate, month_payment, overpayment, total_payment;
    int time, month;

    QString s_sum = ui->l_sum_credit->text();
    QByteArray ba_sum = s_sum.toLocal8Bit();
    char *str_sum = ba_sum.data();

    if(s_sum == "" || !check_input_value_positiv_number(str_sum)) {
        marker = 0;
        QMessageBox::information(this, "Error", "Общая сумма кредита введена некорректно");
    } else {
        sum_credit = s_sum.toDouble();
    }

    QString s_time = ui->l_time->text();
    QByteArray ba_time = s_time.toLocal8Bit();
    char *str_time = ba_time.data();

    if(s_time == "" || !check_input_value_integer_number(str_time)) {
        marker = 0;
        QMessageBox::information(this, "Error", "Cрок кредита введен некорректно");
    } else {
        time = s_time.toInt();
        if (time == 0) {
            marker = 0;
            QMessageBox::information(this, "Error", "Cрок кредита введен некорректно");
        }
    }

    QString s_rate = ui->l_rate->text();
    QByteArray ba_rate = s_rate.toLocal8Bit();
    char *str_rate = ba_rate.data();

    if(s_rate == "" || !check_input_value_positiv_number(str_rate)) {
        marker = 0;
        QMessageBox::information(this, "Error", "Процентная ставка введена некорректно");
    } else {
        rate = s_rate.toDouble();
    }

    QString s_month = ui->l_month->text();
    QByteArray ba_month = s_month.toLocal8Bit();
    char *str_month = ba_month.data();

    if(s_month == "" || !check_input_value_integer_number(str_month)) {
        marker = 0;
        QMessageBox::information(this, "Error", "Номер месяца введен некорректно");
    } else {
        month = s_month.toInt();
        if (month > 12) {
            marker = 0;
            QMessageBox::information(this, "Error", "Номер месяца введен некорректно");
        }
    }

    if (marker) {
        if (type_ann && !type_diff) {
            credit_ann(sum_credit, time, rate, &month_payment, &overpayment, &total_payment);

        } else if (!type_ann && type_diff) {
            credit_diff(sum_credit, time, month, rate, &month_payment, &overpayment, &total_payment);

        } else if ((type_ann && type_diff) || (!type_ann && !type_diff)) {
            marker = 0;
            QMessageBox::information(this, "Error", "Выберите один из типов платежей");
        }
    }
    if (marker) {
        month_payment = month_payment - fmod(month_payment, 0.01);
        overpayment = overpayment - fmod(overpayment, 0.01);
        total_payment = total_payment - fmod(total_payment, 0.01);

        QString s_month_payment;
        s_month_payment = QString::number(month_payment, 'g', 15);
        ui->l_month_payment->setText(s_month_payment);

        QString s_overpayment;
        s_overpayment = QString::number(overpayment, 'g', 15);
        ui->l_overpayment->setText(s_overpayment);

        QString s_total_payment;
        s_total_payment = QString::number(total_payment, 'g', 15);
        ui->l_total_payment->setText(s_total_payment);
    }



}
void Credit::on_checkBox_ann_stateChanged(int arg1)
{
    if (arg1) {
        type_ann = 1;
    } else {
        type_ann = 0;
    }
}


void Credit::on_checkBox_diff_stateChanged(int arg1)
{
    if (arg1) {
        type_diff = 1;
    } else {
        type_diff = 0;
    }
}



