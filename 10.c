#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

void main() {

	int n;
	int k;
	scanf("%d", &n);
	
	
	int res = reverse(n);
	isPrime(res);
}

int reverse(int x) {
	int res = 0, tmp;
	while (x > 0) {
		tmp = x % 10;
		res = res * 10 + tmp;
		x = x / 10;
	}
	return res;
}

bool isPrime(int x) {

	if (x == 1)
		return false;

	bool flag = true;

	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			flag = false;
			break;
		}
	}
	return flag;
}