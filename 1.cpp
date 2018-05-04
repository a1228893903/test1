#include<stdio.h>

int add(int a, int b, int c)
{
   return a + b + c;
}

int main()
{
   int m = add(1,2,3);
   printf("%d\n",m);
   return 0 ;
}