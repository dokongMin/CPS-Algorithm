#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void main() {

	char a[100];
	gets(a);
	int i = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] != ' ')
		{
			if (a[i] >= 65 && a[i] <= 90) {
				a[i] = a[i] + 32;
			}
			else
				a[i] = a[i];
		}

	}
	a[i] = '\0';
	printf("%s", a);
}