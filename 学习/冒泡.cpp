#include <stdio.h>
int main(){
	char a[10] = {68, 98, 50, 80, 60, 96, 89, 47, 88, 90}, i, j, t;
	int length = sizeof(a)/sizeof(a[0]);//sizeof() 是一个判断数据类型或者表达式长度的运算符 
	for(i = 0; i < length - 1; i++){
		for(j = 0; j < length - 1 - i; j++){
			if(a[j] > a[j+1]){
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	for(i = 0; i < length; i++){
		printf("a[%d] = %d\n", i, a[i]);
	}
	return 0;
}
