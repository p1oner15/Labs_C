#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int task() {
    char str[] = "1234567890", *s;
    s = str;
    s += 3;
    strnset(s, '-', 3);
    s += 3;
    strnset(s, '+');
    s -= 6;
    printf("%s\n", s);
}