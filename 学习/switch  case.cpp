#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	srand(time(0));
	int a;
	printf("�㵽ϵͳ׼�����\n");
	a = (rand() % 5)+1;
	printf("�㵽��ѧ��Ϊ%d\n",a);
	switch(a)
	{
	case 1:
	printf("�����");
	break;
    case 2:
	printf("�࿡�ܵ�");
	break;
	case 3:
	printf("��������");
	break;
	case 4:
	printf("Фٻ�");
	break;
	case 5:
	printf("�￵�㵽"); 
	break;
	default:printf("�������");
	break;
}
}
