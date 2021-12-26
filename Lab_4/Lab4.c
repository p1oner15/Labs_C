#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Lab1(void) {
    int k = 0, c;
    while ((c = getchar()) != '.')
    k += (c == 'a');
    printf("%d", k);
}

void Lab1a(void) {
    int k = 0, c;
    while ((c = getchar()) != '.') {
    if (c == '?')
    c = '!';
    putchar(c);
    }
}

void Lab1b(void) {
    int k = 0, c;
    while ((c = getchar()) != '.')
    {
        if (c == '-')
            continue;
        if (c == '&')
            putchar(c);
        putchar(c);
    }
}

void lab1c(void) {
    int k = 0, c;
    while ((c = getchar()) != '.')
    {
        if (c >= 97 && c <= 122)
            putchar(c);
    }
}

void lab1d(void) {
    int k = 0, c;
    while ((c = getchar()) != '.')
    {
        if (c >= 65 && c <= 90)
            putchar(c + 32);
        else
            putchar(c);
    }
}

void lab1e(void) {
    int k = 0, c;
    while ((c = getchar()) != '.')
    {
        if (c >= 97 && c <= 122)
            putchar(c - 32);
        else
            putchar(c);
    }
}

void lab1f(void) {
    int prev = 0, c;
    while ((c = getchar()) != '.')
    {
        if (prev == '+' && c == '+')
            continue;
        prev = c;
        putchar(c);
    }
}

void lab1g(void) {
    for (int c = getchar(), n = 0; c != '.'; c = getchar())
    {
        if (c == '*') ++n;
        else
        {
            if (n == 1) putchar('*');
            else if (n > 1)
                for (int i = 0; i < n / 2; ++i)
                    putchar('+');
            n = 0;
            putchar(c);
        }
    }
}

void lab1h() {
    for (int c = getchar(), n = 0; c != '.'; c = getchar())
    {
        if (c == '0') ++n;
        else if (c == '.')
        {
            if (n > 0)
            {
                printf("0");
                n = 0;
            }
        }
        else if (isdigit(c))
        {
            if (n == 1) printf("0");
            else if (n > 1) putchar(c);
            n = 0;
        }
        else if (isalpha(c))
        {
            if (n>0) printf("0");
            putchar(c);
            n = 0;
        }
    }

    /*
    char str[80], c;
    int i;
    for (i = 0; i < 80; i++)
    {
        c = getchar();
        str[i] = c;
        if (c == '.')
            break;
    }
    for (i = 0; str[i] != '.'; i++) {
        if (str[i] == '0' && (int)str[i - 1] >= 49 && (int)str[i - 1] <= 57)
        {
            while (str[i] == '0') {
            printf("%c", str[i]);
            i++;
            }
        }
        if (str[i] == '0' && (int)str[i + 1] >= 49 && (int)str[i + 1] <= 57) {
            i++;
        }
        if (str[i] == '0' && str[i + 1] == '0')
        {
            while (str[i] == '0' && str[i + 1] == '0')
                i++;
            if (!((int)str[i + 1] >= 48 && (int)str[i + 1] <= 57))
                printf("%c", '0');
        }
        else
        {
            printf("%c", str[i]);
        }
    } */
}

void lab1i() {
    char str[80], c;
    int i;
    for (i = 0; i < 80; i++)
    {
        c = getchar();
        str[i] = c;
        if (c == '.')
            break;
    }
    for (i = 0; str[i] != '.'; i++)
    {
        if (str[i] == 't' && str[i + 1] == 'h' && str[i + 2] == 'e')
            i += 2;
        else
            printf("%c", str[i]);
    }
}

void lab1j() {
    char str[80], c;
    int i;
    for (i = 0; i < 80; i++)
    {
        c = getchar();
        str[i] = c;
        if (c == '.')
            break;
    }
    for (i = 0; str[i] != '.'; i++)
    {
        if ((int)str[i] >= 48 && (int)str[i] <= 57 && ((((int)str[i + 1] >= 48 && (int)str[i + 1] <= 57) && ((int)str[i] < (int)str[i + 1])) || ((int)str[i - 1] >= 48 && (int)str[i - 1] <= 57) && ((int)str[i] > (int)str[i - 1])))
            printf("%c", str[i]);
        if (!((int)str[i] >= 48 && (int)str[i] <= 57))
            printf("%c", str[i]);
    }
}

void lab1k() {
    char str[80], c;
    int i;
    for (i = 0; i < 80; i++)
    {
        c = getchar();
        str[i] = c;
        if (c == '.')
            break;
    }
    for (i = 0; str[i] != '.'; i++)
    {
        if (str[i] == 'c' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'd')
        {
            printf("children");
            i += 4;
        }
        else
            printf("%c", str[i]);
    }
}

void lab1l() {
    char str[80], c;
    int i;
    for (i = 0; i < 80; i++)
    {
        c = getchar();
        str[i] = c;
        if (c == '.')
            break;
    }
    for (i = 0; str[i] != '.'; i++)
    {
        if (str[i] == '{' && strchr(str + i, '}'))
            while (str[i] != '}')
                i++;
        else
            printf("%c", str[i]);
    }
}

void lab2a() {
    char str[80], c, j;
    int i;
    for (i = 0; i < 80; i++) {
        c = getchar();
        str[i] = c;
        if (c == '$')
            break;
    }
    for (i = 0; str[i] != '$' && i < strlen(str); i++) {
        if (str[i] == '.')
        {
            printf("%c", '.');
            i++;
            j = i;
            while ((int)str[j] >= 48 && (int)str[j] <= 57)
                j++;
            if (j - i > 2)
            {
                printf("%c%c", str[i], str[i + 1]);
                i += j - i - 1;
            }
            else
            {
                printf("%c%c", str[i], str[i + 1]);
                i++;
            }
        }
        else
            printf("%c", str[i]);
    }
}

void lab2b() {
    char str[80], c, j;
    int i;
    for (i = 0; i < 80; i++)
    {
        c = getchar();
        str[i] = c;
        if (c == '$')
            break;
    }
    for (i = 0; str[i] != '$' && i < strlen(str); i++) {
        if (str[i] == '0') {
            j = i;
            while (str[j] == '0')
                j++;
            if (str[i - 1] == '.') {
                for (; i <= j + 1; i++)
                    printf("%c", str[i]);
            
          } else if (str[j] == '.') {
                printf("%c", '0');
                i = j - 1;
            
          } else if (!((int)str[j] >= 49 && (int)str[j] <= 57)) {
                printf("%c", '0');
                i = j - 1;
            }
        
          } else
            printf("%c", str[i]);
    }
}