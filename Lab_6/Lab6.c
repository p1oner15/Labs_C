#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>

int main() {
    system("chcp 1251");
	system("cls");
	return 0;
}

void print_arr(int a[], int len) {
	int COLUMNS = 3, count = 0;
	for (int i = 0; i < len; i++)
	{
	if (count == COLUMNS) {
	count = 0;
	printf("\n");
	}
	printf("arr[%d]= %d ", i, a[i]);
	count++;
	}
}

void get_arr(int* arr, int len) {
	printf("Enter the values of the array elements: \n");
	for (int i = 0; i < len; i++)
	{
		printf("arr[%d]= ", i);
		scanf("%d", &arr[i]);
	}
}

void Task1(int *arr, int len) {
	for (int i = 0; i < len; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			printf("Array is not ordered.");
			return;
		}
	}
	printf("Array is ordered.");
}

void Task2(int* arr, int len) {
	int x;
	printf("Enter x: ");
	scanf("%d", &x);
	for (int i = 0; i < len; i++)
	{
		if (x == arr[i])
		{
			printf("Index = %d", i);
			return;
		}
	}
	printf("Index = -1");
}

void Task3(float* arr, int len) {
	float s = 0, z = 1, xm = 0;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] < 0)
		{
			xm = arr[i];
			break;
		}
		else xm = 0;
	}

	for (int i = 0; i < len; i++)
	{
		z *= arr[i];
		if (i == len - 1) s += z * xm;
		else s += z;
	}

	printf("%f", s); 
}

void Task4(float* arr, int len) {
	float s1 = 0, s2 = 0;
	for (int i = 0, j = 1; i < len; i++, j--)
	{
		s1 += arr[i] + arr[len - (i + 1)];
		s2 += arr[(len - j) / 2];
	}
	printf("%.2f", max(s1, s2));
}

void Task5(float* arr, int len) {
	float a[19], z, min;
	for (int i = 0; i < len - 1; i++)
	{
		z = arr[i] * arr[i + 1];
		a[i] = z;
	}

	min = *a;
	for (int j = 0; j < 19; j++)
	{
		printf("%.2f\n", a[j]);
		if (min > a[j])
			min = a[j];
	}
	printf("min = %.2f", min);
}

void Task6(float* arr, int len) {
	int p = 0, q = 0;
	float *u, *z, s = 0;
	for (int i = 0, j = len - 1; i < len; i++, j--)
	{
		if (arr[i] < 0) q++;
		if (arr[j] >= 0) p++;
	}
	u = (float*)malloc(q * sizeof(float));
	z = (float*)malloc(p * sizeof(float));
	int cz = 0, cu = 0;
	for (int i = 0, j = len - 1; i < len; i++, j--)
	{
		if (arr[i] < 0)
			*(u + cu++) = arr[i];
		if (arr[j] >= 0)
			*(z + cz++) = arr[j];
	}
	for (int i = 0; i < min(p, q); i++)
		s += (*(u + i)) * (*(z + i));
	printf("%.2f", s);
	free(u);
	free(z);
}