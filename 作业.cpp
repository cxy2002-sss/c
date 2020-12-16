#include<stdio.h>
/*int main(void)
{
	char i=0,a;
	float coredata[10]={90.5,81.5,82.5,83.5,95,89.5,81.5,92.4,83.5,78.5};
	for(i=0;i<10;i++)
	{
		printf("数值的第%d次值为%f\n",i+1,coredata[i]);
	}
	float add=0,avg;
	for(i=0;i<10;i++)
	{
	    add=coredata[i]+add;
	    if(coredata[i]>90)
	    {
	    	a++;
		}
	}
	avg=add/i;
	printf("平均数为%f\n",avg);
	printf("大于90的个数为%d",a);
}*/
int printf_handle(float b[10])
{   int i=0;
	for(i=0;i<10;i++)
	{
		printf("数值的第%d次值为%f\n",i+1,b[i]);
	}
	return 0;
}
int count_handle(float b[10])
{   int i=0;
	float add=0,avg;
	for(i=0;i<10;i++)
	{
	    add=b[i]+add;
    }
    avg=add/i;
	printf("平均数为%f\n",avg);
	return 0;
}
int average_handle(float b[10])
{   int i=0,a=0;
	for(i=0;i<10;i++)
	{
		if(b[i]>90)
	    {
	    	a++;
		}
	}
	printf("大于90的个数为%d",a);
	return 0;
}
int main(void)
{
	float coredata[10]={90.5,81.5,82.5,83.5,95,89.5,81.5,92.4,83.5,78.5};
    printf_handle(coredata);
    count_handle(coredata);
	average_handle(coredata);
}
