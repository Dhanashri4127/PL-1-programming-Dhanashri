/*
Program 4: Write a program to calculate the area of the circle.
solution 2 ; User defined values
*/

#include <stdio.h>

int main() 
{
   float radius, area;
   printf("\n Enter the radius of the circle:");
 scanf("%f",&radius);
   area = (3.14*radius*radius);
   printf("\n area of the circle = %f", area);
    return 0;
}

