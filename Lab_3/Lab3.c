
#include "../../function/Tool_for_Lab3.h"

#define True 1
#define False 0

void Task_1(int variant) {
    int n = 0, a, b, c;
    for (int i = 111; i <= 999; i++) {
        a = i / 100;
        b = i % 100 / 10;
        c = i % 10;
        if ((a == b | a == c | b == c) && variant == 1)
            n++;
        if (((a == b && c != b) | (b == c && a != b) | (a == c && a != b)) && variant == 2)
            n++;
    }
    printf("%d", n);
}

void Task_2() {
    int n = 0, a, b, c;
    for (int i = 102; i <= 987; i++) {
        a = i / 100;
        b = i % 100 / 10;
        c = i % 10;
        if (a != b && a != c && b != c)
            n++;
    }
    printf("%d", n);
}

void Task_3() {
    printf("11\n");
    for (int i = 101; i <= 999; i++) {
        if (i / 100 == i % 10)
            printf("%d\n", i);
    }
}

void Task_4() {
    printf("11\n");
    for (int i = 101; i <= 999; i++) {
        if (i / 100 == i % 10)
            printf("%d\n", i);
    }
}

void Task_5() {
    int n, copy_n, s = 0;
    scanf("%d", &n);
    copy_n = n;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    if (power(s, 3) == power(copy_n, 2))
        printf("True");
    else
        printf("False");
}

int Task_6() {
    int n, c = 1;
    scanf("%d", &n);
    while (c < n) {
        c *= 3;
    }
    if (c == n | n == 1)
        return True;
    else
        return False;
}

void Task_7() {
    int s = 1, n = 1;
    float a;
    scanf("%f", &a);
    while (s <= a) {
        n += 1;
        s += 1 / n;
    }
    printf("%d", n);
}

void Task_9() {
    int n, a[15], i, k;
    scanf("%d", &n);
    k = 0;
    while (n) {
        a[k] = n % 10;
        n /= 10;
        k++;
    }
    n = 0;
    for (i = k - 1; i > -1; --i)
        if (a[i] != 0 && a[i] != 5)
            n = n * 10 + a[i];
    printf("%d", n);
}

void Task_10() {
    int n, del = 1;
    scanf("%d", &n);
    while (del <= n) {
        if (n % del == 0)
            printf("%d ", del);
        del += 1;
    }
}

void task_11() {
    int n;
    scanf("%d", &n);
    for (int q = 2; power(q, 3) <= n; q++) {
        if (n % power(q, 2) == 0 && n % power(q, 3) != 0) {
            printf("%d ", q);
        }
    }
}

void Task_12() {
    int m, k = 1;
    scanf("%d", &m);
    while (power(4, k + 1) < m) {
        k += 1;
    }
    printf("%d", k);
}

void Task_13() {
    int p = 2, n, k, m;
    scanf("%d", &n);
    while (n > 0) {
        k = 0;
        m = p;
        while (m > 1) {
            if (p % m == 0)
                k++;
            if (k > 1)
                break;
            m--;
        }
        if (k == 1) {
            printf("%d ", p);
            n--;
        }
        p++;
    }
}

void Task_14() {
    int n, k, f1 = 1, f2 = 1, m;
    scanf("%d", &n);
    printf("1 1 ");
    for (k = 2; k < n; ++k) {
        m = f1 + f2;
        f1 = f2;
        f2 = m;
        printf("%d ", f2);
    }
}

void task15()
{
    float eps = 0.001;
    for (float i = 2.0; i <= 100.0; i++)
    printf("sqrt(x): %f;\n", sqrt(i));
}


void Task_16() {
    float num, eps = 0.01;
    scanf("%f", &num);
    float root = num / 2;
    int i = 0;
    while (root - num / root > eps) {
        i++;
        root = 0.5 * (root + num / root);
    }
    printf("%f %f", num, root);
}

void Task_19() {
    int n, j, i;
    scanf("%d", &n);
    for (i = 6; i < n; i++) {
        int sum = 1;
        for (j = 2; j <= i / 2; j++)
            if (i % j == 0)
                sum += j;
        if (sum == i)
            printf("%d ", i);
    }
}

void Task_20() {
    int p = 3, n;
    scanf("%d", &n);
    while (p + 2 < n){
        if (is_prime(p) && is_prime(p + 2))
            printf("(%d %d) ", p, p + 2);
        p += 1;
    }
}
