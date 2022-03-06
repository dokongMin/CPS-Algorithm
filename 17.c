#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


void main() {
	int n, num, res = 0, sres = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &num);
		scanf("%d", &sres);
	
	for (int i = 0; i <= num; i++) {
		res += i;
		}
	if (sres == res) {
		printf("YES");
	}
	else
		printf("NO");
	res = 0;
	}

}