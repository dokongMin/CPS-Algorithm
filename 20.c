#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


void main() {

	int n;
	char win[100];
	int a[100];
	int b[100];

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++) {
		scanf("%d", &b[i]);
	}
	for (int i = 0; i < n; i++) {
		if (a[i] == 1 && b[i] == 3)
			win[i] = 'A';
		else if (a[i] == 2 && b[i] == 1)
			win[i] = 'A';
		else if (a[i] == 3 && b[i] == 2)
			win[i] = 'A';
		else if (a[i] == b[i])
			win[i] = 'D';
		else
			win[i] = 'B';
	}
	for (int i = 0; i < n; i++) {
		printf("%c\n", win[i]);
	}
}