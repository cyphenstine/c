#include<stdio.h>
#include<math.h>
void main()
{
  double n1,n2,result;
  int pow,i=1;
  char opa;
  printf("enter number : ");
  scanf("%lf",&n1); 
   
  while(1)  
  {
    printf("oparetion : ");
    scanf(" %c", &opa);
    // sum :
    if(opa=='+')
    {
      printf("enter number : ");
      scanf("%lf" , & n2);
      result=n1+n2;
      printf("result : %lf\n" , result);
      n1=result; 
    }
    // diff :
    else if(opa=='-')
    {
      printf("enter number : ");
      scanf("%lf" , & n2);
      result=n1-n2;
      printf("result : %lf\n" , result);
      n1=result; 
    }
    // mul :
    else if(opa=='*')
    {
      printf("enter number : ");
      scanf("%lf" , & n2);
      result=n1*n2;
      printf("result : %lf\n" , result);
      n1=result; 
    }
    // div :
    else if(opa=='/')
    {
      printf("enter number : ");
      scanf("%lf" , & n2);
      result=n1/n2;
      printf("result : %lf\n" , result);
      n1=result; 
    } 
    
  }                                                                                
  



    








































}