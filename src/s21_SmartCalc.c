#include "s21_SmartCalc.h"

int check_before_start(char *str) {
    int flag_error = 0;
    int lenght = strlen(str);
    if (lenght > 255) {
        flag_error = 2;
    } else {
        char new_str[BUFF];
        delete_space(str, new_str, lenght);
        lenght = strlen(new_str);
        if (check_hooks(new_str, lenght)) {
            flag_error = 1;
        } else if (check_input(new_str, lenght)) {
            flag_error = 1;
        }
    }
    return flag_error;
}

void start(char* str, double value_x, double *result) {
    char new_str[BUFF];
    int lenght = strlen(str);
    delete_space(str, new_str, lenght);
    list_t *list = NULL;
    list_t *stack_res = NULL;
    parsing(new_str, &list);
    polish_notation(list, &stack_res);
    reverse_stack(&stack_res, value_x);
    calculate(&stack_res);
    *result = stack_res->value;
    delete_list(list);
    delete_list(stack_res);
}

void delete_space(const char *str, char *new_str, int lenght) {
    int j = 0;
    for (int i = 0; i < lenght; i++) {
        if (str[i] == 32) {
            continue;
        } else {
            new_str[j] = str[i];
            j++;
        }
    }
    new_str[j] = '\0';
}

int check_hooks(const char *str, int lenght) {
    int res_code = CORRECTLY;
    int count_hook_left = 0, count_hook_right = 0;
    for (int i = 0; i < lenght; i++) {
        if (str[i] == '(') {
            count_hook_left++;
            if (str[i + 1] == ')') {
                res_code = ERROR;
                break;
            }
        }
        if (str[i] == ')') {
            count_hook_right++;
            if (count_hook_right > count_hook_left) {
                res_code = ERROR;
                break;
            }
        }
    }
    if (count_hook_left != count_hook_right)
        res_code = ERROR;
    return res_code;
}

int check_input(char *str, int lenght) {
    int res_code = CORRECTLY;
    for (int i = 0; i < lenght; i++) {
        if (res_code)
            break;
        if ((str[i] >= '0' && str[i] <= '9') || str[i] == '(' || str[i] == ')') {
            if (check_numbers(str, i))
                res_code = ERROR;
        } else if (str[i] == 'x' || str[i] == 'X') {
            if (check_x(str, i))
                res_code = ERROR;
        } else if (str[i] == '.') {
            if (check_dot(str, i))
                res_code = ERROR;
        } else if (is_there_un_sign(str[i])) {
            if (check_sign(str, i))
                res_code = ERROR;
        } else if (is_there_bi_sign(str[i])) {
            if (i == 0 || str[i - 1] == '(' || check_sign(str, i))
                res_code = ERROR;
        } else if (str[i] == 'm') {
            int j = (i + 3);
            if (j < lenght) {
                if (check_mod(str, i))
                    res_code = ERROR;
                else
                    i += 2;
            } else {
                res_code = ERROR;
            }
        } else if (str[i] == 's') {
            if (!check_sin(str, i))
                i += 3;
            else if (!check_sqrt(str, i))
                i += 4;
            else
                res_code = ERROR;
        } else if (str[i] == 'c' || str[i] == 't') {
            if (check_cos(str, i) && check_tan(str, i))
                res_code = ERROR;
            else
                i += 3;
        } else if (str[i] == 'a') {
            if (check_acos(str, i) && check_asin(str, i) && check_atan(str, i))
                res_code = ERROR;
            else
                i += 4;
        } else if (str[i] == 'l') {
            if (!check_ln(str, i))
                i += 2;
            else if (!check_log(str, i))
                i += 3;
            else
                res_code = ERROR;
        } else {
            res_code = ERROR;
        }
    }
    return res_code;
}

int check_numbers(const char *str, int i) {
    int res_code = CORRECTLY;
    if (i != 0) {
        if (str[i - 1] == ')')
            res_code = ERROR;
    }
    if (str[i + 1] == '(')
        res_code = ERROR;
    if (str[i + 1] == 'c' || str[i + 1] == 's')
        res_code = ERROR;
    if (str[i + 1] == 't' || str[i + 1] == 'a')
        res_code = ERROR;
    if (str[i + 1] == 'l')
        res_code = ERROR;
    return res_code;
}

