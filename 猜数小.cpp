#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void)
{
	srand(time(0));
	int a=0;
	int rnd = (rand() % 50) + 1;

 

 printf("��Ϸ��ʼ\n");
 do
 {
 	scanf("%d",&a);
 if (rnd < a)
 {
 	printf("���ź��´���\n");
 	continue;
 }
 else if (rnd > a)
 {
 	printf("���ź���С��\n");
 	continue;
 }
 else 
 {
 	printf("��ϲ��¶���\n");
 	break;
 }
 } while(rnd < a or rnd > a);
 }

