#include <stdio.h>
void main()
{
  int num;
  
  printf("Enter a Num:");
  scanf("%d",&num);
  
  (num%2==0)?printf("The number is Even\n"):
             printf("The number is not Odd");
             
} 
