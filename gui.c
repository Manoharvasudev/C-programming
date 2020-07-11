#include<stdio.h>
int main()
{

int arr[]={0,-5,5,5,5,5};
int n,i;
int result = 0;
printf("enter the num:");
scanf("%d",&n);
for(i=0;i<6;i++)
{
if(arr[i]==n)
{
result = 1;
break;
}
else 
{
result = 0;
}
}
if(result==1){
    printf("found");
}
else{
    printf("not found");
}
}