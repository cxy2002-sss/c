#include<stdio.h>
/*����������ȫ�ֱ���*/
float data1 =0 , data2=0;
float result = 0 ;
/*���*/
void sum() 
{
	result = data1 + data2 ;
}
/*����*/
void sub() 
{
	result = data1 - data2 ;
}
/*�˷�*/
void mul() 
{
	result = data1 * data2 ;
}
/*����*/
void div() 
{
	result = data1 * data2 ;
}

int main()
{
	int b; 
	do
	{ 
    int select_num = 0 ;    // ֵΪ1 2 3 4 ʱ�ֱ�Ϊ�Ӽ��˳�
    printf("�������������ݣ�");
    scanf("%f", &data1) ;
    scanf("%f", &data2) ;
	printf("��������Ҫ��Ӧ����1�ӣ�2����3�ˣ�4������ѡ��");
    scanf("%d", &select_num) ;
switch(select_num)
    {
    case 1:
    sum();
    break;
    case 2:
    sub();
    break;
    case 3:
    mul();
    break;
    case 4:
    div();
    break;
    default:printf("����������\n"); 
}
    printf("������Ϊ %f\n�Ƿ�����������밴1�������밴2\n", result);

	scanf("%d",&b);
}
    while(b==1);
}





