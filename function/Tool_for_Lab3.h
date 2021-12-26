#include <stdio.h>
#include <stdlib.h>

int power(int x, int level) {
    int n = 0, output = 1;
    if (level == 0)
        return 1;
    else {
        while (level > n) {
            output *= x;
            n += 1;
        }
    }
    return output;
}

int is_prime(int n) {
    if (n > 1) {
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return 0;
        return 1;
    } else
        return 0;
}

void output_array(int *array, int size) {

    for (int i = 0; i < size; i++) {
        printf("%d ",array[i]);
    }
    printf("\n");
}

int *input_array(int *num) {
    int i, n;
    printf("Введите количество элементов: ");
    scanf("%d", &n);
    int *array = malloc(n * sizeof(int));
    for (i = 0; i < n; i++) {
        printf("a[%d] = ",i);
        scanf("%d", &array[i]);
    }
    *num = n;
    output_array(array, n);
    return array;
}


