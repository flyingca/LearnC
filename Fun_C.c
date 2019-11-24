#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void Fun_C(int n) {
	if (n < 10) {
		printf("%d\n", n);
	}else {
		Fun_C(n / 10);
		printf("%d\n", n % 10);
	}
}
int main() {
	int n = 0;
	printf("please input a number:\n");
	scanf("%d", &n);
	Fun_C(n);
	system("pause");
	return 0;
}