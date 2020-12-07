/*Write a C program to input angles of a triangle and check whether triangle is valid or not.*/

#include <stdio.h>

int main() 
{
    int a1 , a2 , a3;
    printf ("enter first angle in degrees - ");
    scanf ("%d" , &a1);
    printf ("enter second angle in degrees - ");
    scanf ("%d" , &a2);
     printf ("enter third angle in degrees - ");
    scanf ("%d" , &a3);
    
    if (a1+a2+a3 == 180)
    {        printf ("Triangle is valid as sum of all angles is %d",a1+a2+a3);    }
    else 
    {        printf ("Triangle is not valid as sum of all angles is %d",a1+a2+a3);    }
    return 0;
}