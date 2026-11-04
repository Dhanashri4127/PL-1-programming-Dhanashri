/*
Program 8: Write a program to swap 2 numbers using a temporary variable
Solution 2: Pre Defined Values
*/


#include <stdio.h>

int main() 
{
   int a,b, temp;
    printf("\n Enter First Number:");
    scanf("%d",&a);
    printf("\n Enter Second Number:");
    scanf("%d",&b);

   temp=a;
   a=b;
   b=temp;

   printf("\n After swapping:");
   printf("\n First Number=%d \n",a);
   printf("\n second Number=%d \n",b);

    return 0;
}

