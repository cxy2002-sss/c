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
    if(a==1&&b==1 || a==1&&c==1 || b==1&&c==1 || a==1&&b==1&&c==1)
    {
    	printf("投票通过");
	}
	else
	{
		printf("投票失败"); 
	}
}
