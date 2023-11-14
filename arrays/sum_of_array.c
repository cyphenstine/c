#include<stdio.h>
int main()
{
int n=4 , i , arr[]={11,32,43,64} , sum;
    for(i=0 ; i<n ; i++)
    {
        sum=sum+arr[i];
    }
    printf("%d", sum);
    return 0;
}