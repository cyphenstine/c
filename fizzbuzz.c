// fizzbuzz rules :
// 1. print numbers 1-100
// 2. if number is divisible by 3 , print fizz
// 3. if number is divisible by 5 , print buzz
// 4. if number is is divisible by both , print fizzbuzz
// 5. if number is is divisible by neither of two , print the number


#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%3==0 && i%5==0)
            printf("fizzbuzz\n");
        else if(i%3==0)
            printf("fizz\n");
        else if(i%5==0)
            printf("buzz\n");
        else
            printf("%d\n",i);
    }
    
    
    
    
    
    return 0;
}