//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//int Recursive( char* str) {
//	int count = 0;
//	if (*str != '\0') {
//		return 1 + Recursive(str + 1);
//	}
//	else {
//		return 0;
//	}
//	
//}
//
//int Non_Recursive(char* str) {
//	int count = 0;
//	while (*str != '\0') {
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main() {
//	char* str = "hello";
//	printf("Recursive\n");
//	printf("%d\n", Recursive(str));
//	printf("Non_Recursive\n");
//	printf("%d\n", Non_Recursive(str));
//	system("pause");
//	return 0;
//}