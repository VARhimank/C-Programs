# Pattern Exercises


**1.	Star pattern programs - Write a C program to print the given star patterns.**

```
    *
   ***
  *****
 *******
*********
Pyramid Star Pattern
```

```
    *
   * *
  *   *
 *	    *
*********
Hollow Pyramid Star Pattern}
```

```
*********
 *******
  *****
   ***
    *
Inverted Pyramid Star Pattern}
```

```
*********
 *	    *
  *  	*
   * *
    *
Hollow Inverted Pyramid Star Pattern}
```

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
Half Diamond Star Pattern}
```

```{
  *
  **
 ***
 ****
*****
 ****
  ***
  **
  *
Mirrored Half Diamond Star Pattern}
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
