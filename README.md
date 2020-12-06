# C-Programs
## Assignment- II
***

**1.	Write a C program to count number of digits in a number.**
```
#include <stdio.h>
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
```
#include <stdio.h>
int main()
{
    int n;
    int fd,ld,rev;
    printf("Enter Number \n");
    scanf("%d",&n);
    int temp = n;
    ld = n%10;
    rev = 0;
    while(temp>0)
    {
        fd=temp%10;
        rev = rev*10+fd;
        temp= temp/10;

    }
    int newnum = ld;
    temp = rev/10;
    while(temp>9)
    {
        newnum = newnum*10+(temp%10);
        temp/=10;
    }
    newnum = fd+(newnum*10);
    printf("The reverse number is %d",newnum);
    return 0;
}
```

**3.	Write a C program to find frequency of each digit in a given integer.**
```
#include <stdio.h>

int main()
{
    int num, lastd, i;
    int freq [10];
    printf("enter number");
    scanf ("%d" , &num);
    for(i=0; i<10; i++)
    {
        freq[i] = 0;
    }
    while (num != 0)
    {
        lastd = num%10;
        freq [lastd]++ ; 
        num = num/10;
    }
    for(i=0; i<10; i++)
    {
        printf("Frequency of %d = %d\n", i, freq[i]);
    }
    return 0;
```
**4.	Write a C program to enter a number and print it in words.**
```
#include <stdio.h>
#include <math.h>

int main()
{
    int n, num = 0, digits;
    printf("Enter any number to print in words: ");
    scanf("%d", &n);
    digits = (int) log10(n); 
    while(n != 0)
    {
        num = (num * 10) + (n % 10);
        n /= 10;
    }
    digits =  digits - ((int) log10(num));  
    while(num != 0)
    {
        switch(num % 10)
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }
        
        num /= 10;
    }
    while(digits)
    {
        printf("Zero ");
        digits--;
    }
    return 0;
}
```

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
```
#include <stdio.h>

int main()
{
    char binary[10], onesComp[10];
    int i;
    printf("Enter binary value: ");
    gets(binary);
    for(i=0; i<10; i++)
    {
        if(binary[i] == '1')
        {   onesComp[i] = '0';        }
        else if(binary[i] == '0')
        {   onesComp[i] = '1';        }
    }
    printf("One's complement = %s", onesComp);
    return 0;
}
```
**7.	Write a C program to find two's complement of a binary number.**
```
#include <stdio.h>

int main()
{
    char binary[10], onesComp[10] , twosComp [10];
    int i , j=1;
    printf("Enter binary value: ");
    gets(binary);
    for(i=0; i<10; i++)
    {
        if(binary[i] == '1')
        {   onesComp[i] = '0';        }
        else if(binary[i] == '0')
        {   onesComp[i] = '1';        }
    }
    for(int i=9; i>=0; i--)  
    {  
        if(onesComp[i] == '1' && j == 1)  
        {  twosComp[i] = '0';          }  
        else if(onesComp[i] == '0' && j == 1)  
        {  
            twosComp[i] = '1';  
            j = 0;  
        }  
        else  
        {  twosComp[i] = onesComp[i];          }  
    }  
    printf("Two's complement is = %s", twosComp);
    return 0;
}
```
**8.	Write a C program to convert Binary to Octal number system.**
```
```
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
```
#include<stdio.h>
int main() 
{
  long int dn,q;
  int i=1,j,temp;
  char hdn[100];
  printf("Enter any decimal number:");
  scanf("%ld",&dn);
  q=dn;
  while(q!=0) 
  {
		temp=q%16;
		if(temp<10)
		   temp=temp+48; 
		else
		   temp=temp+55;
		hdn[i++]=temp;
		q=q/16;
   }
	printf("Equivalent hexadecimal value of decimal number %ld:",dn);
	for(j=i-1;j>0;j--)
	printf("%c",hdn[j]);
	return 0;
}
```
**17.	Write a C program to convert Hexadecimal to Binary number system.**
```
#include <stdio.h>
int main()
{
    char bn[100],hdn[100];
    long int i=0;
    printf("Enter the value for hexadecimal:");
    scanf("%s",hdn);
    printf("\nEquivalent binary value:");
    while(hdn[i])
    {
        switch(hdn[i])
        {
        case'0':
            printf("0000"); 
            break;
        case'1':
            printf("0001");
            break;
        case'2':
            printf("0010"); 
            break;
        case'3':
            printf("0011"); 
            break;
        case'4':
            printf("0100"); 
            break;
        case'5':
            printf("0101"); 
            break;
        case'6':
            printf("0110"); 
            break;
        case'7':
            printf("0111"); 
            break;
        case'8':
            printf("1000"); 
            break;
        case'9':
            printf("1001");
            break;
        case'A':
            printf("1010");
            break;
        case'B':
            printf("1011"); 
            break;
        case'C':
            printf("1100"); 
            break;
        case'D':
            printf("1101"); 
            break;
        case'E':
            printf("1110"); 
            break;
        case'F':
            printf("1111"); 
            break;
        case'a':
            printf("1010"); 
            break;
        case'b':
            printf("1011"); 
            break;
        case'c':
            printf("1100"); 
            break;
        case'd':
            printf("1101"); 
            break;
        case'e':
            printf("1110"); 
            break;
        case'f':
            printf("1111"); 
            break;
        default:
            printf("\nInvalid hexadecimal digit %c",hdn[i]);
            return 0;
        }
        i++;
    }
    return 0;
}

