#include<stdio.h>
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
    /*    
    for(i=1;i<=n;i++)
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