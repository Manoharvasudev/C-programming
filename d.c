#include<stdio.h>
int main()
{
int i,j,arr[]={6, 10, 5, 4, 9, 120, 4, 6, 10}; 
int count=0;
int n = sizeof(arr)/sizeof(arr[1]); 
for (int i=0; i<n; i++) 
  {       
    for (j=i+1; j<n; j++) 
     if (arr[i] == arr[j]) 
     arr[j]=-1;  
  }
  for(int k= 0;k<n;k++)
  if(arr[k]>0)
  {

printf("%d ",arr[k]);
  }
}
  
  
  
