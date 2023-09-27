int i , j , n , k;
    printf("enter row : ");
    scanf("%d", &n);
    for(i=1 ; i<=n ; i++)
    {
        
        for(j=1 ; j<=n ; j++)
        {
            if(i>1 && i<n && j>1 && j<n)
            {
                if(i>1 && i<n && j==n/2 )
                {
                    printf("*");
                }
                printf("  ");
            }
            else
            {
                printf(" *");
            }
            
        }
        printf("\n");
    }