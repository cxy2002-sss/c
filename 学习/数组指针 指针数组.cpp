#include<stdio.h>
int main(void)
{
	//指针数组 
	char string[3][11]={"程翔宇","guojilong","shunkangyi"};
	char*p[3]={0};//三个指针变量   没有3就是指针变量，加了三就是三个指针变量在一起变为一个数组，即指针数组 
	for(int i=0;i<3;i++)
	{
		p[i]= string[i];
		printf("%s\n",p[i]);
	 } 
    //数组指针 
	//char string[3][11]={"程翔宇","guojilong","shunkangyi"};
    char (*pdata)[11];//*pdata类似于pdata[i] 
    char i=0;
    pdata = string;//这里两者相等就把string的值赋给了pdata 
    for(i=0;i<3;i++)
    {
    	printf("%s\n",*pdata);
    	pdata++;//这里的pdata++就类似于pdata[i]中i加1 
	}
 } 
