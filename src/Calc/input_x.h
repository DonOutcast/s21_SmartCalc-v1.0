#ifndef INPUT_X_H
#define INPUT_X_H

#include <QDialog>

namespace Ui {
class Input_x;
}

class Input_x : public QDialog
{
    Q_OBJECT

public:
    explicit Input_x(QWidget *parent = nullptr);
    ~Input_x();
    double x_value;
    int flag;

private slots:

    void on_lineEdit_returnPressed();

    void on_pushButton_clicked();

private:
    Ui::Input_x *ui;
};

#endif // INPUT_X_H
