#include <stdio.h>
int main(void)
 {
    int a,b,c,f;
 {
 printf("��ӵ�ж���Ǯ\n");
 scanf("%d",&a);
 }
 do
 {
 printf("1 ����4Ԫ   2 ���򻨲�3Ԫ\n��ѡ�����");
 scanf("%d",&b);
 printf("����Ҫ����ƿ");
 scanf("%d",&c);
 if(b==1){
 	printf("��ϲ������%dƿ���֣��㻹ʣ%dԪ\n",c,a-4*c); 
}
 else if(b==2){
 	printf("��ϲ������%dƿ���򻨲裬�㻹ʣ%dԪ\n",c,a-3*c);
}
    printf("���������밴1 �����밴2\n");
    scanf("%d",&f);
}	while(f==1);
    printf("�����˳��Զ��ۻ���"); 
}
