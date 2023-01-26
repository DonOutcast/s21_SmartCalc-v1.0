#include "depozit.h"
#include "ui_depozit.h"
#include <QMessageBox>



#ifdef __cplusplus
extern "C"
{
#endif
#include "../s21_SmartCalc.h"
#ifdef __cplusplus
}
#endif



Depozit::Depozit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Depozit)
{
    ui->setupUi(this);
}

Depozit::~Depozit()
{
    delete ui;
}

void Depozit::on_pdays_stateChanged(int arg1)
{
    if (arg1) {
        v_day = 1;
    } else {
        v_day = 0;
    }
}


void Depozit::on_pmonth_stateChanged(int arg1)
{
    if (arg1) {
        v_month = 1;
    } else {
        v_month = 0;
    }
}


void Depozit::on_pkvartal_stateChanged(int arg1)
{
    if (arg1) {
        v_kvartal = 1;
    } else {
        v_kvartal = 0;
    }
}


void Depozit::on_pend_stateChanged(int arg1)
{
    if (arg1) {
        v_end = 1;
    } else {
        v_end = 0;
    }
}


void Depozit::on_kapit_stateChanged(int arg1)
{
    if (arg1) {
        kap = 1;
    } else {
        kap = 0;
    }
}



void Depozit::on_plusmonth_stateChanged(int arg1)
{
    if (arg1) {
        p_month = 1;
    } else {
        p_month = 0;
    }
}


void Depozit::on_pluskvartal_stateChanged(int arg1)
{
    if (arg1) {
        p_kvartal = 1;
    } else {
        p_kvartal = 0;
    }
}


void Depozit::on_pluspolyear_stateChanged(int arg1)
{
    if (arg1) {
        p_polyear = 1;
    } else {
        p_polyear = 0;
    }
}


void Depozit::on_plusyear_stateChanged(int arg1)
{
    if (arg1) {
        p_year = 1;
    } else {
        p_year = 0;
    }
}


void Depozit::on_snday_stateChanged(int arg1)
{
    if (arg1) {
        m_month = 1;
    } else {
        m_month = 0;
    }
}


void Depozit::on_snkv_stateChanged(int arg1)
{
    if (arg1) {
        m_kvartal = 1;
    } else {
        m_kvartal = 0;
    }
}


void Depozit::on_snpolyear_stateChanged(int arg1)
{
    if (arg1) {
        m_polyear = 1;
    } else {
        m_polyear = 0;
    }
}


void Depozit::on_snyear_stateChanged(int arg1)
{
    if (arg1) {
        m_year = 1;
    } else {
        m_year = 0;
    }
}

