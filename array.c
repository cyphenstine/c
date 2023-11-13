#include<stdio.h>
#include<stdbool.h>
int main()
{
    //✌️#1 initializing arrys' values(way : 1)
    /*
    int arr[5];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;
    */


    //✌️#2 initializing arrys' values(way : 2)(better way)
    /*
    int arr[5]={1,2,3,4,5};
    [or]
    int arr[]={1,2,3,4,5};(you can avoid mentioning the size of the array if you are doing it this way)
    */


    //✌️#3 printing array
    /*
    printf("%d", arr[4]);
    */


    //✌️#4 taking a input in arry and printing it
    /*
    printf("enter : ");
    scanf("%d", &arr[5]);
    printf("%d", arr[5]);
    */
    
    
    //✌️#5 using loop to take input in array and printing output
    /*
    for(int i=0 ; i<=4 ; i++)
    {
        printf("enter : ");
        scanf("%d", &arr[i]);
    }
    for(int j=0 ; j<=4 ; j++)
    {
        printf("%d ", arr[j]);
    }
    */
    

    //✌️#6 sizeof()
    /*
    int arr[]={1,2,3,4,5};
    printf("total size : %d", sizeof(arr));
    printf("\nnumber of elements : %d", sizeof(arr)/sizeof(int));
    */


    //✌️#7 note :
    /*
    right way :
    int size = 10 , b[size];
    */
    /*
    wrong way :
    int b[size] , size=10;
    */


    //✌️#8 take the size of array as an input from user with a variable and also take values as input
    /*
    int n ;
    printf("enter size : ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0 ; i<n ;i++)
    {
        printf("enter : ");
        scanf("%d", &arr[i]);
    }
    */
    

    //✌️#9 sum of array
    /*
    int n=4 , i , arr[]={11,32,43,64} , sum;
    for(i=0 ; i<n ; i++)
    {
        sum=sum+arr[i];
    }
    printf("%d", sum);
    */


    //✌️#10 product of arry
    /*
    int n=4 , i , arr[]={11,22,33,44} , pro=1;
    for(i=0 ; i<n ; i++)
    {
        pro=pro*arr[i];
    }
    printf("%d", pro);
    */


    //✌️#11 linear search
    /*
    int n , arr[7]={2,5,7,8,6,4,9}, i;
    printf("enter number : ");
    scanf("%d", &n);
    for(i=0 ; i<7 ; i++)
    {
        if (n==arr[i])
        {
            printf("found");
            break;
        }
        
    }
    */


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