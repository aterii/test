#include <iostream>
#include <conio.h>
#include <stdio.h>

int num1 = 0;
int num2 = 0;
int proizv = 0;
int summa = 0;

int vvod()
{
    int res, a;
    char knopka;
    bool flag;
    res = 0;
    flag = true;

    while (true) {
        knopka = getchar();
        a = (int)(knopka);

        if (res > 10000) {
            flag = false;
        }

        if (a == 10) {
            break;
        }

        if ((a < 48) or (a > 57)) {
            flag = false;
        }

        else {
            res = res * 10 + (a - 48);
        }
    }

    if (flag == false) {
        res = -1;
    }
    return res;
}

char vvodsymvola() {
    int a;
    int i = 0;
    while (i == 0) {
        if (_kbhit()) {
            a = _getch();
            i++;
        }
    }
    return char(a);
}

int menu() {

    setlocale(LC_ALL, "rus");

    printf("Калькулятор\n");
    printf("1. Первое число: %d\n", num1);
    printf("2. Второе число: %d\n", num2);
    printf("3. Сумма чисел: %d\n", summa);
    printf("4. Произведение чисел: %d\n\n", proizv);
    printf("Нажмите 'ESC' для выхода из программы\n");
    return 0;
}

int main() {

    while (true) {

        char a;
        int command;
        menu();
        printf("\nВыберите пункт меню:\n");
        a = vvodsymvola();
        command = (int)(a)-48;
        system("cls");


        if (command == 1) {

            menu();
            printf("\nВведите первое число\n");
            num1 = 0;


            while (num1 == 0) {

                num1 = vvod();
                if (num1 != -1) {
                    system("cls");
                    menu();
                    break;
                }


                if (num1 == -1) {
                    num1 = 0;
                    printf("\nВведите целое число от 1 до 10000\n");
                }

            }
        }

        if (command == 2) {
            menu();
            printf("\nВведите второе число\n");
            num2 = 0;


            while (num2 == 0) {
                num2 = vvod();

                if (num2 != -1) {
                    system("cls");
                    menu();
                    break;
                }

                if (num2 == -1) {
                    num2 = 0;
                    printf("\nВведите целое число от 1 до 10000\n");
                }
            }
        }

        if (command == 3) {
            system("cls");
            summa = num1 + num2;
            menu();
        }

        if (command == 4) {
            system("cls");
            proizv = num1 * num2;
            menu();
        }

        if (command == -21) {
            break;
        }

        else {
            system("cls");
        }

    }
}
