#include<stdio.h>
 void duplicate(int arr[],int n)
 {
   for(int i=0;i<n-1;i++)
   {
    for(int j=i+1;j<n;j++)
    {
        if(arr[i]==arr[j])
        {
         printf("\nduplicate element exists");
         return;
        }
        }

    }
    printf("\nthere is no duplicate element");
     
   } 

 int i,n,arr[20];
 int main()
 {
    printf("enter the number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\n enter the array element %d:\t",i);
        scanf("%d",&arr[i]);
    }
    printf("\n the array elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
        }
        duplicate(arr,n);
}

 