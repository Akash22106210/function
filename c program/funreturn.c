#include<stdio.h>
#include<stdlib.h>
int sum(int num1,int num2)
{
    int sum;
    sum=num1+num2;
    return sum;
}
int main()
{
   int a,b;
   printf("enter 2 numbers:\n");
   scanf("%d%d",&a,&b);
   int c=sum(a,b);
   printf("%d",c);
   return 0; 
}