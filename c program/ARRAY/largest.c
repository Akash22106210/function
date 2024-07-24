#include<stdio.h>
 int main()
 {

   int ar[30],i,n;
    printf("enter the no of elements:");
    scanf("%d",&n);
     for(i=0;i<n;i++){
     printf("\nenter the element %d:\n",i);
     scanf("%d",&ar[i]);
     printf("\t\t");
     }
     printf("array is:");
     for(i=0;i<n;i++)
     {
        printf(" %d ",ar[i]);
     }
      int largest=ar[0];
      for(i=0;i<n;i++)
      {
       if(largest<ar[i])
       
       {
        largest=ar[i];
       }
      }
      printf("\n largest element of the array is:%d",largest);

 }