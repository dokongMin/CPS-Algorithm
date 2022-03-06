#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void main() {

	int n, k;
	int res = 0;
	int temp[100];
	int max = -219000;

	scanf("%d", &n);
	scanf("%d", &k);
	for (int i = 0; i < n; i++) {
		scanf("%d", &temp[i]);
	}
	for (int i = 0; i < n-k; i++) {
		for (int j = 0; j < k; j++) {
			res += temp[i + j];
		}
		if (max < res)
			max = res;

		res = 0;
	}
	printf("%d", max);

}