int check_x(const char *str, int i) {
    int res_code = CORRECTLY;
    if (i != 0) {
        if (str[i - 1] >= '0' && str[i - 1] <= '9')
            res_code = ERROR;
        if (str[i - 1] == '.' || str[i - 1] == ')')
            res_code = ERROR;
    }
    if (str[i + 1] >= '0' && str[i + 1] <= '9')
        res_code = ERROR;
    if (str[i + 1] == '.' || str[i + 1] == '(')
        res_code = ERROR;
    if (str[i + 1] == 'c' || str[i + 1] == 's')
        res_code = ERROR;
    if (str[i + 1] == 't' || str[i + 1] == 'a')
        res_code = ERROR;
    if (str[i + 1] == 'l')
        res_code = ERROR;
    return res_code;
}

int is_there_bi_sign(char sym) {
    int yes_no = NO;
    if (sym == '*' || sym == '/')
        yes_no = YES;
    else if (sym == '^')
        yes_no = YES;
    return yes_no;
}

int is_there_un_sign(char sym) {
    int yes_no = NO;
    if (sym == '+' || sym == '-')
        yes_no = YES;
    return yes_no;
}

int check_dot(const char *str, int i) {
    int res_code = CORRECTLY;
    if (i != 0) {
        if (str[i - 1] < '0' || str[i - 1] > '9')
            res_code = ERROR;
        if (str[i + 1] < '0' || str[i + 1] > '9')
            res_code = ERROR;
    } else {
        res_code = ERROR;
    }
    return res_code;
}

int check_sign(char *str, int i) {
    int res_code = CORRECTLY;
    if (str[i + 1] == ')')
        res_code = ERROR;
    if (i != 0) {
        if (is_there_bi_sign(str[i - 1]) || is_there_bi_sign(str[i + 1]))
            res_code = ERROR;
        if (is_there_un_sign(str[i - 1]) || is_there_un_sign(str[i + 1]))
            res_code = ERROR;
        if (str[i - 1] == 'd' || str[i + 1] == 'm')
            res_code = ERROR;
    } else {
        if (is_there_bi_sign(str[i + 1]))
            res_code = ERROR;
        if (is_there_un_sign(str[i + 1]))
            res_code = ERROR;
        if (str[i + 1] == 'm')
            res_code = ERROR;
    }
    return res_code;
}

int check_mod(char *str, int i) {
    int res_code = CORRECTLY;
    if (i != 0) {
        if (str[i - 1] == '(' || str[i + 3] == ')')
            res_code = ERROR;
        if (is_there_un_sign(str[i - 1]) || is_there_bi_sign(str[i - 1]))
            res_code = ERROR;
        if (is_there_un_sign(str[i + 3]) || is_there_bi_sign(str[i + 3]))
            res_code = ERROR;
        if (str[i + 3] == 'm' || str[i - 1] == 'd')
            res_code = ERROR;
        if (str[i + 1] != 'o' || str[i + 2] != 'd')
            res_code = ERROR;
    } else {
        res_code = ERROR;
    }
    return res_code;
}

int check_sign_before_func(char *str, int i) {
    int res_code = CORRECTLY;
    if (i != 0 && str[i - 1] != '(' && str[i - 1] != 'd') {
        if (!is_there_un_sign(str[i - 1]) && !is_there_bi_sign(str[i - 1]))
            res_code = ERROR;
    }
    return res_code;
}

int check_sin(char *str, int i) {
    int res_code = CORRECTLY;
    if (check_sign_before_func(str, i))
        res_code = ERROR;
    if (strncmp(&str[i], "sin(", 4))
        res_code = ERROR;
    return res_code;
}

int check_sqrt(char *str, int i) {
    int res_code = CORRECTLY;
    if (check_sign_before_func(str, i))
        res_code = ERROR;
    if (strncmp(&str[i], "sqrt(", 5))
        res_code = ERROR;
    return res_code;
}

int check_cos(char *str, int i) {
    int res_code = CORRECTLY;
    if (check_sign_before_func(str, i))
        res_code = ERROR;
    if (strncmp(&str[i], "cos(", 4))
        res_code = ERROR;
    return res_code;
}

int check_tan(char *str, int i) {
    int res_code = CORRECTLY;
    if (check_sign_before_func(str, i))
        res_code = ERROR;
    if (strncmp(&str[i], "tan(", 4))
        res_code = ERROR;
    return res_code;
}

