# C-Programs
## Assignment- II
***

**1.	Write a C program to count number of digits in a number.**
```#include <stdio.h>
int main()
{
    int a,flag=0;
    printf("Enter a number ");
    scanf("%d",&a);
    while(a!=0)
    {
        a=a/10;
        ++flag;
    }
    printf("Number of digits = %d",flag);
    return 0;
}
```

**2.	Write a C program to swap first and last digits of a number.**


**3.	Write a C program to find frequency of each digit in a given integer.**

**4.	Write a C program to enter a number and print it in words.**

**5.	Write a C program to print all ASCII character with their values.**
```
#include <stdio.h>
int main() 
{  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);  
    printf("ASCII value of %c = %d", c, c);
    return 0;
}
```

**6.	Write a C program to find one's complement of a binary number.**

**7.	Write a C program to find two's complement of a binary number.**

**8.	Write a C program to convert Binary to Octal number system.**

**9.	Write a C program to convert Binary to Decimal number system.**
```
#include <math.h>
#include <stdio.h>
int convert(long long n);
int main() {
    long n;
    printf("Enter a binary number: ");
    scanf("%ld", &n);
    int decimal=0,i=0,rem;
    while (n!=0) 
    {
        rem=n%10;
        n/=10;
        decimal+=rem*pow(2, i);
        ++i;
    }
    printf("The number from binary to decimal is %d",decimal);
    return 0;
}
```

**10.	Write a C program to convert Binary to Hexadecimal number system.**

**11.	Write a C program to convert Octal to Binary number system.**

**12.	Write a C program to convert Octal to Decimal number system.**


**13.	Write a C program to convert Octal to Hexadecimal number system.**

**14.	Write a C program to convert Decimal to Binary number system.**

**15.	Write a C program to convert Decimal to Octal number system.**

**16.	Write a C program to convert Decimal to Hexadecimal number system.**

**17.	Write a C program to convert Hexadecimal to Binary number system.**

**18.	Write a C program to convert Hexadecimal to Octal number system.**

**19.	Write a C program to convert Hexadecimal to Decimal number system.**
