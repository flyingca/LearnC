#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int series(int num, int n)//ָ��һ������num�� ָ������n
{
	int result = 0;
	int list = 0;
	for (int i = 0; i < n; i++)
	{
		list = 10 * list + num;
		result = result + list;
	}
	return result;
}

int main()
{
	//int num = 0;
	//int n = 0;
	//printf("��ֱ�����ָ�����ֺ�ǰn��͵������� �ÿո����\n");
	//scanf("%d %d", &num, &n);
	//printf("ǰ%d�ĺ�Ϊ%d", n, series(num, n));
	int max = 0x800000000;
	int tmp;
	int i;
	for (i = 0; i <10; i++) {
		scanf("%d", &tmp);
		if (tmp > max) {
			max = tmp;
		}
	}
	printf("%d", max);
	system("pause");
	return 0;
}
