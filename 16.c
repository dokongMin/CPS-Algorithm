#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int x[100];
int y[100];

void main() {

	char a[100];
	char b[100];

	int flag = 1;

	scanf("%s", &a);
	scanf("%S", &b);

	for (int i = 0; a[i] != '\0'; i++) {
		int j = a[i];
		x[j++];
	}

	for (int i = 0; b[i] != '\0'; i++) {
		int j = b[i];
		y[j++];
	}
	
	for (int i = 0; i<100; i++) {
		if (x[i] != y[i]) {
			flag = 0;
			break;
		}
		flag = 1;
	}
	if (flag == 1) {
		printf("YES");
	}
	else
		printf("NO");
}