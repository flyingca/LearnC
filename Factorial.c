#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int Mpow(int n, int k)
{
	int sum = 0;
	if (k == 0)
	{
		sum = 1;
	}
	else
	{
		sum = n * Mpow(n, k - 1);
	}
	return sum;
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	printf("%d\n", Mpow(n, k));
	system("pause");
	return 0;
}