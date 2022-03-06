#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void main() {

	int n, res, cnt=0;
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		res = 1;
		for (int k = 2; k*k < i; k++) { //Á¦°ö±Ù
			if (i % k == 0) {
				res = 0;
				break;
			}
		}
		if (res == 1)
			cnt++;
	}
	printf("%d", cnt);

}