#include<stdio.h>
int fib(int n)
{
  if (n<=1)
   return n;
  return fib(n-1)+(n-2);
}
int main()
{
int num,n=0,i;
printf("enter the number of terms:");
scanf("5d",&num);
for(i=1;i<=num;i++)
{
printf("%d\n",fib(n));
n++;
}
}
