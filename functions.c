#include<stdio.h>


//🍷non return type :


//✌️greet good morning
/*
void greet()
{
    printf("good morning\n");
    return;
}
int main()
{
    for(int i=1;i<=10;i++)
    {
        greet();// calling the function
    }
    return 0;
}
*/


//🍷return type :


//✌️add two numbers
/*
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
*/


//prototype


/*
int main()
{
    void greet();
    greet();
    return 0;
}

void greet()
{
    printf("good morning");
}
*/


// make a function that will calculate combination[n!/r!(n-r)!]


int fact(int n)
{
    int fact, i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("%d",fact);
    return fact;
}
int main()
{
    int n,i,r,fact_n=1,fact_r=1,j,sub,fact_sub=1,k,combi;
    printf("enter n : ");
    scanf("%d", &n); 
    printf("enter r : ");
    scanf("%d", &r);   
    //n!
    for(i=1;i<=n;i++)
    {
        fact_n=fact_n*i;
    }    
    //r!
    for(j=1;j<=r;j++)
    {
        fact_r=fact_r*j;
    }
    //sub!
    sub=n-r;
    for(k=1;k<=sub;k++)
    {
        fact_sub=fact_sub*k;
    }
    //combination
    combi=fact_n/(fact_r*fact_sub);
    printf("%d", combi);
    //testing git bash


    return 0;
}