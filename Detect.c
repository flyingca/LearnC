//#include <stdio.h>
//
//int isDif(int a, int b, int c, int d, int e) {
//	char tmp = 0;
//	tmp |= 1 << (a - 1);
//	tmp |= 1 << (b - 1);
//	tmp |= 1 << (c - 1);
//	tmp |= 1 << (d - 1);
//	tmp |= 1 << (e - 1);
//
//	return tmp == 31;
//}
//
//void Class_D() {
//	int a, b, c, d, e;
//	for(a = 1; a <= 5; a++){
//		for (b = 1; b <= 5; b++) {
//			for (c = 1; c <= 5; c++) {
//				for (d = 1; d <= 5; d++) {
//					for (e = 1; e <= 5; e++) {
//							//Aѡ��˵��B�ڶ����ҵ�����
//							//Bѡ��˵���ҵڶ���E���ģ�
//							//Cѡ��˵���ҵ�һ��D�ڶ���
//							//Dѡ��˵��C����ҵ�����
//							//Eѡ��˵���ҵ��ģ�A��һ��
//						if ((b == 2) + (a == 3) == 1 &&
//							(b == 1) + (e == 4) == 1 &&
//							(c == 1) + (d == 2) == 1 &&
//							(e == 4) + (a == 1) == 1 &&
//							isDif(a,b,c,d,e)) {
//							printf("a = %d b = %d c = %d d = %d e = %d", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//}
//
//int main() {
//	Class_D();
//	system("pause");
//	return 0;
//}