#include<stdio.h>
int main()
{
    int arr[]={-8,0,12,6,8,-2};
    int n,i,result=0;
    printf("enter the element");
    scanf("%d ",&n);
    for(i=1;i<6;i++)
    {
        if(arr[i]==n)
        {
            result=1;
           
          //  break;
        }
            else
        {
            result=0;
        }
    }
        if(result==1)
        {
            printf("element found");
        }
        else
        {
            printf("element not found");
        }
   
    
}