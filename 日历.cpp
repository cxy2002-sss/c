#include<stdio.h>
int main(void)
{
	int data=1;
	int num=0;
	int year,month,yeardays,day;
	int a=0,b=0,c=0,e,f,i=0,j=0,k=0;
	printf("输入年份");
	scanf("%d",&year);
	printf("输入月份");
	scanf("%d",&month);
	if((year%4==0 && year%100!=0) || year%400==0)
	{
		num=1;
	}
	a=year-1900;
    if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
	 {
	 	day=31;
	 }
	else if(num==1 && month==2)
	 {
	 	day=29;
	 }
	else if(num==0 && month==2)
	 {
	 	day=28;
	 }
	if(month==4||month==6||month==9||month==11)
	 {
	 	day=30;
	 } 
	 a=year-1900;
	for(b=0;b<a;b++)
	{
		if((b%4==0 && b%100!=0) || b%400==0)
		{
			yeardays=yeardays+366;
		}
		else
		{
			yeardays=yeardays+365;
		}
	 } 
    for(e=1;e<month;e++)
    {
    	if(e==1 || e==3 || e==5 || e==7 || e==8 || e==10 || e==12)
    	{
    		yeardays=yeardays+31;
		}
		else if(num==1 && e==2)
		{
			yeardays=yeardays+29;
		}
		else if(num==0 && e==2)
		{
			yeardays=yeardays+28;
		}
		if(e==4||e==6||e==9||e==11)
		{
			yeardays=yeardays+30;
		}
	}
	 c=yeardays%7;
	 int d=c;
	 printf("%d年%d月\n",year,month);
	 printf("一\t二\t三\t四\t五\t六\t日\n");
     /*for(i=0;i<(c+day)/7+1;i++)
     {
     	for(j=0;j<c;j++)
     	{
     		if(c!=0)
     		{
     			printf("\t");
			 }

		 }
		 for(k=0;k<7-c;k++)
		 {
		 	printf("%d\t",data);
		 	data++;
		 	if(data>day)
		 	{
		 		break;
			 }
		 }
		 c=0;*/
		 //printf("%d",yeardays);
		 for(i=0;i<c;i++)
		 {
		 	printf("\t");
		 }
		 for(j=0;j<day;j++)
		 {
		 	printf("%d\t",data);
		 	data++;
		 if((c+data-1)%7==0)
		 {
		 	printf("\n");
		 } 
		 	if(data>day)
		 	{
		 		break;
			 }
		 }

	 }
