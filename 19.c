#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


void main() {

	int n;
	int height[100];
	int flag = 1;
	int cnt = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &height[i]);
	}

	for (int i = 0; i < n - 1; i++) {
		for (int k = i+1; k < n - 1; k++) {
			if (height[i] > height[k])
				flag = 1;
			else{
				flag = 0;
				break;
			}

		}
		if (flag == 1)
			cnt++;
		flag = 1;
	}
	printf("%d", cnt);
}