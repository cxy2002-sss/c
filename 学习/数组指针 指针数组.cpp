#include<stdio.h>
int main(void)
{
	//ָ������ 
	char string[3][11]={"������","guojilong","shunkangyi"};
	char*p[3]={0};//����ָ�����   û��3����ָ���������������������ָ�������һ���Ϊһ�����飬��ָ������ 
	for(int i=0;i<3;i++)
	{
		p[i]= string[i];
		printf("%s\n",p[i]);
	 } 
    //����ָ�� 
	//char string[3][11]={"������","guojilong","shunkangyi"};
    char (*pdata)[11];//*pdata������pdata[i] 
    char i=0;
    pdata = string;//����������ȾͰ�string��ֵ������pdata 
    for(i=0;i<3;i++)
    {
    	printf("%s\n",*pdata);
    	pdata++;//�����pdata++��������pdata[i]��i��1 
	}
 } 
