#define _CRT_SECURE_NO_WARNINGS  
#include<stdio.h>  
#include<stdlib.h>  
#include<time.h>  
void game()  
{  
    int ret = 0;  
    int num = 0;  
    int i = 0;  
    srand((unsigned)time(NULL));//初始化随机数发生器  
    ret = rand() % 101;  
  //printf("%d",ret);  
    printf("好了，猜数开始！\n");  
      
    for (i = 0;i < 9;i++) {  
        scanf("%d",&num);  
        if (num < ret)  
        {  
            printf("猜小了，请继续\n");  
            continue;  
        }  
        else if (num > ret)  
        {  
            printf("猜大了，请继续\n");  
            continue;  
        }  
        else  
        {  
            printf("恭喜你，猜对了\n");  
            break;  
}  
    }  
    if (i == 9)  
    {  
        printf("很遗憾，游戏失败！");  
    }  
}  
int main()  
{  
    int choose = 0;  
    int i = 0;  
    printf("是否要进入猜数游戏？(输入1为进入游戏，输入2为不进入)\n");  
    scanf("%d",&choose);  
    switch (choose)  
    {  
    case 1:game();  
        break;  
    case 2:exit(0);  
        break;  
    default:printf("输错了哦");break;  
    }  
    L:system("pause");  
    system("cls");  
    printf("是否需要继续游戏？按1进入，任意键退出");  
    scanf("%d",&i);  
    if (i == 1)  
        game();  
    else exit(0);  
 goto L;  
    system("pause");  
    return 0;  
}  