int check_acos(char *str, int i) {
    int res_code = CORRECTLY;
    if (check_sign_before_func(str, i))
        res_code = ERROR;
    if (strncmp(&str[i], "acos(", 5))
        res_code = ERROR;
    return res_code;
}

int check_asin(char *str, int i) {
    int res_code = CORRECTLY;
    if (check_sign_before_func(str, i))
        res_code = ERROR;
    if (strncmp(&str[i], "asin(", 5))
        res_code = ERROR;
    return res_code;
}

int check_atan(char *str, int i) {
    int res_code = CORRECTLY;
    if (check_sign_before_func(str, i))
        res_code = ERROR;
    if (strncmp(&str[i], "atan(", 5))
        res_code = ERROR;
    return res_code;
}

int check_ln(char *str, int i) {
    int res_code = CORRECTLY;
    if (check_sign_before_func(str, i))
        res_code = ERROR;
    if (strncmp(&str[i], "ln(", 3))
        res_code = ERROR;
    return res_code;
}

int check_log(char *str, int i) {
    int res_code = CORRECTLY;
    if (check_sign_before_func(str, i))
        res_code = ERROR;
    if (strncmp(&str[i], "log(", 4))
        res_code = ERROR;
    return res_code;
}

void parsing(char *str, list_t **list) {
    char str_num[BUFF];
    int i = 0;
    for (size_t j = 0; j < strlen(str); j++) {
        if ((str[j] >= '0' && str[j] <= '9') || str[j] == '.') {
            str_num[i++] = str[j];
            if ((str[j + 1] < '0' || str[j + 1] > '9') && str[j + 1] != '.') {
                str_num[i]= '\0';
                create_and_add_list(list, str_num, 0, number);
                i = 0;
            }
        } else if (str[j] == 'x' || str[j] == 'X') {
            create_and_add_list(list, "0", 0, s21_x);
        } else if (str[j] == '(') {
            create_and_add_list(list, "0", 0, open_brace);
        } else if (str[j] == ')') {
            create_and_add_list(list, "0", 0, close_brace);
        } else if (str[j] == '+') {
            if (check_un_bi(str, j))
                create_and_add_list(list, "0", 1, s21_plus_un);
            else
                create_and_add_list(list, "0", 1, s21_plus);
        } else if (str[j] == '-') {
            if (check_un_bi(str, j))
                create_and_add_list(list, "0", 1, s21_minus_un);
            else
                create_and_add_list(list, "0", 1, s21_minus);
        } else if (str[j] == '*') {
            create_and_add_list(list, "0", 2, s21_mult);
        }  else if (str[j] == '/') {
            create_and_add_list(list, "0", 2, s21_div);
        }  else if (str[j] == '^') {
            create_and_add_list(list, "0", 3, s21_pow);
        }  else if (str[j] == 'm') {
            create_and_add_list(list, "0", 2, s21_mod);
            j += 2;
        }  else if (str[j] == 'c') {
            create_and_add_list(list, "0", 4, s21_cos);
            j += 2;
        }   else if (str[j] == 's' && str[j + 1] == 'i') {
            create_and_add_list(list, "0", 4, s21_sin);
            j += 2;
        }   else if (str[j] == 't') {
            create_and_add_list(list, "0", 4, s21_tan);
            j += 2;
        }   else if (str[j] == 'a' && str[j + 1] == 'c') {
            create_and_add_list(list, "0", 4, s21_acos);
            j += 3;
        }    else if (str[j] == 'a' && str[j + 1] == 's') {
            create_and_add_list(list, "0", 4, s21_asin);
            j += 3;
        }    else if (str[j] == 'a' && str[j + 1] == 't') {
            create_and_add_list(list, "0", 4, s21_atan);
            j += 3;
        }    else if (str[j] == 's' && str[j + 1] == 'q') {
            create_and_add_list(list, "0", 4, s21_sqrt);
            j += 3;
        }     else if (str[j] == 'l' && str[j + 1] == 'n') {
            create_and_add_list(list, "0", 4, s21_ln);
            j += 1;
        }     else if (str[j] == 'l' && str[j + 1] == 'o') {
            create_and_add_list(list, "0", 4, s21_log);
            j += 2;
        }
    }
}

int check_un_bi(const char *str, int j) {
    int yes_no = NO;
    if (j == 0)
        yes_no = YES;
    if (str[j - 1] == '(')
        yes_no = YES;
    return yes_no;
}

