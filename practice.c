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


    //✌️#1 volume of a sphere

    /*
    float r,vol;
    printf("\nenter redius :  ");
    scanf("%f",&r);
    vol=(4/3)*3.14*r*r*r;
    printf("volume : %f",vol);
    */


    //✌️#2 area of a circle

    /*
    float r , area ;
    printf("\nenter redius : ");
    scanf("%f",&r);
    area = 3.14*r*r;
    printf("Area : %f",area);
    */


   //✌️#3 calculate overall percentage of 6 subjects

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


   //✌️#4 calculate the simple interest

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


    //✌️#5 code practuce_2 : just prints the valus of "p" and "q"

    /*
    int p,q;
    printf("enter values of p and q : ");
    scanf("%d %d",&p,&q);
    printf("p = %d , q = %d",p,q);
    /*


    //✌️#6 find remainder , here a must be > than b , otherwise code will curse you


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

    //✌️#7 code practice_3 : take integer as a input and print half of the taken number

    /*
    int a;
    printf("enter a integer number : ");
    scanf("%d",&a);
    printf("half : %d",a/2);
    */

    //✌️#8 code practice _4 : input a float number and it will print the fractional part

    /*
    float a,f;
    int b;
    printf("enter a float number : ");
    scanf("%f",&a);
    b = a;
    f = a - b;
    printf("\nfractional part : %f",f);
    */


    //✌️#9 code practice_5 : predict the value of "k","l","a","b"
    // <note> : if you enter cheat code : 69 , it will show you answers , if you enter 00 , it will not show you answers and print "ok!!" and ends the code //

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


    //✌️#10 fibonacci sequence : a sequence where a number is sum of previous two numbers first and second numers in febonacci sequence are 0,1 . ex : 0,1,1,2,3,5,8,13,etc


    /*  
    int i,n,nt,n1=0,n2=1;
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


   //✌️#11 swap two numbers using a temporary variable


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


    //✌️#12 find the roots of the quadratic equation
    
    /*
        <notes>(logic) :

            1) "b^2-4ac" is called "discriminant"
            2)if the discriminant > 0 ,then roots are real and different
                then : 
                    root_1 : -b+sqrt(b^2-4ac)/2a
                    root_2 : -b-sqrt(b^2-4ac)/2a
            3)if the discriminant = 0 ,then roots are real and equal
                then : 
                    root_1=root_2=-b/2a
            4)if the discriminant < 0 ,then the roots are complex and different 
                then : 
                    root_1 : (-b/2a)+[i*sqrt-(b^2-4ac)/2a]
                    root_2 : (-b/2a)-[i*sqrt-(b^2-4ac)/2a]
    */   
    

   /*
   double a,b,c,discri,root_1,root_2,real_part,imag_part;
   printf("enter a : ");
   scanf("%lf",&a);
   printf("\nenter b : ");
   scanf("%lf",&b);
   printf("\nenter c : ");
   scanf("%lf",&c);
   discri=b*b-4*a*c;
   //real and different roots
   if (discri>0)
   {
        root_1=(-b+sqrt(discri))/(2*a);
        root_2=(-b-sqrt(discri))/(2*a);
        printf("\nroot_1 & root_2 : %lf , %lf",root_1,root_2);
   }
   //common and real roots
   else if (discri==0)
   {
        root_1=root_2=-b/2*a;
        printf("\nroot : %lf",root_1);
   }
   //complex roots(here i did'nt understand a shit !! what's going on !! i just copied the logic)
   else
   {
        real_part=-b/(2*a);
        imag_part=sqrt(-discri)/(2*a);
        printf("\nroot_1 : %lf+%lfi",real_part,imag_part);
        printf("\nroot_2 : %lf-%lfi",real_part,imag_part);
   }
   */ 


   //✌️#13 count amount of individual digit in a number


    /*
    long long n , count=0 ;
    printf("enter the number : ");
    scanf("%lld",&n);
    while(n>0)
    {
        n=n/10;
        count=count+1;
    }
    printf("\nthe total number of digits were : %lld",count);
    */


   //✌️#14 check whether a character is an aplabet or not

    
    /*
    char c;
    printf("enter the character : ");
    scanf("%c",&c);
    if ((c>='a' && c<='z') || (c>='A' && c<='Z'))
    {
        printf("%c is an alphabet",c);
    }
    else
    {
        printf("%c is not an alphabet",c);
    }
    */


    
    //✌️#15 find an alphabet is a vowel or consonent


    /*
    char c,up_c_vo,lo_c_vo;
    printf("enter the alphabet : ");
    scanf("%c",&c);
    up_c_vo=(c=='a' || c=='e'|| c=='i' || c=='o' || c=='u');
    lo_c_vo=(c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
    if(c=up_c_vo)
    {
        printf("vowel");
    }
    else if(c=lo_c_vo)
    {
        printf("vowel");
    }
    else
    {
        printf("consonent");
    }
    */
    

    //✌️#16 print A to Z using a loop


    /*
    char c;
    for(c='A';c<='Z';++c)
    printf("%c ",c);
    */


    //✌️#17 print uppercase A to Z if input is "u" and lowercase a to z if input is "l" 


    /*
    char c,alph;
    printf("for uppercase u and for lowercase l : ");
    scanf("%c",&c);
    if (c=='u' || c=='U')
    {
        for (alph='A';alph<='Z';alph++)
        {
             printf("%c ",alph);
        }
    }
    else if (c=='l' || c=='L')
    {
        for (alph='a';alph<='z';alph++)
        {
            printf("%c ",alph);
        }
    }
    else
    {
        printf("\nerror !! your input is not acceptable !!");
    }
    */


    //✌️#18 calculate the largest number among three numbers 


    /*
    float a,b,c;
    printf("enter a : ");
    scanf("%f",&a);
    printf("enter b : ");
    scanf("%f",&b);
    printf("enter c : ");
    scanf("%f",&c);
    if (a>b)
    {
        if (b>c)
        {
            printf("bigest number is a : %f",a);
        }
    }
    else if (c>b)
    {
        if(b>a)
        {
            printf("bigest number is c : %f",c);
        }
    }
    else
    {
        printf("bigest number is a : %f",b);
    }
    */
    

    //✌️#19 how to print some infinitly


    /*
    while(1)
    {
        printf("it's an infinite loop\n");
    }
    */


   //check if it is a prime number or not
   

    /*
   int n; 
   printf("enter number : ");
   scanf("%d" , & n);
   if(n>3)
   {
       if (n==5)
       {
           printf("prime");
       }
       else if (n%2==0)
       {
           printf("not prime");
       }
       else if (n%3==0)
       {
           printf("not prime");
       }
       else if (n%5==0)
       {
           printf("not prime");
       }
       else 
       {
            printf("prime");
       }
   }
   else 
   {
       printf("prime");
   }
    */






    

    
    
    




    
    










    










}