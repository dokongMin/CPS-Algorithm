#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void main() {

	char num[40];
	int age;
	scanf("%s", &num);


	if (num[7] == '1' || num[7] == '2')
	{
		age = 2022 -((num[0] - 48) * 10 + (num[1] - 48) + 1900) + 1;
		if (num[7] == '1')
			printf("1900년대생 남자, 나이는 %d" , age);
		if (num[7] == '2')
			printf("1900년대생 여자, 나이는 %d", age);
	}
	else if (num[7] == '3' || num[7] == '4'){
		age = 2022 - ((num[0] - 48) * 10 + (num[1] - 48) + 2000) + 1;

		if (num[7] == '3')
			printf("2000년대생 남자, 나이는 %d", age);
		if (num[7] == '4')
			printf("2000년대생 여자, 나이는 %d", age);
	}

}