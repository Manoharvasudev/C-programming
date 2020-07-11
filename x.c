#include<stdio.h>
void main()
{
    int i,sum=0;
    for(i=100;i<200;i++)
    {
        if(i%6==0)
        {
            printf("\nwhich is divisble by 7 is:%d",i);
        }
        else
        {
          sum=sum+i;
        }
    }
    printf("\nsum of all no between 100 and 200 which is divisible by 7:%d\n",sum);
}