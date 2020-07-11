#include<stdio.h>
int main()
{

    int arr[]={1,2,3,4,4,5,6,7,7};
    int i,j,ctrl=0;
    //printf("/n");
    for(i=0;i<9;i++)
    {
        for(j=0;i<i;j++)
        {
           // printf("%d ",j);
            if(arr[i]==arr[j])
            ctrl++;
        }
    }
    if(i==j)
    printf("distinct elements %d ",arr[i]);
    // else
    // printf("dup elemenrs %d ", arr[i]);
    // return 1;

}




















//         if(i==j)
//         printf("dsfsdfdf %d ",arr[i]);
//     }

//         if(ctrl==1)
//        {
//      printf("unique elemrs is  %d ",arr[i]);
//        }
//        else 
//        {
//            printf("duplicate copy is %d",arr[i]);
//        }
//  //   }
    
//  }
 