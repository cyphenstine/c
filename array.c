#include<stdio.h>
#include<stdbool.h>
int main()
{
    


        

    





    

    //✌️#12 linear search with bool data type
    /*
    int n , arr[7]={2,5,7,8,6,4,9}, i;
    bool marker = 0;
    printf("enter number : ");
    scanf("%d", &n);
    for(i=0 ; i<7 ; i++)
    {
        if (n==arr[i])
        {
            marker = 1;
            break;
        }
    }
    if(marker==1)
    {
        printf("found");
    }
    else
    {
        printf("not found");
    }
    */


    //✌️#13 binary search & bubble sort 


    /*
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
    */


    //bubble sort

        //input
        int n,i;
        int arr[100];
        printf("how many numbers : ");
        scanf("%d", &n);
        for(i=0 ; i<n ; i++)
        {
            printf("enter array : ");
            scanf("%d", &arr[i]);
        }

        // sorting 

        
        
        
        
    


    



    
    
    
    return 0;
}