#include<stdio.h>
int main()
{
  int a=21;
  int num;
  printf("\n Please Enter the Maximum num Value : ");
  scanf("%d", &num);
  printf("The odd numbers in the list are");
  while( a <= num)
    {
  	 printf("%d \t ",a);
     a=a+2;

    }
}