void create_and_add_list(list_t **list, char *str_value, int v_priority, type_t v_type) {
    if (*list == NULL) {
        *list = create_list(str_value, v_priority, v_type);
    } else {
        add_elem_list(*list, str_value, v_priority, v_type);
    }
}

list_t *create_list(char *str_value, int v_priority, type_t v_type) {
    list_t *lst = (struct list*)malloc(sizeof(struct list));
    sscanf(str_value, "%lf", &lst->value);
    lst->priority = v_priority;
    lst->type = v_type;
    lst->next = NULL;
    return lst;
}

void add_elem_list(list_t *head, char *str_value, int v_priority, type_t v_type) {
    struct list *tmp = head;
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = create_list(str_value, v_priority, v_type);
}

void delete_list(list_t *head) {
    while (head != NULL) {
        list_t *p = head;
        head = head->next;
        free(p);
    }
}

// void output_list(list_t *head) {
//     while (head != NULL) {
//         printf("VALUE %lf\n", head->value);
//         printf("PRIORITY %d\n", head->priority);
//         printf("TYPE %d\n", head->type);
//         head = head->next;
//     }
// }

void polish_notation(list_t *list, list_t **stack_res) {
    list_t *stack_tmp = NULL;
    while (list) {
        if (list->type != 4) {
            if (list->type == 1 || list->type == 2) {
                create_and_push_stack(stack_res, list->value, list->priority, list->type);
            } else {
                while (1) {
                    if (check_priotity(stack_tmp, list->priority) || list->type == 3) {
                        create_and_push_stack(&stack_tmp, list->value, list->priority, list->type);
                        break;
                    } else {
                        create_and_push_stack(stack_res, stack_tmp->value,
                        stack_tmp->priority, stack_tmp->type);
                        pop_stack(&stack_tmp);
                    }
                }
            }
        } else {
            while (stack_tmp->type != 3) {
                create_and_push_stack(stack_res, stack_tmp->value, stack_tmp->priority, stack_tmp->type);
                pop_stack(&stack_tmp);
            }
            pop_stack(&stack_tmp);
        }
        list = list->next;
    }
    while (stack_tmp) {
        create_and_push_stack(stack_res, stack_tmp->value, stack_tmp->priority, stack_tmp->type);
        pop_stack(&stack_tmp);
    }
}

int check_priotity(list_t *stack, int priority) {
    int result = 0;
    if (stack != NULL) {
        if (priority > stack->priority) {
            result = 1;
        }
    } else {
        result = 1;
    }
    return result;
}

void create_stack(list_t **top, double v_value, int v_priority, type_t v_type) {
    list_t *tmp = (struct list*)malloc(sizeof(struct list));
    tmp->value = v_value;
    tmp->priority = v_priority;
    tmp->type = v_type;
    tmp->next = NULL;
    *top = tmp;
}

void push_stack(list_t **top, double v_value, int v_priority, type_t v_type) {
    list_t *tmp = (struct list*)malloc(sizeof(struct list));
    tmp->value = v_value;
    tmp->priority = v_priority;
    tmp->type = v_type;
    tmp->next = *top;
    *top = tmp;
}

void pop_stack(list_t **stack) {
    if (*stack != NULL) {
        list_t *tmp = (*stack)->next;
        free(*stack);
        *stack = tmp;
    }
}

void create_and_push_stack(list_t **stack, double v_value, int v_priority, type_t v_type) {
    if (*stack == NULL) {
        create_stack(stack, v_value, v_priority, v_type);
    } else {
        push_stack(stack, v_value, v_priority, v_type);
    }
}

void reverse_stack(list_t **stack, double x) {
    list_t *stack_rev = NULL;
    while (*stack) {
        if ((*stack)->type == s21_x) {
            (*stack)->type = number;
            (*stack)->value = x;
        }
        create_and_push_stack(&stack_rev, (*stack)->value, (*stack)->priority, (*stack)->type);
        pop_stack(stack);
    }
    *stack = stack_rev;
}

