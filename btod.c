#include<stdio.h>    

int main()
{  
int a[10],n,i;    
printf("Enter the number to convert: ");    
scanf("%d",&n);    
for(i=0;n>0;i++)    //16  8  4 2
{    
a[i]=n%2;           // 0 0 0 0 1
n=n/2;              //8 4 2 1 0
}     
printf("\nBinary of Given Number is=");    
for(i=i-1;i>=0;i--)     // 
{    
printf("%d",a[i]);    //1 0 0 0 0
}    
return 0;  
}  