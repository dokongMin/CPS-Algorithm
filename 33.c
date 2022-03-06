#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
/*
#include<vector>
#include<algorithm>
using namespace std;
*/
void main() {

	int a[100], i, j, tmp, n, idx, cnt=1;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n - 1; i++) {
		idx = i;
		for (j = i+1; j < n; j++) {
			if (a[j] > a[idx])
				idx = j;
		}
		tmp = a[i];
		a[i] = a[idx];
		a[idx] = tmp;
	}

	for (i = 1; i < n; i++) {
		if (a[i] != a[i - 1]) {
			cnt++;
		}
		if (cnt == 3) {
			printf("%d", a[i]);
			break;
		}
	}

}