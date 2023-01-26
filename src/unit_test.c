#include <check.h>

#include "s21_SmartCalc.h"

START_TEST(calc_test) {
    {
    char arr[100] = "4^acos(x/4)/tan(2*x)";
    double result = 0;
    start(arr, 2, &result);
    double real_result = 3.6883677;
    ck_assert_msg(fabs(result) - fabs(real_result) <= 0.00001, "test-1 failed");
    }
    {
    char arr[100] = "tan(2)";
    double result = 0;
    start(arr, 0, &result);
    double real_result = -2.18503986326152;
    ck_assert_msg(fabs(result) - fabs(real_result) <= 0.00001, "test-tan(2)");
    }
    {
    char arr[100] = "acos(3)";
    double result = 0;
    start(arr, 0, &result);
    double real_result = NAN;
    ck_assert_msg(result != real_result, "new-test failed");
    }
    {
    char arr[100] = "ln(10) + log(2) * sqrt(4)";
    double result = 0;
    start(arr, 0, &result);
    double real_result = 2.90464508432201;
    ck_assert_msg(fabs(result) - fabs(real_result) <= 0.00001, "test-sqrt");
    }
    {
    char arr[100] = "+1 / 2 ^ 3";
    double result = 0;
    start(arr, 0, &result);
    double real_result = 0.125;
    ck_assert_msg(result == real_result, "test-unplus");
    }
    {
    char src[100] = "(2+2)mod(3+3)";
    double result = 0;
    start(src, 0, &result);
    double real_result = 4;
    ck_assert_msg(result == real_result, "test-mod");
    }
    {
    char arr[100] =
    "sin(2+2) + cos(2+2) + tan(2+2) + asin(2+2) + acos(2+2) + atan(2+2)";
    double result = 0;
    start(arr, 0, &result);
    double real_result = NAN;
    ck_assert_msg(result != real_result, "test-crazy");
    }
    {
    char arr[100] = "x+x";
    double result = 0;
    start(arr, 0, &result);
    double real_result = 4;
    ck_assert_msg(fabs(result) - fabs(real_result) <= 0.00001, "test-2 failed");
    }
    {
    char arr[100] = "123+0.456";
    double result = 0;
    start(arr, 0, &result);
    double real_result = 123.456;
    ck_assert_msg(fabs(result) - fabs(real_result) <= 0.00001, "test-3 failed");
    }
    {
    char arr[100] = "log(x)";
    double x_text = -2;
    double result = 0;
    start(arr, x_text, &result);
    double real_result = NAN;
    ck_assert_msg(result != result && real_result != real_result,
                    "test-4 failed");
    }
    {
    char arr[100] = "-()";
    int check = check_before_start(arr);
    double real_result = 1;
    ck_assert_msg(check == real_result, "test-6 failed");
    }
    {
    char arr[100] = "1x";
    int check = check_before_start(arr);
    double real_result = 1;
    ck_assert_msg(check == real_result, "test-7 failed");
    }
    {
    char arr[100] = "1mod";
    int check = check_before_start(arr);
    double real_result = 1;
    ck_assert_msg(check == real_result, "test-8 failed");
    }  {
    char arr[100] = "1mod*5";
    int check = check_before_start(arr);
    double real_result = 1;
    ck_assert_msg(check == real_result, "test-9 failed");
    }
    {
    char arr[100] = "1sin";
    int check = check_before_start(arr);
    double real_result = 1;
    ck_assert_msg(check == real_result, "test-10 failed");
    }
    {
    char arr[100] = "cos";
    int check = check_before_start(arr);
    double real_result = 1;
    ck_assert_msg(check == real_result, "test-11 failed");
    }
    {
    char arr[100] = "1-495+5ln(59)";
    int check = check_before_start(arr);
    double real_result = 1;
    ck_assert_msg(check == real_result, "test-12 failed");
    }
    {
    char arr[100] = "1-495+5++(59)";
    int check = check_before_start(arr);
    double real_result = 1;
    ck_assert_msg(check == real_result, "test-13 failed");
    }
    {
    char arr[100] = "1-495+5log(59)-89";
    int check = check_before_start(arr);
    double real_result = 1;
    ck_assert_msg(check == real_result, "test-14 failed");
    }
    {
    char arr[100] = "2-tan(";
    int check = check_before_start(arr);
    double real_result = 1;
    ck_assert_msg(check == real_result, "test-15 failed");
    }
    {
    char arr[100] = "acos5";
    int check = check_before_start(arr);
    double real_result = 1;
    ck_assert_msg(check == real_result, "test-16 failed");
    }
    {
    char arr[100] = "4+8.3asin(4)";
    int check = check_before_start(arr);
    double real_result = 1;
    ck_assert_msg(check == real_result, "test-17 failed");
    }

    {
    char arr[100] = "1..4";
    int check = check_before_start(arr);
    double real_result = 1;
    ck_assert_msg(check == real_result, "test-18 failed");
    }
    {
    char arr[100] = "-(-1)";
    int check = check_before_start(arr);
    double real_result = 0;
    ck_assert_msg(check == real_result, "test-19 failed");
    }
    {
    char arr[100] = "cos(10mod2.2)";
    double result = 0;
    start(arr, 0, &result);
    double real_result = 0.362358;
    ck_assert_msg(fabs(result) - fabs(real_result) <= 0.00001, "test-20 failed");
    }
    {
    char arr[100] = "sqrt(ln(10))";
    double result = 0;
    start(arr, 0, &result);
    double real_result = 1.517427;
    ck_assert_msg(fabs(result) - fabs(real_result) <= 0.00001, "test-21 failed");
    }
    {
    char arr[100] = "atan(10)+sin(10)";
    double result = 0;
    start(arr, 0, &result);
    double real_result = 1.644775;
    ck_assert_msg(fabs(result) - fabs(real_result) <= 0.00001, "test-22 failed");
    }
    {
    char arr[100] = "asin(1)";
    double result = 0;
    start(arr, 0, &result);
    double real_result = 1.570796;
    ck_assert_msg(fabs(result) - fabs(real_result) <= 0.00001, "test-23 failed");
    }
    {
    char arr[100] = "10-20*(-10)";
    double result = 0;
    start(arr, 0, &result);
    double real_result = -210;
    ck_assert_msg(fabs(result) - fabs(real_result) <= 0.00001,
                    "test-24 failed");
    }
    {
    char arr[100] = "-(o(i(a(10.01)*n(2))/10m2))^q(5)";
    int check = check_before_start(arr);
    ck_assert_msg(check, "test-25 failed");
    }
    {
    char arr[100] = ")(s(x)";
    int result = check_before_start(arr);
    ck_assert_msg(result, "test-26 failed");
    }
    {
    char arr[100] = ".+m)";
    int result = check_before_start(arr);
    ck_assert_msg(result, "test-27 failed");
    }
    {
    char arr[100] = "sin(6)atan(10)+sin(10)";
    int check = check_before_start(arr);
    double real_result = 1;
    ck_assert_msg(check == real_result, "test-28 failed");
    }
    {
    char arr[100] = "sin(6)atan(10)+sin(10)";
    int check = check_input_value(arr);
    double real_result = 0;
    ck_assert_msg(check == real_result, "test-29 failed");
    }
    {
    char arr[100] = "0.1";
    int check = check_input_value(arr);
    double real_result = 1;
    ck_assert_msg(check == real_result, "test-30 failed");
    }
    {
    char arr[100] = "0..1";
    int check = check_input_value(arr);
    double real_result = 0;
    ck_assert_msg(check == real_result, "test-31 failed");
    }
    {
    char arr[100] = "1+8";
    int check = check_input_value(arr);
    double real_result = 0;
    ck_assert_msg(check == real_result, "test-32 failed");
    }
    {
    char arr[100] = "-8878.5";
    int check = check_input_value(arr);
    double real_result = 1;
    ck_assert_msg(check == real_result, "test-33 failed");
    }
    {
    char arr[100] = "ln)";
    int check = check_before_start(arr);
    double real_result = 1;
    ck_assert_msg(check == real_result, "test-34 failed");
    }
    {
    char arr[100] = "log)";
    int check = check_before_start(arr);
    double real_result = 1;
    ck_assert_msg(check == real_result, "test-35 failed");
    }
    {
    char arr[100] = "ln(9)";
    int check = check_before_start(arr);
    double real_result = 0;
    ck_assert_msg(check == real_result, "test-36 failed");
    }
    {
    char arr[100] = "log(6+2)";
    int check = check_before_start(arr);
    double real_result = 0;
    ck_assert_msg(check == real_result, "test-37 failed");
    }
    {
    char arr[100] = "sqrt(6+2)";
    int check = check_before_start(arr);
    double real_result = 0;
    ck_assert_msg(check == real_result, "test-38 failed");
    }
    {
    char arr[100] = "sqrt(6+2)";
    int check = check_input_value_positiv_number(arr);
    double real_result = 0;
    ck_assert_msg(check == real_result, "test-39 failed");
    }
    {
    char arr[100] = "2.2";
    int check = check_input_value_positiv_number(arr);
    double real_result = 1;
    ck_assert_msg(check == real_result, "test-40 failed");
    }
    {
    char arr[100] = "sqrt(6+2)";
    int check = check_input_value_integer_number(arr);
    double real_result = 0;
    ck_assert_msg(check == real_result, "test-41 failed");
    }
    {
    double sum_credit = 1000;
    int time = 365;
    double rate = 10;
    double month_payment;
    double overpayment;
    double total_payment;
    credit_ann(sum_credit, time, rate, &month_payment, &overpayment, &total_payment);
    double real_month_payment = 8.75;
    double real_overpayment = 2196.23;
    double real_total_payment = 3196.23;
    ck_assert_msg(fabs(month_payment) - fabs(real_month_payment) <= 0.01, "test-42 failed");
    ck_assert_msg(fabs(overpayment) - fabs(real_overpayment) <= 0.01, "test-42 failed");
    ck_assert_msg(fabs(total_payment) - fabs(real_total_payment) <= 0.01, "test-42 failed");
    }
    {
    double sum_credit = 1000;
    int time = 365;
    double rate = 10;
    double month_payment;
    double overpayment;
    double total_payment;
    int month = 7;
    credit_diff(sum_credit, time, month, rate, &month_payment, &overpayment, &total_payment);
    double real_month_payment = 102.73;
    ck_assert_msg(fabs(month_payment) - fabs(real_month_payment) <= 0.1, "test-43 failed");
    }
    {
    double sum = 1000;
    int time = 120;
    double procent_rate = 10;
    double nalog_rate = 0;
    int choise_plus = 1;
    double plus = 1000;
    int choise_minus = 0;
    double minus = 0;
    int choise_payments = 1;
    int perio_payments = 120;
    int choise_kap = 1;
    double sumnalend;
    double procentEnd;
    double depositEnd;
    int month = 7;
    deposit(sum, time, procent_rate, nalog_rate, choise_plus,
    plus, choise_minus, minus, choise_payments, perio_payments,
    choise_kap, &sumnalend, &procentEnd, &depositEnd, month);
    double real_sumnalend = 0;
    double real_procentEnd = 81.81;
    double real_depositEnd = 4081.81;
    ck_assert_msg(fabs(sumnalend) - fabs(real_sumnalend) <= 0.01, "test-44 failed");
    ck_assert_msg(fabs(procentEnd) - fabs(real_procentEnd) <= 0.01, "test-44 failed");
    ck_assert_msg(fabs(depositEnd) - fabs(real_depositEnd) <= 0.01, "test-44 failed");
    }
    {
    double sum = 10000;
    int time = 365;
    double procent_rate = 5;
    double nalog_rate = 0;
    int choise_plus = 0;
    double plus = 0;
    int choise_minus = 6;
    double minus = 1000;
    int choise_payments = 2;
    int perio_payments = 365/30;
    int choise_kap = 2;
    double sumnalend;
    double procentEnd;
    double depositEnd;
    int month = 7;
    deposit(sum, time, procent_rate, nalog_rate, choise_plus,
    plus, choise_minus, minus, choise_payments, perio_payments,
    choise_kap, &sumnalend, &procentEnd, &depositEnd, month);
    double real_sumnalend = 0;
    double real_procentEnd = 486.67;
    double real_depositEnd = 9486.67;
    ck_assert_msg(fabs(sumnalend) - fabs(real_sumnalend) <= 0.01, "test-45 failed");
    ck_assert_msg(fabs(procentEnd) - fabs(real_procentEnd) <= 0.01, "test-45 failed");
    ck_assert_msg(fabs(depositEnd) - fabs(real_depositEnd) <= 0.01, "test-45 failed");
    }
    {
    double sum = 10500;
    int time = 200;
    double procent_rate = 0.5;
    double nalog_rate = 0;
    int choise_plus = 0;
    double plus = 0;
    int choise_minus = 0;
    double minus = 0;
    int choise_payments = 3;
    int perio_payments = 365/90;
    int choise_kap = 3;
    double sumnalend;
    double procentEnd;
    double depositEnd;
    int month = 7;
    deposit(sum, time, procent_rate, nalog_rate, choise_plus,
    plus, choise_minus, minus, choise_payments, perio_payments,
    choise_kap, &sumnalend, &procentEnd, &depositEnd, month);
    double real_sumnalend = 0;
    double real_procentEnd = 28.86;
    double real_depositEnd = 10528.86;
    ck_assert_msg(fabs(sumnalend) - fabs(real_sumnalend) <= 0.01, "test-46 failed");
    ck_assert_msg(fabs(procentEnd) - fabs(real_procentEnd) <= 0.01, "test-47 failed");
    ck_assert_msg(fabs(depositEnd) - fabs(real_depositEnd) <= 0.01, "test-48 failed");
    }
    {
    double sum = 10500;
    int time = 200;
    double procent_rate = 0.5;
    double nalog_rate = 0;
    int choise_plus = 0;
    double plus = 0;
    int choise_minus = 0;
    double minus = 0;
    int choise_payments = 3;
    int perio_payments = 365/90;
    int choise_kap = 0;
    double sumnalend;
    double procentEnd;
    double depositEnd;
    int month = 7;
    deposit(sum, time, procent_rate, nalog_rate, choise_plus,
    plus, choise_minus, minus, choise_payments, perio_payments,
    choise_kap, &sumnalend, &procentEnd, &depositEnd, month);
    double real_sumnalend = 0;
    double real_procentEnd = 28.76;
    ck_assert_msg(fabs(sumnalend) - fabs(real_sumnalend) <= 0.01, "test-49 failed");
    ck_assert_msg(fabs(procentEnd) - fabs(real_procentEnd) <= 0.01, "test-50 failed");
    }
}

END_TEST

int main(void) {
    Suite *s1 = suite_create("Core");
    TCase *tc1_1 = tcase_create("Core");
    SRunner *sr = srunner_create(s1);
    suite_add_tcase(s1, tc1_1);

    tcase_add_test(tc1_1, calc_test);

    srunner_run_all(sr, CK_ENV);
    int nf = srunner_ntests_failed(sr);
    srunner_free(sr);

    return nf == 0 ? 0 : 1;
}
