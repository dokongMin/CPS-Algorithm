#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int cnt[1000];
void main() {

	int a;
	scanf("%d", &a);
	int num = 1;

	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				cnt[i] = num++;
			}
		}
		num = 1;
	}
	for (int i = 1; i <= a; i++) {
		printf("%d", cnt[i]);
	}
	
}