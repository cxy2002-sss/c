#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void)
{
	srand(time(0));
	int a=0;
	int rnd = (rand() % 50) + 1;

 

 printf("游戏开始\n");
 do
 {
 	scanf("%d",&a);
 if (rnd < a)
 {
 	printf("很遗憾猜大了\n");
 	continue;
 }
 else if (rnd > a)
 {
 	printf("很遗憾猜小了\n");
 	continue;
 }
 else 
 {
 	printf("恭喜你猜对了\n");
 	break;
 }
 } while(rnd < a or rnd > a);
 }

