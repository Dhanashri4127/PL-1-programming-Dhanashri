/*
Program 2; Write a program to make use of baic I/O functions using different data types
Solution 2: User defined values 
*/

#include <stdio.h>

int main() 
{
    int rollnum;
    float per;
    char grade;
    printf("\n Enter Student Roll Number:");
    scanf("%d",&rollnum);
    printf("\n Enter student percentage:");
    scanf("%f",&per);
    printf("\n Enter student grade:");
    scanf(" %c",&grade);

    printf("  Student Information \n");
    printf("\n Roll Number: %d",rollnum);
    printf("\n Percentage:%f",per);
    printf("\n Grade;%c", grade);
    return 0;
}

