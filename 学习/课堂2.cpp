#include <stdio.h>
int main(void)
{
    int var=0;
    printf("������var��ֵΪ1 2 3 4������������Ч��");
    scanf("%d",&var);
    switch(var)
    {
	
    case 1:
    	printf("�������������Ч��Ϊ1\n");
    	break;
    case 2:
    		printf("�������������Ч��Ϊ2\n");
    	break;
    case 3:
    		printf("�������������Ч��Ϊ3\n");
    	break;
    case 4:
    		printf("�������������Ч��Ϊ1\n");
    	break;
        default:printf("�������������Ч");
}

/*
    if(1<=var&&var<=4)
    {
    	printf("�������������Ч,����Ϊ%d",var); 
	}
	else 
	{
		printf("�������������Ч");
	}*/
}

