#include<stdio.h>
int main()
{
    int n,i,j,arr[100],temp=0;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter %d integers\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);   
    for(i=0;i<n-1;i++)
    {

        for(j=0;j<n-1-i;j++)
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
    }
    printf("the sorted elements are:");
    for(i=0;i<n;i++)
    printf("%d\n",arr[i]);
    }