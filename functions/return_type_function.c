//✌️add two numbers
#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int sum,c,d;
    printf("enter number : ");
    scanf("%d",&c);
    printf("enter number : ");
    scanf("%d",&d);
    sum=add(c,d);
    printf("sum : %d", sum);
    return 0;
}

