1.) WAP to swap two numbers without using the 3rd variable using pointers.

```
#include <stdio.h>

int main()
{
    int *ptr1,a,*ptr2,b;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&a,&b);
    ptr1=&a;ptr2=&b;
    printf("Before swap a=%d b=%d",*ptr1,*ptr2);      
    *ptr1+=*ptr2;
    *ptr2=*ptr1-*ptr2;    
    *ptr1=*ptr1-*ptr2;    
    printf("\nAfter swap a=%d b=%d\n",*ptr1,*ptr2);    
    return 0;
}
```

2.) WAP to demonstrate the use of malloc(), calloc(), realloc() and free() function.
```
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr1,*ptr2,*ptr3,n1,n2,n3;
    printf("Enter no. of elements for malloc : ");
    scanf("%d",&n1);
    
    ptr1=(int*)malloc(n1*sizeof(int));
    if(ptr1==NULL)
    {printf("Memory not allocated\n");}
    else {printf("Memory successfully allocated using malloc\n\n");}
    
    printf("Enter no. of elements for calloc : ");
    scanf("%d",&n1);
    ptr2=(int*)calloc(n2,sizeof(int));
    if(ptr2==NULL)
    {printf("Memory not allocated\n");}
    else {printf("Memory successfully allocated using calloc\n\n");}
    
    free(ptr1); 
    printf("Malloc Memory successfully freed.\n");
    free(ptr2); 
    printf("Calloc Memory successfully freed.\n\n");
    
    printf("Enter new size for allocation : ");
    scanf("%d",&n3);
    ptr3=realloc(ptr2,n3*sizeof(int));
    printf("Memory successfully re-allocated using realloc.\n");
    return 0;
}
```

3.) WAP to add two matrix using pointers.
```
#include <stdio.h>
int main() 
{   int a[100][100];int b[100][100];int c[100][100];int n,m;
    int (*ptr1)[100][100],(*ptr2)[100][100],(*ptr3)[100][100];
    ptr1=&a;ptr2=&b;ptr3=&c;
    printf("Enter size of rows and column for A matrix(less than 100): ");
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter the element in %d,%d for A matrix: ",i,j);
            scanf("%d", ptr1[i][j]);
        }
    }
    printf("Enter size of rows and coloumn for B matrix(less than 100): ");
    scanf("%d", &m);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("Enter the element in %d,%d for B matrix: ",i,j);
            scanf("%d", ptr2[i][j]);
        }
    }
    if(n==m)
    {        for(int i=0;i<m;i++)    {
        for(int j=0;j<n;j++)
        {
            (*ptr3[i][j])=(*ptr1[i][j])+(*ptr2[i][j]);
        }
    }
    for(int i=0;i<m;i++)
    {        for(int j=0;j<n;j++)
        {            printf("%d",*ptr3[i][j]);        }
    printf("\n");
    }
    }
    return 0;
}
```

4.) Write a C program to multiply two matrix using pointers.
```
#include<stdio.h>    
  
int main(){  
    int a[100][100],b[100][100],mul[100][100],r,c,i,j,k;
    int (*ptr1)[100][100],(*ptr2)[100][100],(*ans)[100][100];
    ptr1=&a;ptr2=&b;ans=&mul;
    printf("Enter the number of row = ");    
    scanf("%d",&r);    
    printf("Enter the number of column = ");    
    scanf("%d",&c);    
    printf("Enter the first matrix elements :-\n");    
    for(i=0;i<r;i++)    
        {    
        for(j=0;j<c;j++)    
            {scanf("%d",ptr1[i][j]);}    
        }    
    printf("Enter the second matrix elements :-\n");    
    for(i=0;i<r;i++)    
        {    
        for(j=0;j<c;j++)    
            {scanf("%d",ptr2[i][j]);}    
        }    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
        for(k=0;k<c;k++)    
            {*ans[i][j]+=(*ptr1[i][k])*(*ptr2[k][j]);}    
        }    
    }    
    printf("Resulting after multiplication :-\n");
    for(i=0;i<r;i++)    
        {    
        for(j=0;j<c;j++)    
            {printf("%d\t",*ans[i][j]);}    
        printf("\n");    
        }    
    return 0;  
} 
```

6.) Write a C program to concatenate two strings using pointers.
```
#include <stdio.h> 

void sort(int n, int* ptr) 
{ 
    int i,j,t; 

    for (i=0; i<n; i++) { 
        for (j =i+1; j<n; j++) { 
            if(*(ptr+j)<*(ptr+i)) 
            { 
                t= *(ptr+i); 
                *(ptr+i)= *(ptr+j); 
                *(ptr+j)= t; 
            } 
        } 
    } 
    for (i=0; i<n; i++) 
    {printf("%d ", *(ptr+i));}
}
int main() 
{ 
    int a[100],s;
    printf("Enter size of array : ");
    scanf("%d",&s);
    for(int i=0;i<s;i++)
    {
        printf("Enter the %d element : ",i+1);
        scanf("%d",&a[i]);
    }
    sort(s,a); 
    return 0; 
}
```
