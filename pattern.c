#include<stdio.h>
int main()
{

    /*
    pattern : right angle triangle
    *
    * *
    * * *
    * * * *
    * * * * *
    */

    /*
    int n , i , j;
    char c='*';
    printf("rows : ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ", c);
        }
        printf("\n");
    }
    */

    /*
    pattern : box
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    */

    /*
    int n , i , j;
    printf("rows : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("*");
        }
        printf("\n");

    }
    */

    /*
    pattern: equilateral triangle
        *
       * *
      * * *
     * * * *
    * * * * *
    */

    /*
    int n , i , j , k ;
    char c='*';
    printf("rows : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(k=n;k>=i;k--)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {

            printf("%c ", c);
        }
        printf("\n");
    }
    */

    /*
    pattern : reverse right angle triangle
    * * * * *
    * * * *
    * * *
    * *
    *
    */

    /*
    int n , i , j;
    printf("rows : ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf(" *");
        }
        printf("\n");
    }
    */

    /*
    pattern : reverse equilateral triangle
    * * * * *
     * * * *
      * * *
       * *
        *
    */

    /*
    int n , i , j , k;
    printf("enter row & coloum : ");
    scanf("%d", &n);
    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=i ; j++)
        {
            printf(" ");
        }
        for(k=n ; k>=i ; k--)
        {
            printf(" *");
        }
        printf("\n");
    }
    */

    /*
    pattern : window / empty box
    * * * * *
    *       *
    *       *
    *       *
    * * * * *
    */

    /*
    int n , i , j;
    printf("enter row : ");
    scanf("%d", &n);
    for(i=1 ; i<=n ; i++)
    {
        for (j=1 ; j<=n ; j++)
        {

            if(i>1 && i<n && j>1 && j<n)
            {
                printf("  ");
            }
            else
            {
                printf(" *");
            }
        }
        printf("\n");
    }
    */


    /*
    pattern : door
    * * * * * *
    *    *    *
    *    *    *
    *    *    *
    *    *    *
    * * * * * *
    */


    /*
    int i , j , n , k;
    printf("enter row : ");
    scanf("%d", &n);
    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=n ; j++)
        {
            if(i>1 && i<n && j>1 && j<n)
            {
                if(n%2==0)
                {
                    if(j==n/2 )
                    {
                        printf(" *");
                    }
                    else 
                    {
                        printf("  ");
                    }
                }
                else
                {
                    if(j==n/2+1 )
                    {
                        printf(" *");
                    }
                    else 
                    {
                        printf("  ");
                    }   
                } 
            }
            else
            {
                printf(" *");
            }
        }
        printf("\n");
    }
    */


    /*
    pattern : diamond
         *
        * *
       * * *
      * * * *
     * * * * *
      * * * * 
       * * * 
        * *
         *
    */


    /*
    int n , i , j , k , l , m , o;
    printf("rows : ");
    scanf("%d", &n);
    //first triangle
    for(i=1 ; i<=n ; i++)
    {
        
        for(k=n ; k>=i ; k--)
        {
            printf(" ");
        }
        for(j=1 ; j<=i ; j++)
        {
            printf(" *");
        }
        printf("\n");
        
    }
    //second triangle
    for(l=2 ; l<=n ; l++)
    {
        for(m=1 ; m<=l ; m++)
        {
            printf(" ");
        }
        for(o=n ; o>=l ; o--)
        {
            printf(" *");
        }
        printf("\n");
    }
    */


    /*
    pattern : half diamond
    *
    * *
    * * *
    * * * *
    * * * * *
    * * * *
    * * * 
    * *
    * 
    */


    /*
    int n , i , j , k , l;
    printf("enter row : ");
    scanf("%d", &n);
    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=i ; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
    for(k=2 ; k<=n ; k++)
    {
        for(l=n ; l>=k ; l--)
        {
            printf(" *");
        }
        printf("\n");
    }
    */


    /*
    pattern :
         1
        1 0
       1 0 1
      1 0 1 0
     1 0 1 0 1
    */ 


    /*
    int n , i , j , k , l;
    printf("rows : ");
    scanf("%d", &n);
    for(i=1 ; i<=n ; i++)
    {
        for(j=n ; j>=i ; j--)
        {
            printf(" ");
        }
        for(k=1 ; k<=i ; k++)
        {
            if(k%2==0)
            {
                printf(" 0");
            }
            else
            {
                printf(" 1");
            }
        }
        printf("\n");
    }
    */


    /*(incomplete)
    pattern :
    *                    *
        *             *
            *     *    
               *
            *     *
        *              *
    *                      *
    */


    
    
    


 

    







    return 0;
}