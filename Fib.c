#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//递归实现
int Fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else {
		return Fib(n - 1) + Fib(n - 2);
	}
}

//非递归实现
int fib(int n) {
	int a = 1;
	int b = 1;
	int result = 0;
	if (n <= 2) {
		return 0;
	}else {
		for (int i = 3; i <= n; i++) {
			result = a + b;
			a = b;
			b = result;
		}
	}
	return result;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	Fib(n);
	printf("%d\n", Fib(n));
	fib(n);
	printf("%d\n", fib(n));
	system("pause");
	return 0;
}
