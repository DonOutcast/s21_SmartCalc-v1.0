#ifndef SRC_S21_SMARTCALC_H_
#define SRC_S21_SMARTCALC_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define CORRECTLY 0
#define ERROR 1
#define NO 0
#define YES 1
#define BUFF 255

typedef enum typ {
    number = 1, s21_x, open_brace, close_brace, s21_plus, s21_minus,
    s21_mult, s21_div, s21_pow, s21_mod, s21_cos, s21_sin, s21_tan,
    s21_acos, s21_asin, s21_atan, s21_sqrt, s21_log, s21_ln, s21_plus_un, s21_minus_un
} type_t;

typedef struct list {
    double value;
    int priority;
    type_t type;
    struct list *next;
} list_t;

int check_before_start(char *str);
void start(char* str, double value_x, double *result);
void delete_space(const char *str, char *new_str, int lenght);
int check_hooks(const char *str, int lenght);
int check_input(char *str, int lenght);
int is_there_bi_sign(char sym);
int is_there_un_sign(char sym);
int check_numbers(const char *str, int i);
int check_x(const char *str, int i);
int check_dot(const char *str, int i);
int check_sign(char *str, int i);
int check_mod(char *str, int i);
int check_sign_before_func(char *str, int i);
int check_cos(char *str, int i);
int check_sin(char *str, int i);
int check_tan(char *str, int i);
int check_acos(char *str, int i);
int check_asin(char *str, int i);
int check_atan(char *str, int i);
int check_sqrt(char *str, int i);
int check_ln(char *str, int i);
int check_log(char *str, int i);

void parsing(char *str, list_t **list);
int check_un_bi(const char *str, int j);
void create_and_add_list(list_t **list, char *str_value, int v_priority, type_t v_type);
list_t *create_list(char *str_value, int v_priority, type_t v_type);
void add_elem_list(list_t *head, char *str_value, int v_priority, type_t v_type);
void delete_list(list_t *head);
void output_list(list_t *head);

void polish_notation(list_t *list, list_t **stack_res);
int check_priotity(list_t *stack, int priority);
void create_stack(list_t **top, double v_calue, int v_priority, type_t v_type);
void push_stack(list_t **top, double v_calue, int v_priority, type_t v_type);
void pop_stack(list_t **stack);
void create_and_push_stack(list_t **stack, double v_value, int v_priority, type_t v_type);
void reverse_stack(list_t **stack, double x);

void calculate(list_t **stack);
void count_un_fun(list_t **stack, list_t *tmp1, list_t *tmp2);
void count_bi_fun(list_t **stack, list_t *tmp1, list_t *tmp2, list_t *tmp3);
void delete_elem(list_t **root, list_t *lst);

int check_input_value(char *str_x);
int check_input_value_positiv_number(char *str_x);
int check_input_value_integer_number(char *str_x);

void credit_ann(double sum_credit, int time , double rate, double *month_payment,
                                    double *overpayment, double *total_payment);
void credit_diff(double sum_credit, int time , int monht, double rate,
                double *month_payment, double *overpayment, double *total_payment);
void count_days(int month, int *days);
void deposit(double sum, int time, double procent_rate, double nalog_rate, int choise_plus,
double plus, int choise_minus, double minus, int choise_payments,
int perio_payments, int choise_kap,
double *sumnalend,  double *procentEnd, double *depositEnd, int month);

#endif  // SRC_S21_SMARTCALC_H_
