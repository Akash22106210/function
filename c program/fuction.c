#include<stdio.h>
#include<stdlib.h>
 void sum(int num1,int num2){
int sum;
sum=num1+num2;
 printf("sum is %d",sum);
}
void sum();
int main()
{
    int a,b;
    printf("enter 2 numbers");
    scanf("%d%d",&a,&b);
    sum(a,b);
    
}