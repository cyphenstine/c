//✌️add two numbers
#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int sum,c,d;
    printf("c : ");
    scanf("%d",&c);
    printf("d : ");
    scanf("%d",&d);
    sum=add(c,d);
    printf("sum : %d", sum);
}

