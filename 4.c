#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>    // strtok 함수가 선언된 헤더 파일

void main() {

	char a[100];
	char b[100];
	int p = 0;
	gets(a);
	for (int i = 0; a[i] != '\0'; i++) 
	{
		if (a[i] != ' ')
		{
			if (a[i] >= 65 && a[i] <= 90) {
				b[p] = a[i] + 32;
				p++;
			}
			else {
				b[p] = a[i];
				p++;
			}
		}


	}
	b[p] = '\0';
	printf("%s", b);
}