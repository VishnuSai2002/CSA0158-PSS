#include <stdio.h>

int main()
{
  int a=20;
  int sum=0;
  int num;
  printf("\n Please Enter the Maximum num Value : ");
  scanf("%d", &num);
  printf("The even  numbers in the list are");
  while( a <= num)
    {
  	 printf("%d \t ",a);
  	 sum = sum + a;

     a=a+2;

    }

  printf("Sum of all even  numbers  = %d \n", sum);
}
