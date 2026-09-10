#include<stdio.h>
void main()
{
int x,Tax;
printf("Enter the annual salary:");
scanf("%d",&x);
if(x<150000)
{
printf("Tax=0");
}
else if(150000<=300000)
{
printf("Tax=20%");
}
else if(x>300000)
{
printf("Tax=30%");
}
}
