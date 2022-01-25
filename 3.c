#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void main() {

	char a[100];
	scanf("%s", &a);
	int i = 0;
	int res = 0;
	int cnt = 0;

	for (i = 0; a[i] != '\0'; i++) {
		if (a[i] >= 48 && a[i] <= 57) {
			res = res * 10 + (a[i] - 48);
		}
	}
	printf("%d\n", res);
	for (i = 1; i <= res; i++) {
		if (res % i == 0) cnt++;
	}
	printf("%d\n", cnt);
	return 0;
}