#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int task() {
    int a;
    char *s1 = (char *) malloc(10), *m, *m1, *m2,
            *s2 = (char *) malloc(10),
            *s3 = (char *) malloc(10),
            *s4 = (char *) malloc(10);
    printf("Введите строку 1:\n");
    gets(s1);
    printf("Введите строку 2:\n");
    gets(s2);
    printf("Введите строку 3:\n");
    gets(s3);
    printf("Введите строку 4:\n");
    gets(s4);

    if (strcmp(s1, s2) == 0) {
        printf("%s равна %s\n", s1, s2);
        m1 = s1;
    } else if (strcmp(s1, s2) > 0) {
        printf("%s больше %s\n", s1, s2);
        m1 = s1;
    } else {
        printf("%s меньше %s\n", s1, s2);
        m1 = s2;
    }
    if (strcmp(s3, s4) == 0) {
        printf("%s равна %s\n", s3, s4);
        m2 = s3;
    } else if (strcmp(s3, s4) > 0) {
        printf("%s больше %s\n", s3, s4);
        m2 = s3;
    } else {
        printf("%s меньше %s\n", s3, s4);
        m2 = s4;
    }

    if (strcmp(m1, m2) == 0) {
        printf("%s равна %s\n", m1, m2);
        m = m1;
    } else if (strcmp(m1, m2) > 0) {
        printf("%s больше %s\n", m1, m2);
        m = m1;
    } else {
        printf("%s меньше %s\n", m1, m2);
        m = m2;
    }
    printf("Наибольшая строка:\n%s\n", m);

    free(s4);
    free(s3);
    free(s2);
    free(s1);
}