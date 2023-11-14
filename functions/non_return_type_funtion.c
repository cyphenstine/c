
#include<stdio.h>
void greet()
{
    printf("good morning\n");
    return;
}
int main()
{
    for(int i=1;i<=10;i++)
    {
        greet();// calling the function
    }
    return 0;
}