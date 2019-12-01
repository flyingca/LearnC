#include <stdio.h>

int isDif(int a, int b, int c, int d, int e) {
	char tmp = 0;
	tmp |= 1 << (a - 1);
	tmp |= 1 << (b - 1);
	tmp |= 1 << (c - 1);
	tmp |= 1 << (d - 1);
	tmp |= 1 << (e - 1);

	return tmp == 31;
}

void Killer() {
	int tmp[4] = { 0 };
	int i = 0;
	for (i = 0; i < 4; i++) {
		tmp[i] = 1;
			//A说：不是我。
			//B说：是C。
			//C说：是D。
			//D说：C在胡说
			//已知3个人说了真话，1个人说的是假话。
		if ((tmp[0] != 1) + (tmp[2] == 1) + (tmp[3] == 1) + (tmp[3] != 1) == 3) {
			printf("%c是凶手", 'A' + i);
		}
		tmp[i] = 0;
	}

}

int main() {
	Killer();
	system("pause");
	return 0;
}