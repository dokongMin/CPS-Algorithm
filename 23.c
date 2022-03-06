#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void main() {
	int n;
	int a[100];
	int cnt = 1;
	int max = -21900;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n - 1; i++) {
		if (a[i] <= a[i + 1]) {
			cnt++;
			if (max < cnt){
				max = cnt;
			}
		}
		else if (a[i] > a[i + 1])
			cnt = 1;
	}
	printf("%d", max);


}