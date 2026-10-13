#include<stdio.h>
void main()
{
        int num,i,sum=0;
        printf("Enter the Number=");
        scanf("%d",&num);
          
          for(i=1;i<num;i++)
   {
          if(num%i==0)
      {  
          sum=sum+i;
      }
   }
        if(sum==num)
        printf("Number is a perfect.");
        else
        printf("Number is not perfect");



}
