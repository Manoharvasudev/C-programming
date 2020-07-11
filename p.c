
#include<stdio.h> 
int fib(int n) 
{ 
   if (n==1 || n==2)                  
      return 1;
    else                     
   return fib(n-1) + fib(n-2); //9-1 + 9-2  8 + 7  8-1 + 8-2  7 + 5 
} 
int main () 
{ 
  int i,n=6;
  // printf("enter the number");
  // scanf("%d ",&n);
  for(i=1;i<=n;i++)
//  for(i=n;i>=1;i--)
  {
  printf("%d\n", fib(n));
  } 
  return 0; 
}