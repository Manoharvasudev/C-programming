#include<stdio.h>
int main()
{
    int n,i,j,a[100],temp=0,min=0;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter %d integers\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;    
    }
   
    printf("the sorted elements are:");
    for(i=0;i<n;i++)
    printf("%d\n",a[i]);
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    }