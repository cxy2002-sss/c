#include <stdio.h>
int main(void)
{
	int a=0,b=0,c=0;
	printf("���һλͬѧͶƱ  ");
    scanf("%d",&a);
    if(a>=2)
    {
    printf("ͶƱ��Ч\n"); 
    }
    printf("��ڶ�λͬѧͶƱ  ");
    scanf("%d",&b);
    if(b>=2)
	{
    printf("ͶƱ��Ч\n"); 
    } 
    printf("�����λͬѧͶƱ  ");
    scanf("%d",&c);
    if(c>=2)
	{
    printf("ͶƱ��Ч\n"); 
    } 
    if(a==1&&b==1 || a==1&&c==1 || b==1&&c==1 || a==1&&b==1&&c==1)
    {
    	printf("ͶƱͨ��");
	}
	else
	{
		printf("ͶƱʧ��"); 
	}
}
