#include<stdio.h>
int main()
{
    int n,arr[7]={2,5,7,8,6,4,9},i,f=0;
    printf("enter number : ");
    scanf("%d", &n);
    for(i=0 ; i<7 ; i++)
    {
        if (n==arr[i])
        {
            f=0;
            break;
        }
        else
        {
            f=1;
        }
    }
    if(f==0)
    {
        printf("found");
    }    
    else
    {
        printf("not found");
    }
    return 0;
}