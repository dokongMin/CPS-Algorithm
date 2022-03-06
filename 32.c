#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include<vector>
#include<algorithm>

void main() {

	int n, i, j, idx, tmp, a[100];

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", a[i]);
	}
	for (i = 0; i < n - 1; i++) {
		idx = i;
		for (j = 1; j < n; j++) {
			if (a[j] < a[idx])
				idx = j;
		}
		tmp = a[i];
		a[i] = a[idx];
		a[idx] = tmp;
	}

}