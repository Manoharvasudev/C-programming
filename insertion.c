#include<stdio.h>
int main()
{
    int n,i,j,a[100],key=0;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter %d integers\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=1;i<n;i++)         
    {                        
     key=a[i];              
     j=i-1;        
     while(j>=0 && a[j]>key)   
     {                          
        a[j+1]=a[j];  
        j=j-1; 
     }
    a[j+1]=key;  
    }
    printf("the sorted elements are:\n");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
       
    }