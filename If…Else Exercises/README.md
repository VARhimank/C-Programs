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
#include <ctype.h>
int main() {
    int a;
    printf("Enter an amount \n");
    scanf("%d",&a);
    if(a>=2000)
    {rem=a%2000};
    else if(2000>a>=500)
    printf("");
    return 0;
}
  INCOMPLETE
```
6.	Write a C program to input month number and print number of days in that month.

7.	Write a C program to input angles of a triangle and check whether triangle is valid or not.

8.	Write a C program to input all sides of a triangle and check whether triangle is valid or not.

9.	Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.

10.	Write a C program to calculate profit or loss.

11.	Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
Percentage	>=	90%	:	Grade	A
Percentage	>=	80%	:	Grade	B
Percentage	>=	70%	:	Grade	C
Percentage	>=	60%	:	Grade	D
Percentage	>=	40%	:	Grade	E
Percentage < 40% : Grade F

12.	Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
Basic	Salary	<=	10000	:	HRA	=	20%,	DA	=	80%
Basic	Salary	<=	20000	:	HRA	=	25%,	DA	=	90%
Basic Salary > 20000 : HRA = 30%, DA = 95%

13.	Write a C program to input electricity unit charges and calculate total electricity bill according to
the given condition:
For   first   50      units     Rs.     0.50/unit
For	  next	  100		  units	    Rs.	    0.75/unit
For	  next	  100		  units	    Rs.	    1.20/unit
For	  unit	  above		250	      Rs.	    1.50/unit
An additional surcharge of 20% is added to the bill
