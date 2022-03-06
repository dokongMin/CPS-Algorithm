#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


int max = 0;


int digit_sum(int x) {
	int sum = 0;
	int tmp = 0;
	while (x > 0) {
		tmp = x % 10;
		sum = sum + tmp;
		x = x / 10;
	}
	return sum;
}

void main() {

	int a;
	int b;
	int sum, res;
	int num;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		scanf("%d", &b);
		sum = digit_sum(b);
		if (sum > max) {
			max = sum;
			res = num;
		}
		else if (sum == max) {
			if (num > res) res = num;
	}
		printf("%d\n", res);
		return 0;

}
