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
    if(a==0)
    {
    	printf("ͶƱʧ��");
	}
	else if(a+b+c>=2&&a+b+c<=3)
	{
		printf("ͶƱ�ɹ�"); 
	}
	else
	{
		printf("ͶƱʧ��");
	}
}
