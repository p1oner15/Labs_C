#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int task() {
    char *s1 = (char *) malloc(10),
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

    char *s = (char *) malloc(strlen(s1) + strlen(s2) + strlen(s3) + strlen(s4));
    s = strcpy(s, s1);
    s += strlen(s1);

    s = strcpy(s, s2);
    s += strlen(s2);

    s = strcpy(s, s3);
    s += strlen(s3);

    s = strcpy(s, s4);
    s -= strlen(s1) + strlen(s2) + strlen(s3);

    printf("%s\n", s);
    free(s);
    free(s4);
    free(s3);
    free(s2);
    free(s1);
}

