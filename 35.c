#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
/*
#include<vector>
#include<algorithm>
using namespace std;
*/
void main() {

	int n, i, j, tmp, a[101];
	
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (a[j] >= 0 && a[j + 1] < 0) {
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}

	for (i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}


}