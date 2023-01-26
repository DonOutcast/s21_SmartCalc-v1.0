#ifndef GRAPH_WINDOW_H
#define GRAPH_WINDOW_H

#include <QDialog>
#include <QVector>

namespace Ui {
class Graph_window;
}

class Graph_window : public QDialog
{
    Q_OBJECT

public:
    explicit Graph_window(QWidget *parent = nullptr);
    ~Graph_window();

    void get_str(char *str);

private slots:
    void on_pushButton_clicked();
    void print_graph(char *str);

private:
    Ui::Graph_window *ui;
    double xBegin, xEnd, h, X, yBegin, yEnd;
    int N;

    QVector<double> x,y;

    char *str_for_graph;
};

#endif // GRAPH_WINDOW_H