void calculate(list_t **stack) {
    while ((*stack)->next != NULL) {
        list_t *tmp1, *tmp2, *tmp3;
        tmp1 = *stack;
        tmp2 = tmp1->next;
        if (tmp2->next != NULL)
            tmp3 = tmp2->next;
        if (tmp2->type == number) {
            while (1) {
                if (tmp3->priority) {
                    break;
                }
                tmp1 = tmp2;
                tmp2 = tmp1->next;
                tmp3 = tmp2->next;
            }
            if (tmp3->type >= 5 && tmp3->type <= 10) {
                count_bi_fun(stack, tmp1, tmp2, tmp3);
            } else {
                count_un_fun(stack, tmp2, tmp3);
            }
        } else {
            count_un_fun(stack, tmp1, tmp2);
        }
    }
}
 1 2 3 - * -

void count_un_fun(list_t **stack, list_t *tmp1, list_t *tmp2) {
    double a = 0, result = 0;
    a = tmp1->value;
    if (tmp2->type == s21_plus_un) {
        result = +a;
    } else if (tmp2->type == s21_minus_un) {
        result = -a;
    } else if (tmp2->type == s21_sin) {
        result = sin(a);
    } else if (tmp2->type == s21_cos) {
        result = cos(a);
    } else if (tmp2->type == s21_tan) {
        result = tan(a);
    } else if (tmp2->type == s21_asin) {
        result = asin(a);
    } else if (tmp2->type == s21_acos) {
        result = acos(a);
    } else if (tmp2->type == s21_atan) {
        result = atan(a);
    } else if (tmp2->type == s21_sqrt) {
        result = sqrt(a);
    } else if (tmp2->type == s21_log) {
        result = log10(a);
    } else if (tmp2->type == s21_ln) {
        result = log(a);
    }
        tmp1->priority = 0;
        tmp1->type = number;
        tmp1->value = result;
        delete_elem(stack, tmp2);
}

void count_bi_fun(list_t **stack, list_t *tmp1, list_t *tmp2, list_t *tmp3) {
    double a = 0, b = 0, result = 0;
    a = tmp1->value;
    b = tmp2->value;
    if (tmp3->type == s21_plus) {
        result = a + b;
    } else if (tmp3->type == s21_minus) {
        result = a - b;
    } else if (tmp3->type == s21_mult) {
        result = a * b;
    } else if (tmp3->type == s21_div) {
        result = a / b;
    } else if (tmp3->type == s21_pow) {
        result = pow(a, b);
    } else if (tmp3->type == s21_mod) {
        result = fmod(a, b);
    }
    tmp1->priority = 0;
    tmp1->type = number;
    tmp1->value = result;
    delete_elem(stack, tmp3);
    delete_elem(stack, tmp2);
}

void delete_elem(list_t **root, list_t *lst) {
    struct list *temp;
    temp = *root;
    if (*root == lst) {
        temp = (*root)->next;
        free(*root);
        *root = temp;
    } else {
        while (temp->next != lst) {
            temp = temp->next;
        }
        temp->next = lst->next;
        free(lst);
    }
}

int check_input_value(char *str_x) {
    int res_code = 1;
    int i = 0, flag_point = 0;
    while (str_x[i]) {
        if ((str_x[i] == '+' || str_x[i] == '-') && i != 0) {
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
            if (str_x[i - 1] == '+' || str_x[i - 1] == '-') {
                res_code = 0;
            }
            flag_point = 1;
        }
        i++;
    }
    return res_code;
}

int check_input_value_positiv_number(char *str_x) {
    int res_code = 1;
    int i = 0, flag_point = 0;
    while (str_x[i]) {
        if (str_x[i] < '0' && str_x[i] != '.') {
            res_code = 0;
        } else if (str_x[i] > '9') {
            res_code = 0;
        }
        if (str_x[i] == '.') {
            if (flag_point) {
                res_code = 0;
            }
            if (i == 0) {
                res_code = 0;
            }
            flag_point = 1;
        }
        i++;
    }
    return res_code;
}

int check_input_value_integer_number(char *str_x) {
    int res_code = 1;
    int i = 0;
    while (str_x[i]) {
        if (str_x[i] < '0' || str_x[i] > '9') {
            res_code = 0;
        }
        i++;
    }
    return res_code;
}

void credit_ann(double sum_credit, int time , double rate,
double *month_payment, double *overpayment, double *total_payment) {
    double stavka_monht = rate / 100 / 12;
    double coefficient = stavka_monht * pow((1 + stavka_monht), time) / (pow((1 + stavka_monht), time) - 1);
    *month_payment = coefficient * sum_credit;
    *total_payment = (*month_payment) * time;
    *overpayment = *total_payment - sum_credit;
}

