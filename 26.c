#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include<vector>
#include<algorithm>


void main() {

	int n;
	int speed[100];
	int score[100];

	scanf("%d", &n);
	vector<int> a(n + 1);
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 1; j < n; j++) {
			if (speed[i] >= speed[j])
				score[j]++;
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%d", score[i]);
	}

}