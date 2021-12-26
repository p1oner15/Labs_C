#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "rus");
    //task16();
    return 0;
}

void Task7() {
    int a, b, c;
    printf("Введите a: ");
    scanf("%d", &a);
    printf("Введите b: ");
    scanf("%d", &b);
    printf("Введите c: ");
    scanf("%d", &c);
    if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0)
        printf("Одно из чисел чётное.");
}

void Task8() {
    int a, b, c, e, f;
    printf("Введите a: ");
    scanf("%d", &a);
    printf("Введите b: ");
    scanf("%d", &b);
    printf("Введите c: ");
    scanf("%d", &c);
    printf("Введите границу e отрезка [e,f]: ");
    scanf("%d", &e);
    printf("ВВведите границу f отрезка [e,f]: ");
    scanf("%d", &f);
    if (e <= a && a <= f)
        printf("%d\n", a);
    if (e <= b && b <= f)
        printf("%d\n", b);
    if (e <= c && c <= f)
        printf("%d\n", c);
}

void Task9() {
    int number, i1, i2, i3;
    printf("Введите трёхзначное число: ");
    scanf("%d", &number);
    if (number / 100 == 0)
        printf("Ошибка, введено нетрёхзачное число!");
    else
    {
        i1 = number;
        i3 = i1 % 10;
        i1 /= 10;
        i2 = i1 % 10;
        i1 /= 10;
        if (i1 == i2 || i1 == i3 || i2 == i3)
            printf("Среди цифр числа есть одинаковые.");
        else
            printf("Среди цифр числа нет одинаковых.");
    }

}

void Task10() {
    int a, b, c;
    printf("Введите a: ");
    scanf("%d", &a);
    printf("Введите b: ");
    scanf("%d", &b);
    printf("Введите c: ");
    scanf("%d", &c);
    if (a > b && a > c) printf("a = %d", a);
    if (b > c && b > a) printf("b = %d", b);
    if (c > b && c > a) printf("c = %d", c);
    if (a == b && a > c) printf("a = %d b = %d", a, b);
    if (a == c && a > b) printf("a = %d c = %d", a, c);
    if (b == c && b > a) printf("b = %d c = %d", b, c);
    if (a == b && a == c) printf("a = %d b = %d c = %d", a, b, c);
}

void Task11() {
    int x, y;
    printf("Введите x: ");
    scanf("%d", &x);
    printf("Введите y: ");
    scanf("%d", &y);
    if (x > 0 && y > 0)
        printf("Первая четверть");
    if (x < 0 && y>0)
        printf("Вторая четверть");
    if (x < 0 && y < 0)
        printf("Третья четверть");
    if (x > 0 && y < 0)
        printf("Четвёртая четверть");
}

void Task12() {
    int n;
    printf("Введите номер дня недели: ");
    scanf("%d", &n);
    if (n < 8 && n>0)
    {
        switch (n)
        {
        case 6:
            printf("Ура! Суббота!"); break;
        case 7:
            printf("Ура! Воскресенье!"); break;
        default:
            printf("Увы - рабочий день!"); break;
        }
    }
    else
        printf("Введен неверный номер недели!");

}

void Task13() {
    int x;
    printf("Введите кол-во рублей от 1 до 999: ");
    scanf("%d", &x);
    if (x > 0 && x < 1000)
    {
        if (x >= 5 && x <= 20)
            printf("%d рублей.", x);
        else
            switch (x % 10)
            {
            case 1: printf("%d рубль.", x); break;
            case 2: case 3: case 4: printf("%d рубля.", x); break;
            default: printf("%d рублей", x); break;
            }
    }
    else
        printf("Введено неверное кол-во!");
}

void Task14() {
    int x, y;
    printf("Код города(432, 95, 861,  844): ");
    scanf("%d", &x);
    printf("Число минут: ");
    scanf("%d", &y);

    switch (x) {
    case 432: printf("Стоимость минуты 9,20 руб. Сумма за разговор - %.2f", y * 9.2); break;
    case 95: printf("Стоимость минуты 4,10 руб. Сумма за разговор - %.2f", 4.1 * y); break;
    case 861: printf("Стоимость минуты 2,05 руб. Сумма за разговор - %.2f", 2.05 * y); break;
    case 844: printf("Стоимость минуты 2,50 руб. Сумма за разговор - %.2f", 2.5 * y); break;
    default: printf("Введен неверный код города!"); break;
    }
    return 0;
}

void Task15() {
    int x, y, z;
    printf("Минут: ");
    scanf("%d", &x);
    printf("Число секунд: ");
    scanf("%d", &y);
    z = (x * 60) * 16 + y * 16;
    printf("Размер в Кб: %d/6144\n", z);
    if (z > 6144)
        printf("Недостаточно памяти для сохранения композиции!");
    else
        printf("Памяти достаточно для сохранения композиции.");
}

void Task16() {
    int x, y;
    printf("Обьем аквариума: ");
    scanf("%d", &x);
    printf("Количество рыбок: ");
    scanf("%d", &y);
    if (y * 3 <= x)
        printf("Аквариум не является перенаселённым.");
    else {
        printf("Аквариум является перенаселённым!\n");
        printf("Количество рыбок, которое необходимо переместить в другой аквариум: %d", y - (x / 3));
    }
}
