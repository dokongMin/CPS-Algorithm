#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int res[100];
int n[100];

void main() {

	int cnt = 0;
	int max = 0;

	int resMax = 0;
	scanf("%d", &n);
	for (int i = 0; n[i] != '\0'; i++) {
		for (int j = 1; n[i] != '\0'; j++) {
			if (n[i] == n[j]) {
				cnt++;
				if (cnt > max) {
					max = cnt;
				}
			}
		}
		res[i] = cnt;
	}
	for (int i = 0; res[i] != '\0'; i++) {
		if (res[i] == max) {
			printf("%d", res[i]);
		}
	}
}
