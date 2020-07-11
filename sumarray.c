  
#include <stdio.h> 
  
void countPnum(int* arr, int n, int * pc) 
{ 
    int i; 
    int temp = 0;
    for (i = 0; i < n; i++) { 
        if (arr[i] > 0) 
            temp++; 
    } 
    *pc = temp;
    return; 
} 
int countNnum(int* arr, int n) 
{ 
    int nc = 0; 
    int i; 
    for (i = 0; i < n; i++) { 
        if (arr[i] < 0) 
            nc++; 
    } 
    return nc; 
} 
  

void printArray(int* arr, int n) 
{ 
    int i; 
  
    printf("Array: "); 
    for (i = 0; i < n; i++) { 
        printf("%d ", arr[i]); 
    } 
    printf("\n"); 
} 

int main() 
{ 
    int arr[] = { 2, -1, 5, 6, 0, -3 }; 
    int n; 

    int pRes = 0;
    n = sizeof(arr) / sizeof(arr[0]); //4 * 6 = 24 bytes // arr[0] = 2 size 4 bytes  0 
    printArray(arr, n); 
  
  countPnum(arr,n , &pRes);
  
    printf("Count of Positive elements = %d\n", 
           pRes);
    printf("Count of Negative elements = %d\n", 
           countNnum(arr, n)); 
  
int tp=0;

    printf("%d post and pre" , tp++);
 printf("%d post and pre new" , tp);
    return 0; 
}