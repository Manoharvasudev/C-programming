  
#include<stdio.h>    
#include<math.h>

void main()
{  
int rem,sum=0,n,i;  
printf("Enter the number to convert: ");    
scanf("%d",&n); //1010  
for(i=0;n>0;i++)    
{    
rem=n%10;  //0101
double temp = pow(2,i);
sum= sum + rem * temp;
n=n/10;     
}     
printf("%d",sum);    
return;  
}  