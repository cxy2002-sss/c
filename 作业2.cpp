#include<stdio.h>
/*int main(void)
{
	char coredata[4][5]={{100,95,97,94,98},
	                     {99,92,96,96,100},
						 {92,99,97,80,91},
						 {100,95,100,94,99},
						 };*/
int printf_data(char b[4][5])
{ 
	int i=0,j=0;
	       printf("\t��Ŀһ\t��Ŀ��\t��Ŀ��\t��Ŀ��\t��Ŀ��");
	       for(i=0;i<4;i++)
	       {
			printf("\nͬѧ%d",i+1);
		   for(j=0;j<5;j++)
		   {
			printf("\t%d",b[i][j]);
		   }
	       }return 1;
}
int avg_data(char b[4][5])
{
	int c,k=0;
		   for(k=0;k<5;k++)
		   {
		   	c=b[0][k]+b[1][k]+b[2][k]+b[3][k];
		   	printf("��Ŀ%d��ƽ����Ϊ%d\n",k+1,c/4);
		   }return 2;
}
int chazhao_data(char b[4][5],int c)
{
	int i=0,j=0;
		for(i=0;i<4;i++)
 	      {
 		for(j=0;j<5;j++)
 		   {
		  if(b[i][j]==c)
 			{
 				printf("ͬѧ%d�Ŀ�Ŀ%dΪ100\n",i+1,j+1);//��ά�����0��ʼ������1��2��3��Ϊ0��1��2. 
			 }
			}
	      }return 3;
}
int main(void)
{
	char coredata[4][5]={{100,95,97,94,98},
	                     {99,92,96,96,100},
						 {92,99,97,80,91},
						 {100,95,100,94,99},
						 };
	int a;
	printf("���������ѡ��"); 
	scanf("%d",&a);
	switch(a)
	{
		case 1:printf_data(coredata);break;
		case 2:avg_data(coredata);break;
		case 3:chazhao_data(coredata,100);break;
		default:printf("������������д�");break; 
	}		   
 } 
