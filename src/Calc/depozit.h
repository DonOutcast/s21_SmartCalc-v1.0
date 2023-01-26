#ifndef DEPOZIT_H
#define DEPOZIT_H

#include <QDialog>
#include <QMessageBox>

namespace Ui {
class Depozit;
}


class Depozit : public QDialog
{
    Q_OBJECT

public:
    explicit Depozit(QWidget *parent = nullptr);
    ~Depozit();

private slots:



    void on_count_clicked();

    void on_pdays_stateChanged(int arg1);

    void on_pmonth_stateChanged(int arg1);

    void on_pkvartal_stateChanged(int arg1);

    void on_pend_stateChanged(int arg1);

    void on_kapit_stateChanged(int arg1);

    void on_plusmonth_stateChanged(int arg1);

    void on_pluskvartal_stateChanged(int arg1);

    void on_pluspolyear_stateChanged(int arg1);

    void on_plusyear_stateChanged(int arg1);

    void on_snday_stateChanged(int arg1);

    void on_snkv_stateChanged(int arg1);

    void on_snpolyear_stateChanged(int arg1);

    void on_snyear_stateChanged(int arg1);

private:
    Ui::Depozit *ui;
    int v_day = 0, v_month = 0, v_kvartal = 0, v_end = 0;
    int kap;
    int p_polyear = 0, p_month = 0, p_kvartal = 0, p_year = 0;
    int m_polyear = 0, m_month = 0, m_kvartal = 0, m_year = 0;

};

#endif // DEPOZIT_H
