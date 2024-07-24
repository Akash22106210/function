#include<stdio.h>
int temp;
void reverse(int arr[],int n)
{
for(int i=0;i<n/2;i++)
{
temp=arr[i];
arr[i]=arr[n-i-1];
arr[n-i-1]=temp;
}
}
int n,i,arr[40];
int main()
{
    printf("enter the no of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter the array element %d \n",i);
        scanf("%d",& arr[i]);
    }
    printf("\n original array is:");
    for(i=0;i<n;i++)
    {
        printf("%d \t",arr[i]);
        }
    reverse(arr,n);
    {
    printf("\nreversed array is ");
    for(i=0;i<n;i++)
    {
        printf("%d \t",arr[i]);
        }
    }
    
    }