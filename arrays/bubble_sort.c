#include <stdio.h>
int main()
{
    // input
    int n, i;
    int arr[100];
    printf("how many numbers : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter array : ");
        scanf("%d", &arr[i]);
    }

    return 0;
}