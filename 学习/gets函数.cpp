#include<stdio.h>
int main(void)
{
	char a[10]="\0";
	char *gets(char *a) ;
	printf("������Ҫ���ҵĵ���:") ;
	gets(a); 
	char str[1000]={"\0"};
	char *gets(char *str) ;
	printf("�������ַ���:"); 
	gets(str); 
	/*int b,i=0;
	while(str[i]!='\0')
	{
		if(str[i]=='a')
		{
			i++;
			b++;
		}
		else
		{
			b--;
		}
	}
	printf("%d",b);*/ 
	printf("%s",str);

}
