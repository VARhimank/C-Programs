/*Write a C program to count total number of notes in given amount.*/

#include <stdio.h>

int main() 
{
    int  a[9]={2000, 500,100,50,20,10,5,2,1},amount,i , j=0; 
    printf("Enter the amount:");
    scanf("%d",&amount);
     for(i=0;i<9;i++)
    {
     printf("\n%d notes is:%d",a[i],amount/a[i]);
     j += amount/a[i]; 
     amount=amount%a[i];
    }
    printf ("\ntotal number of notes are %d" , j);
    return 0;
}