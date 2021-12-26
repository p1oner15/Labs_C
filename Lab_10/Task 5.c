#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int task() {
    char *ptr, str[] = "Feb. 15, 2001";
            ptr = strtok(str, "./");
            printf("%s\n", ptr);
    while (ptr) {
        ptr = strtok(NULL, ".,-/");
        if (ptr) printf("%s\n", ptr);
    }
}