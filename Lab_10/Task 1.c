#include <stdio.h>
#include <string.h>
#include <malloc.h>

int task() {
    char s[] = "1234567890", mstr[5];
    char *str = (char *) malloc(strlen(s));
    str = strcpy(str, s);
    printf("Копия строки:\n%s\n", str);
    printf("Введите строку:\n");
    gets(mstr);
    str += 3;
    str = strncpy(str, mstr, strlen(mstr));
    str -= 3;
    printf("Полученная строка:\n%s\n", str);
    free(str);
}