#include <stdio.h>
int change(int a, int b);
int a = 0, b = 0;

int change(int *a, int *b) {
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
	return 1;
}

int main() {
	int a = 0, b = 0;
	printf("������a��b��ֵ���м��ÿո������");
	scanf("%d%d", &a, &b);
	change( &a,  &b);
	printf("�����a��b��ֵ�ֱ�Ϊ%d��%d", a, b);
	return 0;
}
