int n , i , j , k ;
    char c='*';
    printf("rows : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        
        for(j=1;j<=i;j++)
        {
                for(k=n;k>=1;k--)
            {
                printf(" ");
            }
            printf("%c ", c);
        }
        printf("\n"); 
    }