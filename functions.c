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


int facto(int n)
{
    int fact=1, i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    //printf("%d",fact);
    return fact;
}
int main()
{
    int n,i,r,fact_n,fact_r,j,sub,fact_sub,k,combi;
    printf("enter n : ");
    scanf("%d", &n); 
    printf("enter r : ");
    scanf("%d", &r);   
    //n!
    // beta way
    /*    for(i=1;i<=n;i++)
    {
        fact_n=fact_n*i;
    }   
    */
    // chad way
    fact_n=facto(n);
    //r!
    // beta way
    /*
    for(j=1;j<=r;j++)
    {
        fact_r=fact_r*j;
    }
    */
    // chad way
    fact_r=facto(r);
    //sub!
    sub=n-r;
    // beta way
    /*
    for(k=1;k<=sub;k++)
    {
        fact_sub=fact_sub*k;
    }
    */
    // chad way
    fact_sub=facto(sub);
    //combination
    combi=fact_n/(fact_r*fact_sub);
    printf("%d", combi);
    


    return 0;
}