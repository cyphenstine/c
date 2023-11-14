#include<stdio.h>
int main()
{
    int n=4 , i , arr[]={11,22,33,44} , pro=1;
    for(i=0 ; i<n ; i++)
    {
        pro=pro*arr[i];
    }
    printf("%d", pro);

    return 0;
}

