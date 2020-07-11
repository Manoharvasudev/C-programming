#include<stdio.h>
int main()
{
  int n=100,temp=0,sum=0;
  while(n<=200)
  {
      temp=n%6;
      if(temp==0)
      {
          sum=sum+n;
      }
      else
      {
       printf("\nwhich is divisble by 6 is:%d",n);   
      }
      n++;
      }
         printf("\nsum of all no between 100 and 200 which is divisible by 6:%d\n",sum);
      }
 
