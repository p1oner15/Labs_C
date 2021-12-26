#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <string.h>
#define ARRAY_LENGTH 7

void print_arr(int a[], int len);
void get_arr(int* arr, int len);
void Task1(int* arr, int len);
void Task2(int* arr, int len);
void Task3(float* arr, int len);
void Task4(float* arr, int len);
void Task5(float* arr, int len);
void Task6(float* arr, int len);

int main() {
    system("chcp 1251");
	system("cls");
	//int a[7] = { 1, 2, 3, 4, 5, 5, 7 };
	//int len = sizeof(a) / sizeof(int);
	//print_arr(a, len);

	//int a[ARRAY_LENGTH];
	//get_arr(a, ARRAY_LENGTH);
	//printf("Array elements got values: \n");
	//print_arr(a	, ARRAY_LENGTH);
	//int x[10] = { 1,2,3,3,4,5,6,7,8,9 };
	//float xf[10] = { 1, 2 ,3, 3, 4, 5, 6, 7, 8, 9 };
	//float y[20] = { -1.0, 2, -1.0, 3, 4.1, 5.2, 6.2, 7.3, -1.0, 4, 1.1, 32, 3.11, 3.2, 4.2, 5.1, 6.1, 7, 1.0, -1.0 };
	//int lenx = sizeof(x) / sizeof(int);
	//int lenxf = sizeof(xf) / sizeof(float);
	//int leny = sizeof(y) / sizeof(float);
	//task1(x, lenx);
	//task2(x, lenx);
	//task3(xf, lenxf);
	//task4(y, leny);
	//task5(y, leny);
	//task6(y, leny);
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

	//int testLen = sizeof(a) / sizeof(int);
	//printf("\n%d", testLen);
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