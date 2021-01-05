#include<stdio.h>
/*定义了三个全局变量*/
float data1 =0 , data2=0;
float result = 0 ;
/*求和*/
void sum() 
{
	result = data1 + data2 ;
}
/*减法*/
void sub() 
{
	result = data1 - data2 ;
}
/*乘法*/
void mul() 
{
	result = data1 * data2 ;
}
/*除法*/
void div() 
{
	result = data1 * data2 ;
}

int main()
{
	int b; 
	do
	{ 
    int select_num = 0 ;    // 值为1 2 3 4 时分别为加减乘除
    printf("请输入两个数据：");
    scanf("%f", &data1) ;
    scanf("%f", &data2) ;
	printf("请输入你要对应运算1加，2减，3乘，4除，请选择：");
    scanf("%d", &select_num) ;
switch(select_num)
    {
    case 1:
    sum();
    break;
    case 2:
    sub();
    break;
    case 3:
    mul();
    break;
    case 4:
    div();
    break;
    default:printf("请重新输入\n"); 
}
    printf("计算结果为 %f\n是否继续，继续请按1，结束请按2\n", result);

	scanf("%d",&b);
}
    while(b==1);
}





