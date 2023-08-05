#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{

    // a calculater that could take unlimited intups , but two at a time and can calculate " sum , difference , multiplication , divition , squre , root , cube , root over 3 "
    // you can choose what you wanna do from above options by writting that oparation
    char opa;
    double x,y,result,nxt;
    printf("what operation do you want : ");
    scanf("%c",&opa);
    if(opa=='+')
    {
        printf("enter number : ");
        scanf("%lf",&x);
        printf("enter number : ");
        scanf("%lf",&y);
        result=x+y;
        printf("result : %lf",result);
         while(1)
        {
            printf("\nenter next number : ");
            scanf("%lf",&nxt);
            result=nxt+result;
            printf("result : %lf",result);
        }
    }
    else if(opa=='*')
    {
        printf("enter number : ");
        scanf("%lf",&x);
        printf("enter number : ");
        scanf("%lf",&y);
        result=x*y;
        printf("result : %lf",result);
         while(1)
        {
            printf("\nenter next number : ");
            scanf("%lf",&nxt);
            result=nxt*result;
            printf("result : %lf",result);
        }
    }
    else
    {
        printf("\nshut the fuck up , operation not available yet !!");
    }
    



























































}