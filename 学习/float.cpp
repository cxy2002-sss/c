#include <stdio.h>
#define pai 3.1415926       //一个定值不用函数形式且中间用空格 
#define s(x) 3.1415926*r*r //一个函数要有函数的形式 
#define c(x) 3.1415926*2*r//同上 
int main(void)
{
	float r,s,c;//一般用float，也可用double 
	printf("半径为"); 
	scanf("%f",&r);
	printf("半径为%f圆的面积=%f，周长=%f",r,s(x),c(x));
 } 
