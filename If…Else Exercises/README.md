1.	Write a C program to check whether a number is divisible by 5 and 11 or not.
```
#include <stdio.h>
int main() {
    int a;
    printf("Enter a number \n");
    scanf("%d",&a);
    if(a%11==0 && a%5==0)
    {
        printf("The number is divisible by 11 and 5 both");
    }
    else {  printf("The number is NOT divisible by 11 and 5 both"); }
    return 0;
} 
```
2.	Write a C program to check whether a character is uppercase or lowercase alphabet.
```
#include <stdio.h>
#include <ctype.h>
int main() {
    char a;
    printf("Enter a character \n");
    scanf("%c",&a);
    if(isupper(a)!=0)
    {
        printf("The charecter is UPPERCASE");
    }
    else {  printf("The charecter is LOWERCASE"); }
    return 0;
}
```

3.	Write a C program to input week number and print week day.
```
#include <stdio.h>
#include <ctype.h>
int main() {
    int a;
    printf("Enter a number from 1 to 7 \n");
    scanf("%d",&a);
    if(a==1)
    printf("Monday");
    else if(a==2)
    printf("Tueday");
    else if(a==3)
    printf("Wednessday");
    else if(a==4)
    printf("Thursday");
    else if(a==5)
    printf("Friday");
    else if(a==6)
    printf("Saturday");
    else if(a==7)
    printf("Sunday");
    else 
    printf("Enter no. only from 1 to 7");
    return 0;
}
```

4.	Write a C program to input month number and print number of days in that month.
```
#include <stdio.h>
#include <ctype.h>
int main() {
    int a;
    printf("Enter a number from 1 to 12 \n");
    scanf("%d",&a);
    if(a==1|| a==3 || a==5 || a==7 || a==8 || a==10 || a==12)
    printf("No. of days in this month is 31");
    else if(a==4 || a==6 || a==9 || a==11)
    printf("No. of days in this month is 30");
    else if(a==2)
    printf("No. of days in this month can be 28 or 29");
    else 
    printf("Enter no. only from 1 to 12");
    return 0;
}
  
```

5.	Write a C program to count total number of notes in given amount.
```
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
```
6.	Write a C program to input month number and print number of days in that month. 
**REPEATED**

7.	Write a C program to input angles of a triangle and check whether triangle is valid or not.
```
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
```
8.	Write a C program to input all sides of a triangle and check whether triangle is valid or not.
```
#include <stdio.h>

int main() 
{
    int side1 , side2 , side3;
    printf ("enter first side");
    scanf ("%d" , &side1);
    printf ("enter second side");
    scanf ("%d" , &side2);
     printf ("enter third side");
    scanf ("%d" , &side3);
    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
    {        printf ("Triangle is valid");    }
    else 
    {        printf ("Triangle is not valid");    }
    return 0;
}
```
9.	Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.

10.	Write a C program to calculate profit or loss.
```
#include <stdio.h>

int main() 
{
    int sp , cp;
    printf ("enter cost price of product - ");
    scanf ("%d" , &cp);
    printf ("enter selliing price of product - ");
    scanf ("%d" , &sp);
    if (sp>cp)
    {        printf ("Profit is of Rs. %d" , sp-cp);    }
    else if (cp > sp)
    {        printf ("Loss is of Rs. %d" , cp-sp);    }
    else 
    {        printf ("No profit or loss");    }
    return 0;
}
```
11.	Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
Percentage	>=	90%	:	Grade	A
Percentage	>=	80%	:	Grade	B
Percentage	>=	70%	:	Grade	C
Percentage	>=	60%	:	Grade	D
Percentage	>=	40%	:	Grade	E
Percentage < 40% : Grade F
```
#include <stdio.h>  
int main() {
    int phy,chem,bio,maths,cs;
    float per;char grade;
    printf("Input marks for Physics ");
    scanf("%d",&phy);
    printf("Input marks for Chemistry ");
    scanf("%d",&chem);
    printf("Input marks for Biology ");
    scanf("%d",&bio);
    printf("Input marks for Mathematics ");
    scanf("%d",&maths);
    printf("Input marks for Computer ");
    scanf("%d",&cs);
    per=(phy+bio+chem+cs+maths)/500;
    per*=100;
    if(per>=90)
    { grade='A';}
    else if(per<90 && per>=80)
    { grade='B';}
    else if(per<80 && per>=70)
    { grade='C';}
    else if(per<70 && per>=60)
    { grade='D';}
    else if(per<60 && per>=40)
    { grade='E';}
    else {grade='F';}
    printf("The percentage is %0.3f and grade is %c",per,grade);
    return 0;
}
```

12.	Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
Basic	Salary	<=	10000	:	HRA	=	20%,	DA	=	80%
Basic	Salary	<=	20000	:	HRA	=	25%,	DA	=	90%
Basic Salary > 20000 : HRA = 30%, DA = 95%
```
#include <stdio.h>  
int main() {
    int bs,hra,da,gs;
    printf("Input basic salary ");
    scanf("%d",&bs);
    if(bs>20000)
    { hra=bs*0.3;
      da=bs*0.95;  
    }
    else if(bs<=20000 && bs>10000)
    { hra=bs*0.25;
      da=bs*0.9;
    }
    else if(bs<=10000)
    { hra=bs*0.2;
      da=bs*0.8;}
    gs=bs+da+hra;
    printf("The gross salaray is %d",gs);
    return 0;
}
```

13.	Write a C program to input electricity unit charges and calculate total electricity bill according to
the given condition:
For   first   50      units     Rs.     0.50/unit
For	  next	  100		  units	    Rs.	    0.75/unit
For	  next	  100		  units	    Rs.	    1.20/unit
For	  unit	  above		250	      Rs.	    1.50/unit
An additional surcharge of 20% is added to the bill
```
#include <stdio.h>  
int main() {
    int ele; float bill,temp,extra;
    printf("Input electric units ");
    scanf("%d",&ele);
    if(ele<=50)
    { bill=ele*0.5;  }
    else if(ele>50 && ele<=150)
    { temp=ele-50;
      bill=(50*0.5)+(temp*0.75);
    }
    else if(ele>150 && ele<=250)
    { temp=ele-150;
      bill=(50*0.5)+(100*0.75)+(temp*1.2);
    }
    
    if(ele>250)
    { extra=ele-250;
      extra=extra*0.2;
    }
    else { extra=0;}
    bill=bill+extra;
    printf("The electicity bill is %0.2f",bill);
    return 0;
}
```
