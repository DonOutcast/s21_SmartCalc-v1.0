#include "graph_window.h"
#include "ui_graph_window.h"

#ifdef __cplusplus
extern "C"
{
#endif
#include "../s21_SmartCalc.h"
#ifdef __cplusplus
}
#endif

Graph_window::Graph_window(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Graph_window)
{
    ui->setupUi(this);
}

Graph_window::~Graph_window()
{
    delete ui;
}


void Graph_window::get_str(char *str) {
    str_for_graph = str;
}

void Graph_window::print_graph(char *str) {
       ui->graph_function->clearGraphs();
       double result;
       h = 0.1;
       ui->graph_function->xAxis->setRange(xBegin, xEnd);
       ui->graph_function->yAxis->setRange(yBegin, yEnd);


       for (X = xBegin; X <= xEnd; X += h) {
           x.push_back(X);
           start(str, X, &result);
           y.push_back(result);
       }

       ui->graph_function->addGraph();
       ui->graph_function->graph(0)->addData(x, y);
       ui->graph_function->replot();
       x.clear();
       y.clear();
 }

void Graph_window::on_pushButton_clicked()
{
    int marker = 1;
    QString s_x_b = ui->lineEdit_x_b->text();
    QByteArray ba_x_b = s_x_b.toLocal8Bit();
    char *str_x_b = ba_x_b.data();

    if (s_x_b == "" || !check_input_value(str_x_b)) {
        marker = 0;
        QMessageBox::information(this, "Error", "Input error start of domain");
    } else {
         xBegin = s_x_b.toDouble();
    }

    QString s_x_e = ui->lineEdit_x_e->text();
    QByteArray ba_x_e = s_x_e.toLocal8Bit();
    char *str_x_e = ba_x_e.data();

    if (s_x_e == "" || !check_input_value(str_x_e)) {
        marker = 0;
        QMessageBox::information(this, "Error", "Input error the end domain");
    } else {
        xEnd = s_x_e.toDouble();
    }

    QString s_y_b = ui->lineEdit_y_b->text();
    QByteArray ba_y_b = s_y_b.toLocal8Bit();
    char *str_y_b = ba_y_b.data();

    if (s_y_b == "" || !check_input_value(str_y_b)) {
        marker = 0;
        QMessageBox::information(this, "Error", "Input error start of codomain");
    } else {
        yBegin = s_y_b.toDouble();
    }

    QString s_y_e = ui->lineEdit_y_e->text();
    QByteArray ba_y_e = s_y_e.toLocal8Bit();
    char *str_y_e = ba_y_e.data();

    if (s_y_e == "" || !check_input_value(str_y_e)) {
        marker = 0;
        QMessageBox::information(this, "Error", "Input error the end codomain");
    } else {
        yEnd = s_y_e.toDouble();
    }

    if (fabs(xBegin) > 1000000 || fabs(xEnd) > 1000000) {
        marker = 0;
        QMessageBox::information(this, "Error", "Domain value exceeded");
    }

    if (fabs(yBegin) > 1000000 || fabs(yEnd) > 1000000) {
        marker = 0;
        QMessageBox::information(this, "Error", "Codomain value exceeded");
    }

    if (xBegin > xEnd) {
        marker = 0;
        QMessageBox::information(this, "Error", "Incorrect input domain");
    }

    if (yBegin > yEnd) {
        marker = 0;
        QMessageBox::information(this, "Error", "Incorrect input codomain");
    }

    if (marker) {
        print_graph(str_for_graph);
    }

}

