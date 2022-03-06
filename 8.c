#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void main() {
	int n, k;
	int cnt = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		cnt++;
		k = i;
		while (k / 10 != 0) {
			k = k / 10;
			cnt++;
		}
	
	}
	printf("%d", cnt);
}