#define CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void main() {

	int n;
	int a[100];
	int min = 10000 , max = 0;
	int result;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &a[i]);
	}

	for (int i = 0; i < n; i++) 
	{
		if (a[i] < min) 
		{
			min = a[i];
		}
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	result = max - min;
	printf("�ּ� : %d  �ִ� : %d ", min, max);
	printf("�� : %d", result);

	
}