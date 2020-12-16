#include <stdio.h>
int main(void)
{
	int a=0,b=0,c=0;
	printf("请第一位同学投票  ");
    scanf("%d",&a);
    if(a>=2)
    {
    printf("投票无效\n"); 
    }
    printf("请第二位同学投票  ");
    scanf("%d",&b);
    if(b>=2)
	{
    printf("投票无效\n"); 
    } 
    printf("请第三位同学投票  ");
    scanf("%d",&c);
    if(c>=2)
	{
    printf("投票无效\n"); 
    } 
    if(a==0)
    {
    	printf("投票失败");
	}
	else if(a+b+c>=2&&a+b+c<=3)
	{
		printf("投票成功"); 
	}
	else
	{
		printf("投票失败");
	}
}
