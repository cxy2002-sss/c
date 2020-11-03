#include <stdio.h>
int main(void)
 {
    int a,b,c,f;
 {
 printf("你拥有多少钱\n");
 scanf("%d",&a);
 }
 do
 {
 printf("1 可乐4元   2 茉莉花茶3元\n你选择的是");
 scanf("%d",&b);
 printf("你需要购买几瓶");
 scanf("%d",&c);
 if(b==1){
 	printf("恭喜你买了%d瓶可乐，你还剩%d元\n",c,a-4*c); 
}
 else if(b==2){
 	printf("恭喜你买了%d瓶茉莉花茶，你还剩%d元\n",c,a-3*c);
}
    printf("继续购买请按1 结束请按2\n");
    scanf("%d",&f);
}	while(f==1);
    printf("您以退出自动售货机"); 
}
