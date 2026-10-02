#include<stdio.h>

void main() 
{
float length, breadth, height;
float surface_area, volume;
printf("Enter the length : ");
scanf("%f", &length);
printf("Enter the breadth : ");
scanf("%f", &breadth);
printf("Enter the height : ");
scanf("%f", &height);
surface_area = 2 * (length * breadth + breadth * height + height * length);
volume = length * breadth * height;
printf("SurfaceArea:=%f\n", surface_area);
printf("Volume:=%f\n", volume);
}
    
