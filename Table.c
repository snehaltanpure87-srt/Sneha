#include<stdio.h>

int main() 
{
    int i,j;
    
    for(i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
        
        for(j = 1; j <= 10; j++)
        {
            printf("\n%d", i * j);
        }
        printf("\n");
    }
    
    return 0;
   }
