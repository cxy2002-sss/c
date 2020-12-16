#include <stdio.h>
int main(void)
{
    int var=0;
    printf("请输入var的值为1 2 3 4，其他数据无效：");
    scanf("%d",&var);
    switch(var)
    {
	
    case 1:
    	printf("你输入的数据有效，为1\n");
    	break;
    case 2:
    		printf("你输入的数据有效，为2\n");
    	break;
    case 3:
    		printf("你输入的数据有效，为3\n");
    	break;
    case 4:
    		printf("你输入的数据有效，为1\n");
    	break;
        default:printf("你输入的数据无效");
}

/*
    if(1<=var&&var<=4)
    {
    	printf("你输入的数据有效,数据为%d",var); 
	}
	else 
	{
		printf("你输入的数据无效");
	}*/
}

