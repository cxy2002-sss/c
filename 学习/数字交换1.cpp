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
	printf("请输入a与b的值，中间用空格隔开：");
	scanf("%d%d", &a, &b);
	change( &a,  &b);
	printf("输出的a和b的值分别为%d、%d", a, b);
	return 0;
}
