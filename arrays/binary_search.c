#include<stdio.h>
int main()
{
    int arr[100], lb , ub , n , lim , mid , i , f=0;
    printf("how many you wanna work with : ");
    scanf("%d", &lim);
    for(i=0 ; i<lim ; i++)
    {
        printf("enter : ");
        scanf("%d", &arr[i]);
    }
    // bubble sort
    
    // binary search
    printf("enter the number , you wanna find : ");
    scanf("%d", &n);
    lb=0;
    ub=lim-1;
    if (n < arr[lb] || n > arr[ub])
    {
        printf("not found");
    }
    else
    {
        while(lb<=ub)
        {
            mid = (lb+ub)/2;
            if (n == arr[mid])
            {
                f=1;
                break;
            }
            if(n>arr[mid])
            {
                lb=mid+1;
            }
            else
            {
                ub=mid-1;    
            }    
        }
        if(f==1)
        {
            printf("found");
        }
        else
        {
            printf("not found");
        }
    }
    return 0;
    
}