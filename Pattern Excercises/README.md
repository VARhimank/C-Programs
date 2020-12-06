# Pattern Exercises


**1.	Star pattern programs - Write a C program to print the given star patterns.**

```
    *
   ***
  *****
 *******
*********
Pyramid Star Pattern

#include <stdio.h>
int main()
{
int i, j, r, k;
   printf("Enter the number of rows of the pyramid: ");
   scanf("%d", &r);
   for (i = 1; i <=r; i++,k=0)
   {
      for (j = 1; j <=r - i; j++)
      {
         printf("  ");
      }
      while (k != 2 * i - 1)
      {
         printf("* ");
         k++;
      }
      printf("\n");
   }
    return 0;
}
```
***
```
    *
   * *
  *   *
 *	    *
*********
Hollow Pyramid Star Pattern

#include <stdio.h>
int main() {
  int i, j, r;
    printf("Enter number of rows : ");
    scanf("%d", &r);
    for(i=1; i<=r; i++)
    {
        for(j=i; j<r; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {
            if(i==r || j==1 || j==(2*i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");                                       
            }}
            printf("\n");                                
    }
    return 0;
}
```
***
```
*********
 *******
  *****
   ***
    *
Inverted Pyramid Star Pattern

#include <stdio.h>
int main() {
int r, i, j,k;
   printf("Enter the number of rows: ");
   scanf("%d", &r);
   for (i = r; i >= 1; --i) 
   {
   for (k = 0; k < r - i; ++k)
   {
         printf("  ");
   }
      for (j = i; j <= 2 * i - 1; ++j)
      {
         printf("* ");
      }
      for (j = 0; j < i - 1; ++j)
      {
         printf("* ");
      }
      printf("\n");  
   }
    return 0;
}
```
***
```
*********
 *	    *
  *  	*
   * *
    *
Hollow Inverted Pyramid Star Pattern

#include <stdio.h>
int main() {
int i, j, r;
    printf("Enter number of rows: ");
    scanf("%d", &r);
    for(i=1; i<=r; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=(r*2 - (2*i-1)); j++)
        {
            if(i==1 || j==1 || j==(r*2 - (2*i - 1)))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
```
***
```
*
**
***
****
******
****
***
**
*
Half Diamond Star Pattern

#include <stdio.h>
int main() {
int i, j, n, f=1;
    printf("Enter number of columns:");
    scanf("%d",&n);
    for(i=1;i<n*2;i++)
    {
        for(j=1; j<=f; j++)
        {
            printf("*");
        }
        if(i < n)
        {
            f++;
        }
        else
        {
            f--;
        }
        printf("\n");
    }
    return 0;
}
```
***
```
    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *
Mirrored Half Diamond Star Pattern

#include <stdio.h>
int main() {
 int i, j, n, k, f=1;
printf("Enter number of columns : ");
scanf("%d", &n);
k = n-1;
for(i=1; i<n*2; i++)
    {
        for(j=1; j<=k; j++)
            printf(" ");
        for(j=1; j<=f; j++)
            printf("*");
        printf("\n");
        if(i < n) 
        {
            f++;
            k--;
        }
        else
        {
            f--;
            k++;
        }
    } 
    return 0;
}
```

**2.	Number pattern programs - Write a C program to print the given number patterns**

```
Square number patterns
11111
11111
11111
11111
11111

#include <stdio.h>

 int main()
 {  int a=1;
  for(int i=0;i<5;i++)
   {  printf("\n");
      for(int j=0;j<5;j++)
       printf("%d",a);
   }
   return 0;
 }
```
***
```
Number pattern 1
11111
00000
11111
00000
11111

#include <stdio.h>

int main()
{  int a=1,b=0;
  for(int i=0;i<5;i++)
   {  printf("\n");
      for(int j=0;j<5;j++)
       if(i%2!=0)
       printf("%d",b);
       else
       printf("%d",a); 
   }
   return 0;
}     
```
***
```
Number pattern 2
01010
01010
01010
01010
01010

#include <stdio.h>

int main()
{  int a=1,b=0;
  for(int i=0;i<5;++i)
   {  printf("\n");
      for(int j=0;j<5;++j)
       if(j%2==0)
       printf("%d",b);
       else
       printf("%d",a); 
    }
   return 0;
}
```
***
```
Number pattern 3
11111
10001
10001
10001
11111

#include <stdio.h>

int main()
{  int a=1,b=0;
  for(int i=0;i<5;++i)
   {  printf("\n");
      for(int j=0;j<5;++j)
       if(i!=0 && i!=4 && j!=0 && j!=4)
       printf("%d",b);
       else
       printf("%d",a); 
    }
   return 0;
}
```
***
```
Number pattern 4
11111
11111
11011
11111
11111

#include <stdio.h>

int main()
{  int a=1,b=0;
  for(int i=0;i<5;++i)
   {  printf("\n");
      for(int j=0;j<5;++j)
       if(i==2 && j==2)
       printf("%d",b);
       else
       printf("%d",a); 
    }
   return 0;
}
```
***
```
Number pattern 5	
10101
01010
10101
01010
10101

#include <stdio.h>

void main()
{  int a=1,b=0;
  for(int i=0;i<5;++i)
   {  printf("\n");
      for(int j=0;j<5;++j)
       if((i+j)%2!=0)
       printf("%d",b);
       else
       printf("%d",a); }
}
```