void Depozit::on_count_clicked()
{





    int marker = 1;
    double sum, procent_rate, nalog_rate;
    int time, nmonth;
    double sumnalend, procentEnd, depositEnd;

    QString s_sum = ui->sumvklada->text();
    QByteArray ba_sum = s_sum.toLocal8Bit();
    char *str_sum = ba_sum.data();

    if(s_sum == "" || !check_input_value_positiv_number(str_sum)) {
        marker = 0;
        QMessageBox::information(this, "Error", "Сумма вклада введена некорректно");
    } else {
        sum = s_sum.toDouble();
    }

    QString s_time = ui->srok->text();
    QByteArray ba_time = s_time.toLocal8Bit();
    char *str_time = ba_time.data();

    if(s_time == "" || !check_input_value_integer_number(str_time)) {
        marker = 0;
        QMessageBox::information(this, "Error", "Cрок размещения введен некорректно");
    } else {
        time = s_time.toInt();
        if (time == 0) {
            marker = 0;
            QMessageBox::information(this, "Error", "Cрок размещения введен некорректно");
        }
    }

    QString s_rate = ui->procentstavka->text();
    QByteArray ba_rate = s_rate.toLocal8Bit();
    char *str_rate = ba_rate.data();

    if(s_rate == "" || !check_input_value_positiv_number(str_rate)) {
        marker = 0;
        QMessageBox::information(this, "Error", "Процентная ставка введена некорректно");
    } else {
        procent_rate = s_rate.toDouble();
    }

    QString s_raten = ui->nalogstavka->text();
    QByteArray ba_raten = s_raten.toLocal8Bit();
    char *str_raten = ba_raten.data();

    if(s_raten == "" || !check_input_value_positiv_number(str_raten)) {
        marker = 0;
        QMessageBox::information(this, "Error", "Налоговая ставка введена некорректно");
    } else {
        nalog_rate = s_rate.toDouble();
        if (s_raten == "0") {
            nalog_rate = 0;
        }
    }

    QString s_month = ui->month->text();
    QByteArray ba_month = s_month.toLocal8Bit();
    char *str_month = ba_month.data();

    if(s_month == "" || !check_input_value_integer_number(str_month)) {
        marker = 0;
        QMessageBox::information(this, "Error", "Номер месяца введен некорректно");
    } else {
        nmonth = s_month.toInt();
        if (nmonth > 12) {
            marker = 0;
            QMessageBox::information(this, "Error", "Номер месяца введен некорректно");
        }
    }

        int choise_payments = 0, perio_payments = 0;

        if (v_day && !v_month && !v_kvartal && !v_end) {
            if (time < 1) {
                marker = 0;
                QMessageBox::information(this, "Error", "Срок размещения меньше срока выплат");
            } else {
                choise_payments = 1;
                perio_payments = time;
            }
        } else if (!v_day && v_month && !v_kvartal && !v_end) {
            if (time < 30) {
                marker = 0;
                QMessageBox::information(this, "Error", "Срок размещения меньше срока выплат");
            } else {
                choise_payments = 1;
                perio_payments = time / 30;
            }
        } else if (!v_day && !v_month && v_kvartal && !v_end) {
            if (time < 90) {
                marker = 0;
                QMessageBox::information(this, "Error", "Срок размещения меньше срока выплат");
            } else {
                choise_payments = 1;
                perio_payments = time / 90;
            }
        } else if (!v_day && !v_month && !v_kvartal && v_end) {
            choise_payments = 0;
            perio_payments = 0;
        } else {
            marker = 0;
            qApp->setStyleSheet("QMessageBox { background-color: rgba(0, 84, 147, 107);}");
            QMessageBox::information(this, "Error", "Выберите один из вариантов периодичности выплат");
        }


        if (marker) {
            int choice_kap = 0;
            if(kap && v_day) {
                choice_kap = 1;
            } else if (kap && v_month) {
                choice_kap = 2;
            } else if (kap && v_kvartal) {
                choice_kap = 3;
            } else if (kap && v_end) {
                choice_kap = 0;
            }


            int choise_plus = 0;
            double sum_plus = 0;


            if (p_month || p_kvartal || p_polyear || p_year) {

                QString s_sump = ui->sumpopoln->text();
                QByteArray ba_sump = s_sump.toLocal8Bit();
                char *str_sump = ba_sump.data();

                if(s_sum == "" || !check_input_value_positiv_number(str_sump)) {
                    marker = 0;
                    QMessageBox::information(this, "Error", "Сумма пополнения введена некорректно");
                } else {
                    sum_plus = s_sump.toDouble();
                }

                if (p_month && !p_kvartal && !p_polyear && !p_year) {
                    if (time < 30) {
                        marker = 0;
                        QMessageBox::information(this, "Error", "Срок размещения меньше срока пополнения");
                    } else {
                        choise_plus = 1;
                    }
                } else if (!p_month && p_kvartal && !p_polyear && !p_year) {
                    if (time < 90) {
                        marker = 0;
                        QMessageBox::information(this, "Error", "Срок размещения меньше срока пополнения");
                    } else {
                        choise_plus = 3;
                    }
                } else if (!p_month && !p_kvartal && p_polyear && !p_year) {
                    if (time < 182) {
                        marker = 0;
                        QMessageBox::information(this, "Error", "Срок размещения меньше срока пополнения");
                    } else {
                        choise_plus = 6;
                    }
                }  else if (!p_month && !p_kvartal && !p_polyear && p_year) {
                    if (time < 365) {
                        marker = 0;
                        QMessageBox::information(this, "Error", "Срок размещения меньше срока пополнения");
                    } else {
                        choise_plus = 12;
                    }
                } else {
                    marker = 0;
                    QMessageBox::information(this, "Error", "Выберите один из вариантов пополнений");
                }
            }
            int choise_minus = 0;
            double sum_minus = 0;


            if (m_month || m_kvartal || m_polyear || m_year) {

                QString s_summ = ui->sumsnat->text();
                QByteArray ba_summ = s_summ.toLocal8Bit();
                char *str_summ = ba_summ.data();

                if(s_summ == "" || !check_input_value_positiv_number(str_summ)) {
                    marker = 0;
                    QMessageBox::information(this, "Error", "Сумма снятия введена некорректно");
                } else {
                    sum_minus = s_summ.toDouble();
                }

                if (m_month && !m_kvartal && !m_polyear && !m_year) {
                    if (time < 30) {
                        marker = 0;
                        QMessageBox::information(this, "Error", "Срок размещения меньше срока снятия");
                    } else {
                    choise_minus = 1;
                    }
                } else if (!m_month && m_kvartal && !m_polyear && !m_year) {
                    if (time < 90) {
                        marker = 0;
                        QMessageBox::information(this, "Error", "Срок размещения меньше срока снятия");
                    } else {
                        choise_minus = 3;
                    }
                } else if (!m_month && !m_kvartal && m_polyear && !m_year) {
                    if (time < 182) {
                        marker = 0;
                        QMessageBox::information(this, "Error", "Срок размещения меньше срока снятия");
                    } else {
                        choise_minus = 6;
                    }
                }  else if (!m_month && !m_kvartal && !m_polyear && m_year) {
                    if (time < 365) {
                        marker = 0;
                        QMessageBox::information(this, "Error", "Срок размещения меньше срока снятия");
                    } else {
                        choise_minus = 12;
                    }
                } else {
                    marker = 0;
                    QMessageBox::information(this, "Error", "Выберите один из вариантов снятий");
                }
            }

                if (marker) {
                    deposit(sum, time, procent_rate, nalog_rate, choise_plus,
                    sum_plus, choise_minus, sum_minus, choise_payments,
                    perio_payments, choice_kap,
                    &sumnalend, &procentEnd, &depositEnd, nmonth);

                    sumnalend = sumnalend - fmod(sumnalend, 0.01);
                    procentEnd = procentEnd - fmod(procentEnd, 0.01);
                    depositEnd = depositEnd - fmod(depositEnd, 0.01);

                    QString s_sumnal;
                    s_sumnal = QString::number(sumnalend, 'g', 15);
                    ui->sumnaloga->setText(s_sumnal);

                    QString sumprocent;
                    sumprocent = QString::number(procentEnd, 'g', 15);
                    ui->nachislprocent->setText(sumprocent);

                    QString deposite;
                    deposite = QString::number(depositEnd, 'g', 15);
                    ui->obsumresult->setText(deposite);
                }
    }

}



