#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{

    // a calculater that could take unlimited intups , but two at a time then after that oparation it will take only one number infinite times and can calculate " sum , difference , multiplication , divition , squre , root , cube , root over 3 "
    // you can choose what you wanna do from above options by entering that operation sign that oparation and sometimes writting 
    char opa;
    double x,y,result,nxt,s,sqroot,c,cbroot;
    printf("what operation to perform : ");
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
            result=result+nxt;
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
            result=result*nxt;
            printf("result : %lf",result);
        }
    }
    else if(opa=='/')
    {
        printf("enter number : ");
        scanf("%lf",&x);
        printf("enter number : ");
        scanf("%lf",&y);
        result=x/y;
        printf("result : %lf",result);
         while(1)
        {
            printf("\nenter next number : ");
            scanf("%lf",&nxt);
            result=result/nxt;
            printf("result : %lf",result);
        }
    }
    else if(opa=='-')
    {        
        printf("enter number : ");
        scanf("%lf",&x);
        printf("enter number : ");
        scanf("%lf",&y);
        result=x-y;
        printf("result : %lf",result);
         while(1)
        {
            printf("\nenter next number : ");
            scanf("%lf",&nxt);
            result=result-nxt;
            printf("result : %lf",result);
        }
    }
    else if(opa=='^')
    {
        printf("enter the number : ");
        scanf("%lf",&s);
        s=s*s;
        printf("squre : %lf",s);
    }
    else if(opa=='r')
    {
        printf("enter number : ");
        scanf("%lf",&sqroot);
        sqroot=sqrt(sqroot);
        printf("squre root : %lf",sqroot);
    }
    else if(opa=='c')
    {
        printf("enter the number : ");
        scanf("%lf",&c);
        c=c*c*c;
        printf("qube : %lf",c);
    }
    else if(opa=='q')
    {
        printf("enter number : ");
        scanf("%lf",&cbroot);
        cbroot=cbrt(cbroot);
        printf("squre root : %lf",cbroot);
    }























































}