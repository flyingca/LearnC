#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main (){
	//三者顺序输出
	//int a, b, c; 
	//scanf("%d%d%d", &a, &b, &c);
	//int tmp = 0;
	//if (a < b) {
	//	tmp = a;
	//	a = b;
	//	b = a;
	//}
	//if (b < c) {
	//	tmp = b;
	//	b = c;
	//	c = tmp;
	//}
	//if (a < b) {
	//	tmp = a;
	//	a = b;
	//	b = a;
	//}
	//printf("abc为：%d, %d, %d", a, b, c);
	//最大公约数
	//int a, b; 
	//int c;
	//scanf("%d%d", &a, &b);
	//c = a % b;
	//while (c) {
	//	a = b;
	//	b = c;
	//	c = a % b;
	//}
	//printf("max = %d", b);
	//sn = a + aa +。。。+aaaaa a为数字求sn
	//int n, a;
	//int i;
	//int sum = 0;
	//int add = 0;
	//scanf("%d%d", &n, &a);
	//for ( i = 0; i < a; i++) {
	//	sum = sum * 10 + n;
	//	add += sum;
	//}
	//printf("add = %d", add);
	//
	//int i;
	//double sum = 0;
	//double tmp = 0;
	//int flag = 1;
	//for (i = 1; i <=100; i++) {
	//	tmp = flag * 1.0 / i;
	//	flag *= -1;
	//	sum += tmp;

	//}
	//printf("%.4lf\n",sum);
	//数位遍历
	//int n;
	//scanf("%d", &n);
	//int i;
	//int tmp = 0;
	//int sum = 0;
	//for (i = n; i; i /= 10) {
	//	sum = sum * 10 + i % 10;
	//	printf("%d\n", i % 10);
	//}
	//printf("%d\n", sum);
	//if (sum == n) {
	//	printf("yes\n");
	//}
	//else {
	//	printf("no\n");
	//}
	//100中9出现了多少次
	//int i;
	//int count = 0;
	//for (i = 0; i <= 100; i++) {
	//	if(i %10 == 9){
	//		count++;
	//	}
	//	if (i / 10 == 9) {
	//		count++;
	//	}
	//}
	//printf("%d", count);
	//水仙花数 在9位以内的情况
	//int i;
	//int addflag = 10;
	//int n = 1;
	//int sum = 0;
	//int j;
	//for (i = 1; i < 100000000; i++) {
	//	if (i == addflag) {
	//		n++;
	//		addflag *= 10;
	//	}
	//	for (j = i; j; j /= 10) {
	//		sum += pow(j % 10, n);
	//	}
	//	if (sum == i) {
	//		printf("%d\n", sum);
	//	}
	//	sum = 0;
	//}
	int n;
	scanf("%d", &n);
	int i;//hanghao
	int j;//liehao
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d*%d=%d ", j, i, i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}