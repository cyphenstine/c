#include<stdio.h>
// take the size of array as an input from user with a variable and also take values as input
int main()
{
    
    int n ;
    printf("enter size : ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0 ; i<n ;i++)
    {
        printf("enter : ");
        scanf("%d", &arr[i]);
    }
    return 0;
}