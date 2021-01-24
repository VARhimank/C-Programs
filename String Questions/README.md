1.) Write a C program to concatenate two strings using pointers.
```
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int l1,l2;char a[100],b[100];
    char *ptr1,*ptr2,*conc;
    ptr1=a;ptr2=b;
    printf("Enter 2 strings : ");
    scanf("%s %s",ptr1,ptr2);
    l1=strlen(a);l2=strlen(b);
    int l3=l1+l2;
    char c[l3];
    conc=c;
    for(int i=0;i<=l1;i++)
    {
        conc[i]=(ptr1[i]);
    }
    for(int i=l3-l1;i<=l3;i++)
    {
        conc[i]=(ptr2[i-l2]);
    }
    printf("Concatenated string : %s\n",c);
    return 0;
}
```

2.) WAP to remove all repeated characters from a given string.
```
#include <string.h>
#include <stdio.h>

int main()
{
    char s[100],temp=1,c='*';  
    int  i,j,k=0,n;
    printf("Enter  the string : ");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
    	if(!(s[i]==c))
    	{
    		for(j=i+1;s[j];j++)
            {
            	if(s[i]==s[j])
            	   s[j]=c;
            }
		}
    }
    for(i=0;s[i];i++)
    {
     	s[i]=s[i+k];
     	if(s[i]==c)
     	{
		  k++;
		  i--;
	    }
    }
    printf("String after removing all duplicates : ");
 	 printf("%s",s);
    return 0;
}
```

3.) WAP to count total number of vowels and consonants in a string.
```
#include <stdio.h>
int main() 
{
    char str[100];
    int vowels, consonant;
    vowels=consonant=0;
    printf("Enter a string: ");
    scanf("%s",str);
    for (int i = 0; str[i] != '\0'; ++i) 
        {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] ==                      
'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') 
        {++vowels;}
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
        {++consonant;}
        }
    printf("Vowels: %d \n", vowels);
    printf("Consonants: %d \n", consonant);
    return 0;
}
```

4.) WAP to count frequency of each character in a string.
```
#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int len,freq[26];
    printf("Enter any string: ");
    scanf("%s",str);
    len=strlen(str);
    for(int i=0; i<26; i++)
    {
        freq[i] = 0;
    }
    for(int i=0; i<len; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            freq[str[i]-97]++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            freq[str[i]-65]++;
        }
    }
    printf("Frequency of characters in the given string: \n");
    for(int i=0; i<26; i++)
    {
        if(freq[i]!= 0)
        {
            printf("%c = %d \n", (i+97),freq[i]);
        }
    }

    return 0;
}
```

5.) WAP to compare two strings using strcmp() function.
```
#include <stdio.h>
#include <string.h>

int main() {
    char a[20],b[20];
    printf("Enter one string : ");
    scanf("%s",a);
    printf("Enter other string : ");
    scanf("%s",b);
    int r=strcmp(a,b);
    if(r==0)
    {printf("The strings are same \n");}
    else {printf("The strings are not the same \n");}
    return 0;
}
```
