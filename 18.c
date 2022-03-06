#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


void main() {

	int sec, maxnum;
	int n[100];
	int cnt = 0;
	int max = -219700;
	
	scanf("%d", &sec);
	scanf("%d", &maxnum);

	for (int i = 0; i < sec; i++) {
		scanf("%d", &n[i]);
	}

	for (int i = 0; i < sec; i++) {
	
		if (n[i] > maxnum)
			cnt++;
		else
			cnt = 0;

		if (cnt > max)
			max = cnt;

	}
	if (max < 0)
		printf("-1");
	else
		printf("%d", max);
}