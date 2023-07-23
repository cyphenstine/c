#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{

    //✌️code practice_1 : divition

    /*
    float x = 5 ;
    float y = 2 ;
    float z = x/y ;
    printf("%f",z) ;
    */


    // ✌️volume of a sphere

    /*
    float r,vol;
    printf("\nenter redius :  ");
    scanf("%f",&r);
    vol=(4/3)*3.14*r*r*r;
    printf("volume : %f",vol);
    */


    //✌️ area of a circle

    /*
    float r , area ;
    printf("\nenter redius : ");
    scanf("%f",&r);
    area = 3.14*r*r;
    printf("Area : %f",area);
    */


   // ✌️calculate overall percentage of 6 subjects

   /*
   float phy , che , bio , eng , ben , comapp , ov_per;
   printf("enter marks of physics : ");
   scanf("%f",&phy);
   printf("enter marks of chemistry : ");
   scanf("%f",&che);
   printf("enter marks of biology : ");
   scanf("%f",&bio);
   printf("enter marks of english : ");
   scanf("%f",&eng);
   printf("enter marks of bengali : ");
   scanf("%f",&ben);
   printf("enter marks of computer application : ");
   scanf("%f",&comapp);
    ov_per = (phy+che+bio+eng+ben+comapp)/6;
    printf("\noverall persentage : %f",ov_per);
    */


   //✌️calculate the simple interest

    /*
   float r,t,p,i;
   printf("enter interesr rate : ");
   scanf("%f",&r);
   printf("enter time(in years) : ");
   scanf("%f",&t);
   printf("enter principle amount : ");
   scanf("%f",&p);
   i=(p*t*r)/100;
   printf("interesr : %f",i);
   */


    //✌️code practuce_2

    /*
    int p,q;
    printf("enter values of p and q : ");
    scanf("%d %d",&p,&q);
    printf("p = %d , q = %d",p,q);
    */


    //✌️find remainder , here a must be > than b , otherwise code will curse you


    // <note> : if a<b then a % b = a (it's a rele alright !!) //
    

    /*
    int a,b,r;
    printf("must : a>b");
    printf("\nenter a : ");
    scanf("%d",&a);
    printf("\nenter b : ");
    scanf("%d",&b);
    r = a % b; //or diviser * quotient(bhagfol) + remainder = divident
    if(a<b)
    {
        printf("\ni told you a must be > than b , can't you see ?? mother f**ker!!\n ");
    }
    else
    {
        printf("\nremainder : %d",r);
    }
    */

    //✌️code practice_3 : take integer as a input and print half of the taken number

    /*
    int a;
    printf("enter a integer number : ");
    scanf("%d",&a);
    printf("half : %d",a/2);
    */

    //✌️code practice _4 : input a float number and it will print the fractional part

    /*
    float a,f;
    int b;
    printf("enter a float number : ");
    scanf("%f",&a);
    b = a;
    f = a - b;
    printf("\nfractional part : %f",f);
    */


    //✌️ code practice_5 : predict the value of "k","l","a","b"
    // <note> : if you enter cheat code : 69 , it will show you answers , if you enter 00 , it will not show you answers and print "ok!!" and end the code //

    /*
    int i=2,j=3,k,l,ans_1,ans_2;
    float a,b,ans_3,ans_4;
    int cheat_code=69,code_for_not_showing=00,code;
    k = (i/j)*j;
    l = (j/i)*i;
    a = (i/j)*j;
    b = (j/i)*i;
    //input k's value
    printf("enter value of k : ");
    scanf("%d",&ans_1);
    if(k==ans_1)
    {
        printf("\nyup right!!");
    }
    else
    {
        printf("\nit's wrong!!");
    }
    //input l's value
    printf("\nenter value of l : ");
    scanf("%d",&ans_2);
    if(l==ans_2)
    {
        printf("\nyup right!!");
    }
    else
    {
        printf("\nit's wrong!!");
    }
    // input a's value
    printf("\nenter value of a : ");
    scanf("%f",&ans_3);
    if(a==ans_3)
    {
        printf("\nyup right!!");
    }
    else
    {
        printf("\nit's wrong!!");
    }
    //input b's value
    printf("\nenter value of b : ");
    scanf("%f",&ans_4);
    if(b==ans_4)
    {
        printf("\nyup right!!");
    }
    else
    {
        printf("\nit's wrong!!");
    }
    //input cheat_code
    printf("\nenter cheat code to see the answers : ");
    scanf("%d",&code);
    if(cheat_code==code)
    {
        printf("%d %d %f %f",k,l,a,b);
    }
    else if(code==code_for_not_showing) 
    {
        printf("\nok!!");
    }
    */


    //✌️fibonacci sequence : a sequence where a number is sum of previous two numbers first and second numers in febonacci sequence are 0,1 . ex : 0,1,1,2,3,5,8,13,etc

    /*    int i,n,nt,n1=0,n2=1;
    nt=n1+n2;
    printf("enter the limit of terms : ");
    scanf("%d",&n);
    printf("febinacci sequence : %d %d ",n1,n2);
    for (i=3;i<=n;++i)
    {
        printf("%d ",nt);
        n1=n2;
        n2=nt;
        nt=n1+n2;    
    }
    */


   //✌️swap two numbers using a temporary variable


    /*
   int a,b,temp_var;
   printf("enter value of 1st number : ");
   scanf("%d",&a);
   printf("\nenter value of 2nd number : ");
   scanf("%d",&b);
   temp_var=a;
   a=b;
   b=temp_var;
   printf("\nnow 1st number and 2nd number : %d , %d",a,b);
   */

    

    
    






    

    
    
    




    
    










    










}