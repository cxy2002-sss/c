#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int main()
{   int high,wide,xun,c,d,e,x,y,q,w,r,t,move,o,p,cycle,time,cycle2,cycle3,chose;
    x=4;
    y=8;
    cycle3=1;
    printf("星际旅行\n");
    printf("游戏规则：“O>”代表你的飞船，8 5 4 6 代表 上 下 左 右 。\n");
    printf("          “$|”代表陨石，你的飞船撞到了陨石会停下来，停下来后可以调整方向继续飞行。\n");
    printf("          “[]”代表空间站目的地，到达目的地获胜");
    printf("          “#）”代表边界，如果你的飞船到了边界，不会爆炸，\n          但是你再也无法到达空间站了，只能在太空中孤独死去！！\n\n\n");
    do
    {   if(x==20||y==20||x==1||y==1)
        {   printf("你的太空船已经偏离了轨道，你已经不可能再回去了。\n\n不过我好像记得在坐标（1，1）的区域有个太空基地，你可以去那试试。\n");
        }
        if(move==8&&x==16&&y==19)
        {   system("cls");
            printf("恭喜你！到达了空间站！！\n再次游戏按1\n结束游戏按2\n");

            scanf("%d",&chose);
            if(chose==1)
            {   cycle=1;
                cycle2=1;
                x=4;
                y=8;
            }
            if(chose==2)break;
        }
        if(x==1&&y==1)
        {   system("cls");
            printf("恭喜你到达了维修空间站，按 1 修复飞船继续上路。\n按 2 在呆在维修基地，并结束游戏。\n");
            scanf("%d",&chose);
            if(chose==1)
            {   x=4;
                y=8;
                cycle=1;
                cycle2=1;
            }
            if(chose==2)break;
        }
        high=22;//00000000000000000000000000000000000000000000000000最终显示模块
        wide=22;
        for(xun=1; xun<=22; xun++)
        {   printf("#)");
            high=20;
        }
        printf("\n");
        if(y==20)
        {   printf("#)");
            for(xun=2; xun<=x; xun++)printf("  ");
            printf("O>");
            for(xun=3; xun<=(22-x); xun++)
            {   printf("  ");
            }
            printf("#)");
            printf("\n");;
        }
        else
        {   printf("#)                                        #)");    //20
            printf("\n");;
        }
        if(y==19&&x!=16)
        {   printf("#)");
            if(x<7)
            {   for(xun=2; xun<=x; xun++)
                {   printf("  ");
                }
                printf("O>");
                for(xun=2; xun<=7-x; xun++)
                {   printf("  ");
                }
                printf("$|\n");
            }
            if(x>7&&x<16)
            {   for(xun=2; xun<=7; xun++)
                {   printf("  ");
                }
                printf("$|");
                for(xun=2; xun<=x-7; xun++)
                {   printf("  ");
                }
                printf("O>");
                for(xun=2; xun<=16-x; xun++)
                {   printf("  ");
                }
                printf("[]\n");
            }
            if(x>16&&x<19)
            {   printf("             $|               []");
                for(xun=2; xun<=x-16; xun++)
                {   printf("  ");
                }
                printf("O>");
                for(xun=2; xun<=19-x; xun++)
                {   printf("  ");
                }
                printf("$|");
                printf("  #)\n");
            }
            if(x==20&&y==19)
            {   printf("            $|                []    $|O>#)\n");
            }
        }
        else
        {   printf("#)            $|                []    $|  #)");    //19
            printf("\n");;
        }
        if(y==18)
        {   printf("#)");
            if(x==1&&y==18)
            {   printf("O>$|                        $|          #)\n");
            }
            if(x>2&&x<15)
            {   printf("  $|");
                for(xun=2; xun<=x-2; xun++)
                {   printf("  ");
                }
                printf("O>");
                for(xun=2; xun<=15-x; xun++)
                {   printf("  ");
                }
                printf("$|");
                printf("          #)\n");
            }
            if(x>15&&x<21)
            {   printf("  $|                        $|");
                for(xun=2; xun<=x-15; xun++)
                {   printf("  ");
                }
                printf("O>");
                for(xun=1; xun<=20-x; xun++)
                {   printf("  ");
                }
                printf("#)\n");
            }
        }
        else
        {   printf("#)  $|                        $|          #)\n");   //18
        }
        if(y==17)
        {   printf("#)");
            for(xun=2; xun<=x; xun++)printf("  ");
            printf("O>");
            for(xun=3; xun<=(22-x); xun++)
            {   printf("  ");
            }
            printf("#)");
            printf("\n");;
        }
        else
        {   printf("#)                                        #)");    //17
            printf("\n");
        }
        if(y==16)
        {   printf("#)");
            if(x<16)
            {   for(xun=2; xun<=x; xun++)
                {   printf("  ");
                }
                printf("O>");
                for(xun=2; xun<=16-x; xun++)
                {   printf("  ");
                }
                printf("$|");
                printf("        #)\n");
            }
            if(x>16)
            {   printf("                              $|");
                for(xun=2; xun<=x-16; xun++)
                {   printf("  ");
                }
                printf("O>");
                for(xun=1; xun<=20-x; xun++)
                {   printf("  ");
                }
                printf("#)\n");
            }
        }
        else
        {   printf("#)                              $|        #)\n");   //16
        }
        if(y==15)
        {   printf("#)");
            if(x<6)
            {   for(xun=2; xun<=x; xun++)
                {   printf("  ");
                }
                printf("O>");
                for(xun=2; xun<=6-x; xun++)
                {   printf("  ");
                }
                printf("$|");
                printf("                            #)\n");
            }
            if(x>6)
            {   printf("          $|");
                for(xun=2; xun<=x-6; xun++)
                {   printf("  ");
                }
                printf("O>");
                for(xun=1; xun<=20-x; xun++)
                {   printf("  ");
                }
                printf("#)\n");
            }
        }
        else
        {   printf("#)          $|                            #)\n");   //15
        }
        if(y==14)
        {   printf("#)");
            for(xun=2; xun<=x; xun++)printf("  ");
            printf("O>");
            for(xun=3; xun<=(22-x); xun++)
            {   printf("  ");
            }
            printf("#)");
            printf("\n");
        }
        else
        {   printf("#)                                        #)");    //14
            printf("\n");
        }
        if(y==13)
        {   printf("#)");
            for(xun=2; xun<=x; xun++)printf("  ");
            printf("O>");
            for(xun=3; xun<=(22-x); xun++)
            {   printf("  ");
            }
            printf("#)");
            printf("\n");
        }
        else
        {   printf("#)                                        #)");    //13
            printf("\n");
        }
        if(y==12)
        {   printf("#)");
            for(xun=2; xun<=x; xun++)printf("  ");
            printf("O>");
            for(xun=3; xun<=(22-x); xun++)
            {   printf("  ");
            }
            printf("#)");
            printf("\n");
        }
        else
        {   printf("#)                                        #)");    //12
            printf("\n");
        }
        if(y==11)
        {   printf("#)");
            for(xun=2; xun<=x; xun++)printf("  ");
            printf("O>");
            for(xun=3; xun<=(22-x); xun++)
            {   printf("  ");
            }
            printf("#)");
            printf("\n");
        }
        else
        {   printf("#)                                        #)");    //11
            printf("\n");
        }
        if(y==10)
        {   printf("#)");
            for(xun=2; xun<=x; xun++)printf("  ");
            printf("O>");
            for(xun=3; xun<=(22-x); xun++)
            {   printf("  ");
            }
            printf("#)");
            printf("\n");
        }
        else
        {   printf("#)                                        #)");    //10
            printf("\n");
        }
        if(y==9)
        {   printf("#)");
            for(xun=2; xun<=x; xun++)printf("  ");
            printf("O>");
            for(xun=3; xun<=(22-x); xun++)
            {   printf("  ");
            }
            printf("#)");
            printf("\n");
        }
        else
        {   printf("#)                                        #)");    //9
            printf("\n");
        }
        if(y==8)
        {   printf("#)");
            if(x<17)
            {   for(xun=2; xun<=x; xun++)
                {   printf("  ");
                }
                printf("O>");
                for(xun=2; xun<=17-x; xun++)
                {   printf("  ");
                }
                printf("$|");
                printf("      #)\n");
            }
            if(x>17)
            {   printf("                                $|");
                for(xun=2; xun<=x-17; xun++)
                {   printf("  ");
                }
                printf("O>");
                for(xun=1; xun<=20-x; xun++)
                {   printf("  ");
                }
                printf("#)\n");
            }
        }
        else
        {   printf("#)                                $|      #)\n");   //8
        }
        if(y==7)
        {   printf("#)");
            for(xun=2; xun<=x; xun++)printf("  ");
            printf("O>");
            for(xun=3; xun<=(22-x); xun++)
            {   printf("  ");
            }
            printf("#)");
            printf("\n");
        }
        else
        {   printf("#)                                        #)");    //7
            printf("\n");
        }
        if(y==6)
        {   printf("#)");
            for(xun=2; xun<=x; xun++)printf("  ");
            printf("O>");
            for(xun=3; xun<=(22-x); xun++)
            {   printf("  ");
            }
            printf("#)");
            printf("\n");
        }
        else
        {   printf("#)                                        #)");    //6
            printf("\n");
        }
        if(y==5)
        {   printf("#)");
            for(xun=2; xun<=x; xun++)printf("  ");
            printf("O>");
            for(xun=3; xun<=(22-x); xun++)
            {   printf("  ");
            }
            printf("#)");
            printf("\n");
        }
        else
        {   printf("#)                                        #)");    //5
            printf("\n");
        }
        if(y==4)
        {   printf("#)");
            for(xun=2; xun<=x; xun++)printf("  ");
            printf("O>");
            for(xun=3; xun<=(22-x); xun++)
            {   printf("  ");
            }
            printf("#)");
            printf("\n");
        }
        else
        {   printf("#)                                        #)");    //4
            printf("\n");
        }
        if(y==3)
        {   printf("#)");
            if(x<20)
            {   for(xun=2; xun<=x; xun++)
                {   printf("  ");
                }
                printf("O>");
                for(xun=2; xun<=20-x; xun++)
                {   printf("  ");
                }
                printf("$|#)\n");
            }
        }
        else
        {   printf("#)                                      $|#)\n");   //3
        }
        if(y==2)
        {   printf("#)");
            if(x<3)
            {   for(xun=2; xun<=x; xun++)
                {   printf("  ");
                }
                printf("O>");
                for(xun=2; xun<=3-x; xun++)
                {   printf("  ");
                }
                printf("$|");
                printf("                                #)\n");
            }
            if(x>3)
            {   printf("    $|");
                for(xun=2; xun<=x-3; xun++)
                {   printf("  ");
                }
                printf("O>");
                for(xun=1; xun<=20-x; xun++)
                {   printf("  ");
                }
                printf("#)\n");
            }
        }
        else
        {   printf("#)    $|                                  #)\n");   //2
        }
        if(y==1)
        {   printf("#)");
            for(xun=2; xun<=x; xun++)printf("  ");
            printf("O>");
            for(xun=3; xun<=(22-x); xun++)
            {   printf("  ");
            }
            printf("#)");
            printf("\n");
        }
        else
        {   printf("#)                                        #)");    //1
            printf("\n");
        }
        for(xun=1; xun<=22; xun++)printf("#)");
        cycle=1;
        cycle2=1;


        if(chose==2)
        {   cycle=-1;
            cycle2=-1;
            cycle3=-1;
            move=6;
            system("cls");
        }
        do//方向输入控制模块 从这里开始循环 
        {   scanf("%d",&move);//输入方向键 
            if(move!=6&&move!=4&&move!=5&&move!=8||move==5&&x==20&&y==4||move==4&&x==4&&y==2||move==8&&x==20&&y==2||move==6&&x==16&&y==8||move==4&&x==16&&y==18||move==6&&x==14&&y==18||x==19&&y==18&&move==8||x==19&&y==3&&move==6||move==8&&y==15&&x==16||move==4&&x==7&&y==15||move==5&&x==3&&y==3||move==8&&x==7&&y==18||move==4&&x==3&&y==18)
            {   printf("不能往那边飞了！！\n");
            }
            else cycle2=-1;//如果判断撞墙  则结束循环 
        }
        while(cycle2>-1);
        cycle2=1;
        do
        {   if(move==6&&x<20||move==4&&x>1||move==5&&y>1||move==8&&y<20)
            {   cycle2=-1;
            }
        }
        while(cycle2>0);
        do
        {
            {   system("cls");
                high=22;
                wide=22;
                for(xun=1; xun<=22; xun++)
                {   printf("#)");
                    high=20;
                }
                printf("\n");
                if(y==20)
                {   printf("#)");
                    for(xun=2; xun<=x; xun++)printf("  ");
                    printf("O>");
                    for(xun=3; xun<=(22-x); xun++)
                    {   printf("  ");
                    }
                    printf("#)");
                    printf("\n");;
                }
                else
                {   printf("#)                                        #)");    //20
                    printf("\n");;
                }
                if(y==19)
                {   printf("#)");
                    if(x<7)
                    {   for(xun=2; xun<=x; xun++)
                        {   printf("  ");
                        }
                        printf("O>");
                        for(xun=2; xun<=7-x; xun++)
                        {   printf("  ");
                        }
                        printf("$|\n");
                    }
                    if(x>7&&x<16)
                    {   for(xun=2; xun<=7; xun++)
                        {   printf("  ");
                        }
                        printf("$|");
                        for(xun=2; xun<=x-7; xun++)
                        {   printf("  ");
                        }
                        printf("O>");
                        for(xun=2; xun<=16-x; xun++)
                        {   printf("  ");
                        }
                        printf("[]\n");
                    }
                    if(x>16&&x<19)
                    {   printf("             $|               []");
                        for(xun=2; xun<=x-16; xun++)
                        {   printf("  ");
                        }
                        printf("O>");
                        for(xun=2; xun<=19-x; xun++)
                        {   printf("  ");
                        }
                        printf("$|");
                        printf("  #)\n");
                    }
                    if(x==20&&y==19)
                    {   printf("            $|                []    $|O>#)\n");
                    }
                }
                else
                {   printf("#)            $|                []    $|  #)");    //19
                    printf("\n");;
                }
                if(y==18)
                {   printf("#)");
                    if(x==1&&y==18)
                    {   printf("O>$|                        $|          #)\n");
                    }
                    if(x>2&&x<15)
                    {   printf("  $|");
                        for(xun=2; xun<=x-2; xun++)
                        {   printf("  ");
                        }
                        printf("O>");
                        for(xun=2; xun<=15-x; xun++)
                        {   printf("  ");
                        }
                        printf("$|");
                        printf("          #)\n");
                    }
                    if(x>15&&x<21)
                    {   printf("  $|                        $|");
                        for(xun=2; xun<=x-15; xun++)
                        {   printf("  ");
                        }
                        printf("O>");
                        for(xun=1; xun<=20-x; xun++)
                        {   printf("  ");
                        }
                        printf("#)\n");
                    }
                }
                else
                {   printf("#)  $|                        $|          #)\n");   //18
                }
                if(y==17)
                {   printf("#)");
                    for(xun=2; xun<=x; xun++)printf("  ");
                    printf("O>");
                    for(xun=3; xun<=(22-x); xun++)
                    {   printf("  ");
                    }
                    printf("#)");
                    printf("\n");;
                }
                else
                {   printf("#)                                        #)");    //17
                    printf("\n");
                }
                if(y==16)
                {   printf("#)");
                    if(x<16)
                    {   for(xun=2; xun<=x; xun++)
                        {   printf("  ");
                        }
                        printf("O>");
                        for(xun=2; xun<=16-x; xun++)
                        {   printf("  ");
                        }
                        printf("$|");
                        printf("        #)\n");
                    }
                    if(x>16)
                    {   printf("                              $|");
                        for(xun=2; xun<=x-16; xun++)
                        {   printf("  ");
                        }
                        printf("O>");
                        for(xun=1; xun<=20-x; xun++)
                        {   printf("  ");
                        }
                        printf("#)\n");
                    }
                }
                else
                {   printf("#)                              $|        #)\n");   //16
                }
                if(y==15)
                {   printf("#)");
                    if(x<6)
                    {   for(xun=2; xun<=x; xun++)
                        {   printf("  ");
                        }
                        printf("O>");
                        for(xun=2; xun<=6-x; xun++)
                        {   printf("  ");
                        }
                        printf("$|");
                        printf("                            #)\n");
                    }
                    if(x>6)
                    {   printf("          $|");
                        for(xun=2; xun<=x-6; xun++)
                        {   printf("  ");
                        }
                        printf("O>");
                        for(xun=1; xun<=20-x; xun++)
                        {   printf("  ");
                        }
                        printf("#)\n");
                    }
                }
                else
                {   printf("#)          $|                            #)\n");   //15
                }
                if(y==14)
                {   printf("#)");
                    for(xun=2; xun<=x; xun++)printf("  ");
                    printf("O>");
                    for(xun=3; xun<=(22-x); xun++)
                    {   printf("  ");
                    }
                    printf("#)");
                    printf("\n");
                }
                else
                {   printf("#)                                        #)");    //14
                    printf("\n");
                }
                if(y==13)
                {   printf("#)");
                    for(xun=2; xun<=x; xun++)printf("  ");
                    printf("O>");
                    for(xun=3; xun<=(22-x); xun++)
                    {   printf("  ");
                    }
                    printf("#)");
                    printf("\n");
                }
                else
                {   printf("#)                                        #)");    //13
                    printf("\n");
                }
                if(y==12)
                {   printf("#)");
                    for(xun=2; xun<=x; xun++)printf("  ");
                    printf("O>");
                    for(xun=3; xun<=(22-x); xun++)
                    {   printf("  ");
                    }
                    printf("#)");
                    printf("\n");
                }
                else
                {   printf("#)                                        #)");    //12
                    printf("\n");
                }
                if(y==11)
                {   printf("#)");
                    for(xun=2; xun<=x; xun++)printf("  ");
                    printf("O>");
                    for(xun=3; xun<=(22-x); xun++)
                    {   printf("  ");
                    }
                    printf("#)");
                    printf("\n");
                }
                else
                {   printf("#)                                        #)");    //11
                    printf("\n");
                }
                if(y==10)
                {   printf("#)");
                    for(xun=2; xun<=x; xun++)printf("  ");
                    printf("O>");
                    for(xun=3; xun<=(22-x); xun++)
                    {   printf("  ");
                    }
                    printf("#)");
                    printf("\n");
                }
                else
                {   printf("#)                                        #)");    //10
                    printf("\n");
                }
                if(y==9)
                {   printf("#)");
                    for(xun=2; xun<=x; xun++)printf("  ");
                    printf("O>");
                    for(xun=3; xun<=(22-x); xun++)
                    {   printf("  ");
                    }
                    printf("#)");
                    printf("\n");
                }
                else
                {   printf("#)                                        #)");    //9
                    printf("\n");
                }
                if(y==8)
                {   printf("#)");
                    if(x<17)
                    {   for(xun=2; xun<=x; xun++)
                        {   printf("  ");
                        }
                        printf("O>");
                        for(xun=2; xun<=17-x; xun++)
                        {   printf("  ");
                        }
                        printf("$|");
                        printf("      #)\n");
                    }
                    if(x>17)
                    {   printf("                                $|");
                        for(xun=2; xun<=x-17; xun++)
                        {   printf("  ");
                        }
                        printf("O>");
                        for(xun=1; xun<=20-x; xun++)
                        {   printf("  ");
                        }
                        printf("#)\n");
                    }
                }
                else
                {   printf("#)                                $|      #)\n");   //8
                }
                if(y==7)
                {   printf("#)");
                    for(xun=2; xun<=x; xun++)printf("  ");
                    printf("O>");
                    for(xun=3; xun<=(22-x); xun++)
                    {   printf("  ");
                    }
                    printf("#)");
                    printf("\n");
                }
                else
                {   printf("#)                                        #)");    //7
                    printf("\n");
                }
                if(y==6)
                {   printf("#)");
                    for(xun=2; xun<=x; xun++)printf("  ");
                    printf("O>");
                    for(xun=3; xun<=(22-x); xun++)
                    {   printf("  ");
                    }
                    printf("#)");
                    printf("\n");
                }
                else
                {   printf("#)                                        #)");    //6
                    printf("\n");
                }
                if(y==5)
                {   printf("#)");
                    for(xun=2; xun<=x; xun++)printf("  ");
                    printf("O>");
                    for(xun=3; xun<=(22-x); xun++)
                    {   printf("  ");
                    }
                    printf("#)");
                    printf("\n");
                }
                else
                {   printf("#)                                        #)");    //5
                    printf("\n");
                }
                if(y==4)
                {   printf("#)");
                    for(xun=2; xun<=x; xun++)printf("  ");
                    printf("O>");
                    for(xun=3; xun<=(22-x); xun++)
                    {   printf("  ");
                    }
                    printf("#)");
                    printf("\n");
                }
                else
                {   printf("#)                                        #)");    //4
                    printf("\n");
                }
                if(y==3)
                {   printf("#)");
                    if(x<20)
                    {   for(xun=2; xun<=x; xun++)
                        {   printf("  ");
                        }
                        printf("O>");
                        for(xun=2; xun<=20-x; xun++)
                        {   printf("  ");
                        }
                        printf("$|#)\n");
                    }
                }
                else
                {   printf("#)                                      $|#)\n");   //3
                }
                if(y==2)
                {   printf("#)");
                    if(x<3)
                    {   for(xun=2; xun<=x; xun++)
                        {   printf("  ");
                        }
                        printf("O>");
                        for(xun=2; xun<=3-x; xun++)
                        {   printf("  ");
                        }
                        printf("$|");
                        printf("                                #)\n");
                    }
                    if(x>3)
                    {   printf("    $|");
                        for(xun=2; xun<=x-3; xun++)
                        {   printf("  ");
                        }
                        printf("O>");
                        for(xun=1; xun<=20-x; xun++)
                        {   printf("  ");
                        }
                        printf("#)\n");
                    }
                }
                else
                {   printf("#)    $|                                  #)\n");   //2
                }
                if(y==1)
                {   printf("#)");
                    for(xun=2; xun<=x; xun++)printf("  ");
                    printf("O>");
                    for(xun=3; xun<=(22-x); xun++)
                    {   printf("  ");
                    }
                    printf("#)");
                    printf("\n");
                }
                else
                {   printf("#)                                        #)");    //1
                    printf("\n");
                }
                for(xun=1; xun<=22; xun++)printf("#)");
                if(move==8)y=y+1;
                if(move==5)y=y-1;
                if(move==4)x=x-1;
                if(move==6)x=x+1;
                if(move==6&&x==14&&y==18||x==19&&y==3&&move==6||y==8&&x==16&&move==6||x==20&&move==6)
                {   cycle=-1;
                }
                if(move==4&&x==4&&y==2||move==4&&x==16&&y==18||move==4&&x==3&&y==18||y==15&&x==7&move==4||x==1&&move==4)
                {   cycle=-1;
                }
                if(x==19&&y==18&&move==8||move==8&&x==20&&y==2||x==7&&y==18&&move==8||x==16&&y==15&&move==8||y==20&&move==8)
                {   cycle=-1;
                }
                if(move==5&&x==3&&y==3||move==5&&x==20&&y==4||y==1&&move==5)
                {   cycle=-1;
                }
                if(move==8&&x==16&&y==19)
                {   cycle=-1;
                }
                if(x==16&&y==19)cycle=-1;
                printf("\n");
            }
            Sleep(time);
        }
        while(cycle>0);
        system("cls");
    }
    while(cycle3>0);
}
