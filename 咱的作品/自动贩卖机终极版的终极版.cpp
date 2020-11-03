#include<stdio.h>
#include<stdlib.h>
int main()
{   printf("1 雪碧￥3\t2 可口可乐￥3\t3 阿萨姆奶茶￥5\n4 加多宝￥4\t5 矿泉水￥1\t6 82年拉菲￥8000");
    printf("\n\n");
    int money,pay,a,chose,chose2,z,chose3,end,chose4;
    a=-1;
    money=0;
    do
    {   printf("投完币再买！\n投完币再买！\n投完币再买！\n");
        printf("输入 1 投币1元\n输入 2 投币5元\n输入 3 投币10元\n");
        printf("输入 4 撒完币了,开始买影尿\n(投完了再买，不然的话就只能退币了)\n");
        scanf("%d",&pay);
        if(pay>4||pay<1)printf("十块钱不够大想投一百的？不好意思，不行！\n");
        if(pay==1)money=money+1;
        if(pay==2)money=money+5;
        if(pay==3)money=money+10;
        if(pay==4)a=5;
         system("cls");
        printf("你现在投了 %d 元\n\n",money);
        printf("####################################\n\n");
        if(money==0)printf("投了个寂寞？\n");
    }
    while(a<0);
    if(money<3&&money>0)printf("穷鬼，喝你的矿泉水去吧！\n");
    if(money>=100)
    {   printf("老板这么有钱！\n");
        printf("那你现在想喝点啥子？\n");
    }
    do
    {   z=-1;
        printf("1 雪碧￥3\t2 可口可乐￥3\t3 阿萨姆奶茶￥5\n4 加多宝￥4\t5 矿泉水￥1\t6 82年拉菲￥8000\n按 0 就买完了\n");
        printf("还有%d块钱\n",money);
        printf("那哀家就要:");
        scanf("%d",&chose); 
		system("cls");
        printf("############################\n\n");
        if(chose==1||chose==2)
        {   if(money>=3)money=money-3;
            else
            {   printf("钱不够，你在想屁吃！！\n\n\n##############################\n");
                printf("那你要不要再投币嘞？\n1 要\n2 不用，我没钱\n##############################\n");
              	system("cls");
				scanf("%d",&chose3);
                if(chose3==1)printf("投个屁！前面说的那么清楚，投完再买！！哼！退币重新投吧！\n");
                if(chose3==2)printf("我就知道你没钱，呼呼哈哈哈！！\n");
            system("cls");
		    }
        }
        if(chose==3)
        {   if(money>=5)money=money-5;
            else
            {   printf("钱不够，你在想屁吃！！\n\n\n##############################\n");
                printf("那你要不要再投币嘞？\n1 要\n2 不用，我没钱\n##############################\n");
                scanf("%d",&chose3);
                if(chose3==1)printf("投个屁！前面说的那么清楚，投完再买！！哼！退币重新投吧！\n");
                if(chose3==2)printf("我就知道你没钱，呼呼哈哈哈！！\n");
            }
        }
        if(chose==4)
        {   if(money>=4)money=money-4;
            else
            {   printf("钱不够，你在想屁吃！！\n\n\n##############################\n");
                printf("那你要不要再投币嘞？\n1 要\n2 不用，我没钱\n##############################\n");
                scanf("%d",&chose3);
                if(chose3==1)printf("投个屁！前面说的那么清楚，投完再买！！哼！退币重新投吧！\n");
                if(chose3==2)printf("我就知道你没钱，呼呼哈哈哈！！\n");
            }
        }
        if(chose==5)
        {   printf("娘炮才喝矿泉水！真男人都干八二年的拉菲！！\n") ;
            if(money>=1)money=money-1;
            else
            {
                printf("矿泉水都买不起，你连屁都没得吃！！\n\n\n##############################\n");
                printf("那你要不要再投币嘞？\n1 要\n2 不用，我没钱\n##############################\n");
                scanf("%d",&chose3);
                if(chose3==1)printf("投个屁！前面说的那么清楚，投完再买！！哼！退币重新投吧！\n");
                if(chose3==2)printf("我就知道你没钱，呼呼哈哈哈！！\n");
            }
        }
        if(chose==6)
        {   if(money>=8000)
            {   money=money-8000;
                printf("按八百多下，您真是个狼灭！！\n");
            }
            else
            {   printf("这点钱想买拉菲？你在想屁吃！！\n##############################\n");
                printf("那你要不要再投币嘞？\n1 要\n2 不用，我没钱\n##############################\n");
                scanf("%d",&chose3);
                if(chose3==1)printf("投个屁！前面说的那么清楚，投完再买！！哼！退币重新投吧！\n");
                if(chose3==2)printf("我就知道你没钱，呼呼哈哈哈！！\n");
                printf("等一下！我还有一张瑞士银行的白金VIP会员信用卡\n");
                printf("哦豁！大佬啊！那您要刷卡吗？\n");
                printf("1   要  \n2 不要\n");
                scanf("%d",&chose4);
                	system("cls");
                if(chose4==1)printf("你在梦游呢？！\n还白金会员，我看你就是个塑料！！\n");
                if(chose4==2)printf("白金会员拉菲都不来一瓶。我看你这卡是拼多多买的吧！！\n");
            }
        }
        if(chose==0)z=1;
    }
    while(z<0) ;
    if(money>0)
    {   printf("给你找零%d元\n",money);
        printf("欢迎下次再来！！！");
    }
    if(money==1)printf("就一块钱了啊！哎！真可怜！\n");
    if(money==0)printf("兄弟，没钱了？拜拜了您嘞！\n");
}
