#include<stdio.h>
#include<conio.h>
// factorial
int facto(int n)
{
    int fact=1, i;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}
// combination
int comb(int n,int r)
{
    int fact_n,fact_r,sub,fact_sub,combi;   
    //n!
    fact_n=facto(n);
    //r!
    fact_r=facto(r);
    //sub!
    sub=n-r;
    fact_sub=facto(sub);
    //combination
    combi=fact_n/(fact_r*fact_sub);
    return combi;
}
// pascal tringle
/*
we'll use combination for this 
n as rows
r as coloums
*/
int main()
{
    int i,n,j,l;
    printf("enter rows : ");
    scanf("%d", &n);
    for(i=0;i<=n;i++)
    {
        for(l=n;l>=i;l--)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("%d ",comb(i,j));
        }
        printf("\n");
    }
    
    return 0;
}