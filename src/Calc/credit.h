#ifndef CREDIT_H
#define CREDIT_H

#include <QDialog>

namespace Ui {
class Credit;
}

class Credit : public QDialog
{
    Q_OBJECT

public:
    explicit Credit(QWidget *parent = nullptr);
    ~Credit();

private slots:

    void on_count_clicked();

    void on_checkBox_ann_stateChanged(int arg1);

    void on_checkBox_diff_stateChanged(int arg1);

private:
    Ui::Credit *ui;
    int type_ann = 0, type_diff = 0;
};

#endif // CREDIT_H
