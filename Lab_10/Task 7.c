#include <stdio.h>

char *strdup(const char *str) {
    size_t length = 0;
    char *ptr = NULL;

    if (str == NULL)
        return NULL;

    length = strlen(str);
    ptr = malloc(length + 1);
    if (ptr == NULL)
        return NULL;
    return strcpy(ptr, str);
}