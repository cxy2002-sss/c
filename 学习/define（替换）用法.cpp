#include <stdio.h>
#define N 10
#define s(x)  x*x
#define f(x)  (x*x)

int main(void)
{
   int a=0,b=0;
   a=1000/s(N);
   b=1000/f(N);
   printf("a=%d,b=%d\n",a,b);
 } 
