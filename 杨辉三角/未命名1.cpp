#include<stdio.h>
#define N 10
void setdata(int(*s)[N],int n){int i,j;
for(i=0;i<n;i++)
{ 
s[i][i]=1;s[i][0]=1;
}
for(i=2;i<n;i++){
for(j=1;j<i;j++){
	s[i][j]=s[i-1][j-1]+s[i-1][j];
}
}
}
void outdata(int s[][N],int n){int i,j;
printf("Ñî»ÔÈı½ÇĞÎ£º\n");
for(i=0;i<n;i++){
for(j=0;j<=i;j++){
printf("%6d",s[i][j]); 
}
printf("\n");
}
}
main(){
	int y[N][N],n=7;
	setdata(y,n);
	outdata(y,n);
}
