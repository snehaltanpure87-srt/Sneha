#include<stdio.h>
void main()
{
  int n,i,sum=0;
  printf("Enter Limit:");
  scanf("%d",&n);
   i=1;
   while(i<=n)
   {
    sum=sum+i;
    i++;
   }
     printf("Sum of First to n numbers %d", sum);
}
