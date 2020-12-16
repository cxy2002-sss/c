#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	srand(time(0));
	int a;
	printf("点到系统准备完毕\n");
	a = (rand() % 5)+1;
	printf("点到的学生为%d\n",a);
	switch(a)
	{
	case 1:
	printf("程翔宇到");
	break;
    case 2:
	printf("余俊杰到");
	break;
	case 3:
	printf("郭纪龙到");
	break;
	case 4:
	printf("肖倩宇到");
	break;
	case 5:
	printf("孙康毅到"); 
	break;
	default:printf("输入错误");
	break;
}
}