```
**18.	Write a C program to convert Hexadecimal to Octal number system.**
```
#include<stdio.h>
long int hdn_bn(char hdn[])
{
    long int bn,place;
    int i=0;
    bn=0;
    place=10000;
    for(i=0;hdn[i]!='\0';i++)
    {
        bn=bn*place;
 
        switch(hdn[i]) 
        {
        case'0':
            bn+=0;
            break;
        case'1':
            bn+=1;
            break;
        case'2':
            bn+=10;
            break;
        case'3':
            bn+=11;
            break;
        case'4':
            bn+=100;
            break;
        case'5':
            bn+=101;
            break;
        case'6':
            bn+=110;
            break;
        case'7':
            bn+=111;
            break;
        case'8':
            bn+=1000;
            break;
        case'9':
            bn+=1001;
            break;
        case'a':
        case'A':
            bn+=1010;
            break;
        case'b':
        case'B':
            bn+=1011;
            break;
        case'c':
        case'C':
            bn+=1100;
            break;
        case'd':
        case'D':
            bn+=1101;
            break;
        case'e':
        case'E':
            bn+=1110;
            break;
        case'f':
        case'F':
            bn+=1111;
            break;
        default:
            printf("Invalid hexadecimal input.");
        }
 
    }
 
    return bn;
}
 
long int bn_oct(long bn)
{
    long int octal,place;
    int i=0,r,val;
    octal=0;
    place=1;
 
    while(bn>0) 
    {
        r=bn%1000;
 
        switch(r)
        {
        case 0:
            val=0;
            break;
        case 1:
            val=1;
            break;
        case 10:
            val=2;
            break;
        case 11:
            val=3;
            break;
        case 100:
            val=4;
            break;
        case 101:
            val=5;
            break;
        case 110:
            val=6;
            break;
        case 111:
            val=7;
            break;
        }
 
        octal=(val*place)+octal;
        bn/=1000;
 
        place*=10;
    }
 
    return octal;
}
 
long int hdn_oct(char hdn[])
{
    long int octal,bn;
 
    bn=hdn_bn(hdn);
 
    octal=bn_oct(bn);
 
    return octal;
}
 
int main()
{
    char hdn[20];
    printf("Enter the value for hexadecimal:");
    scanf("%s",hdn);
 
    printf("Equivalent Octal Value = %ld",hdn_oct(hdn));
 
    return 0;
}
```
**19.	Write a C program to convert Hexadecimal to Decimal number system.**
```
#include<stdio.h>
#include<math.h>
int main()
{
      int dn=0;
      int c=0,l=0,i=0;
      char hdn[20];
      
      printf("Enter a Hexadecimal Number:");
      scanf("%s",hdn);
      while(hdn[i]!='\0')
      {   
        l++;
        i++;
      }
       l--;
       i=0;
     while(l>=0)
     { 
       c=hdn[l];
       if(c>=48&&c<=57)
       c=c-48;
            
       else if(c>=97&&c<=102)
       c=c-97+10;
            
       else if(c>=65&&c<=70)
       dn=c-65+10;
       
        
       dn=dn+(c*pow(16,i));
       l--;
       i++;

      }
       printf("\nDecimal Equivalent:\n %d",dn);
       return 0;
}
```
