//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int Recursive(int n) {
//	int count = 1;
//	if (n < 1) {
//		return 1;
//	}
//	else {
//		return n * Recursive(n - 1);
//	}
//
//}
//
//int Non_Recursive(int n) {
//	int count = 1;
//	for (int i = 1; i <= n; i++) {
//		count *= i;
//	}
//	
//	return count;
//}
//
//int main() {
//	int n = 3;
//	printf("Recursive\n");
//	printf("%d\n", Recursive(n));
//	printf("Non_Recursive\n");
//	printf("%d\n", Non_Recursive(n));
//	system("pause");
//	return 0;
//}