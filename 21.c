#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>


void main() {

	int a[11];
	int b[11];
	char win[30];
	int Acnt = 0;
	int Bcnt = 0;
	
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 10; i++) {
		scanf("%d", &b[i]);
	}
	for (int i = 0; i < 10; i++) {
		if (a[i] > b[i]){
			win[i] = 'A';
			Acnt++;
		}
		else if (a[i] < b[i]) {
			win[i] = 'B';
			Bcnt++;
		}
		else if (a[i] == b[i]) {
			win[i] = 'D';
		}
	}
	if (Acnt > Bcnt)
		printf("A");
	else if (Acnt < Bcnt)
		printf("B");
	else if (Acnt == Bcnt) {
		for (int i = 9; i >= 0; i--) {
			if (win[i] == 'A'){
				printf("A");
				break;
			}
			else if (win[i] == 'B') {
				printf("B");
				break;
			}
			else if (win[i] == 'D'){
				continue;
				if (i == 0) {
					win[i] == 'D';
						printf("D");
				}
			}
		}
	}

}