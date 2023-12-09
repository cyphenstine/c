// take a string , it will contain a full name , print the initial of first name , initial of middle name(s) and print full last name 
#include<stdio.h>
#include<string.h>
int main()
{
    // taking the name 
    char name[30];
    printf("enter your name : ");
    scanf("%[^\n]s", name);
    // size of the input string 'or' number of letters in your name 
    int len;
    for(len=0 ; name[len] != '\0' ; len++){}
        printf("size : %d", len);
    // how many spaces in the name and capturing the position of the last sapce 
    int space = 0 , j , pos[30] , p=0;
    for(j = 0 ; name[j] != len ; j++)
    {
        if(name[j] == ' ')
        {
            pos[p]=j;
            p++;
            space ++;

        }
            
    }
    printf("\nspaces in you name : %d",space);
    // @ abbriviation part
    int k;
    printf("\nyour name : ");
    // prints the first letter of the name
    printf("%c.", name[0]);
    // abbriviates middle name(s)
    for(k = 0 ; name[k] != '\0' ; k++)
    {
        if(name[k] == ' ')
            printf("%c.", name[k+1]);     
    }
    // printing the full last name
    for(k = pos[p] ; k <= len ; k++)
        printf("%c" , name[k]);
        




    

    return 0;
}