void credit_diff(double sum_credit, int time , int monht, double rate,
double *month_payment, double *overpayment, double *total_payment) {
    double b = sum_credit / time;
    int days;
    count_days(monht, &days);
    *month_payment = b + sum_credit * rate / 100 * days/365;
    for (int i = 0; i < time; i++) {
        double p;
        count_days(monht, &days);
        p = sum_credit * rate / 100 * days/365;
        sum_credit -= (b);
        *overpayment += p;
        if (monht == 12) {
            monht = 0;
        }
        monht++;
    }
    *total_payment = (*overpayment + b * time);
}

void count_days(int month, int *days) {
    if (month == 2) {
        *days = 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        *days = 30;
    } else {
        *days = 31;
    }
}

void deposit(double sum, int time, double procent_rate, double nalog_rate, int choise_plus,
                        double plus, int choise_minus, double minus, int choise_payments,
                        int perio_payments, int choise_kap,
                        double *sumnalend,  double *procentEnd, double *depositEnd, int month) {
    double sumnalog = 0;
    *sumnalend = 0;
    *procentEnd = 0;
    *depositEnd = 0;
    int i = 0, flag = 1;
    int count = 0;
    double sum_kap = sum;
    double obprocent = 0;
    while (i < time) {
        int time_new, div;
        double doxod;
        if (month == 2) {
            div = 28;
        } else if (month == 4 || month == 6 || month == 9 || month == 11) {
            div = 30;
        } else {
            div = 31;
        }
        time_new = time - i;
        if (time_new < div) {
            div = time_new;
        }
        doxod = (((sum  * procent_rate * div)/ 365) / 100);
        if (choise_payments == 1) {
            double payments = doxod / perio_payments;
            sumnalog = payments * perio_payments * nalog_rate / 100;
        }
        int time_kap = 0;
        double eyear_pro = procent_rate / 100;
        double procent, nal;
        if (choise_kap == 1 && flag == 1) {
            double tmp = 1 + (eyear_pro / 365);
            time_kap = time - i;
            double kapday = sum_kap * pow(tmp, time_kap);
            procent = kapday - sum_kap;
            nal = procent * nalog_rate / 100;
            *sumnalend += nal;
            obprocent += procent;
            *procentEnd = obprocent - *sumnalend;
            *depositEnd = *procentEnd + sum;
            flag = 0;
        } else if (choise_kap == 2 && flag == 1) {
            double tmp1 = 1 + (eyear_pro / 12);
            time_kap = time - i;
            double time_monht = time_kap / 30.41;
            double kapmonth = sum_kap * pow(tmp1, time_monht);
            procent = kapmonth - sum_kap;
            nal = procent * nalog_rate / 100;
            *sumnalend += nal;
            obprocent += procent;
            *procentEnd = obprocent - *sumnalend;
            *depositEnd = *procentEnd + sum;
            flag = 0;
        } else if (choise_kap == 3 && flag == 1) {
            double tmp2 = 1 + (eyear_pro / 4);
            time_kap = time - i;
            double time_kvartal = time_kap/ 91.;
            double kapkvart = sum_kap * pow(tmp2, time_kvartal);
            procent = kapkvart - sum_kap;
            nal = procent * nalog_rate / 100;
            *sumnalend += nal;
            obprocent += procent;
            *procentEnd = obprocent - *sumnalend;
            *depositEnd = *procentEnd + sum;
            flag = 0;
        }
        if (choise_payments == 0)
            sumnalog = doxod * nalog_rate / 100;
        doxod -= sumnalog;
        if (choise_kap == 0) {
        *sumnalend += sumnalog;
        *procentEnd += doxod;
        if (choise_payments == 0)
            *depositEnd = sum + *procentEnd;
        else
            *depositEnd = sum;
        }
        if (month == 12) {
            month = 0;
        }
        month++;
        count++;
        if (choise_plus) {
            if (fmod(count, choise_plus) ==  0) {
                sum += plus;
                flag = 1;
                sum_kap = plus;
            }
        }
        if (choise_minus) {
            if (fmod(count, choise_minus) == 0) {
                sum -= minus;
                flag = 1;
                sum_kap = -minus;
            }
        }
        if (choise_plus && choise_minus) {
            if (fmod(count, choise_plus) ==  0 && fmod(count, choise_minus) == 0) {
                flag = 1;
                sum_kap = plus - minus;
            }
        }
        i += div;
    }
}


