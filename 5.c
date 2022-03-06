#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void main() {

	char a[30];
	gets(a);
	int cnt = 0;

	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == '(') {
			cnt++;
		}
		else if (a[i] == ')') {
			cnt--;
		}
	}
	if (cnt == 0) {
		printf("YES");
	}
	else
		printf("NO");

}