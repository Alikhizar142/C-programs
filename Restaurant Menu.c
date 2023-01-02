#include<stdio.h>
#include<string.h>
int menu1()
{ char size;
int input=0,total=0,price=0;
 printf("......................espresso & mocha chiller:.........................\n");
            printf("1. Very vanilla Chiller:\n price: small=361 regular= 409 \n");
            printf("2. Coco Locd: \n price: small=361 regular= 409 \n");
            printf("3. Cookies n cream:\n price: small=361 regular= 409 \n");
            printf("4. HAZELNUT MOCHA CHILLER:\n Price:  small= 396  regular= 461\n");
            printf("5. CHOCOLATE MACADAMIA CHILLER:\n Price:  small= 396  regular= 461\n");
            printf("6. ITALIAN DOLCE CHILLER:\n Price:  small= 396 regular= 461\n");
            printf("7. CARAMEL NUT CHILLER:\n Price:  small= 396  regular= 461\n");
            printf("8. TIRAMISU CHILLER:\n Price:  small= 399 regular= 509\n");
            printf("9. TOFFEE NUT CHILLER:\n Price:  small= 399 regular= 509\n");
            printf("Enter R for regular and S for  small \n");
            scanf("\n %c",&size);
            printf("Choose  the Number \n ");
            scanf("\n%d",&input);
            if(input==1 && size=='R' || size=='r')
            {
              price=409;
              total=total+price;
            }
            else if((input==1 && size=='S' || size=='s'))
            {
              price=361;
              total=total+price;
            }
             else if((input==2 && size=='R' || size=='r'))
            {
              price=409;
              total=total+price;
            }
             else if((input==2 && size=='S' || size=='s'))
            {
              price=361;
              total=total+price;
            }
             else if((input==3 && size=='R' || size=='r'))
            {
              price=409;
              total=total+price;
            }
             else if((input==3 && size=='S' || size=='s'))
            {
              price=361;
              total=total+price;
            }
              else if((input==4 && size=='S' || size=='s'))
            {
              price=396;
              total=total+price;
            }
              else if((input==4 && size=='R' || size=='r'))
            {
              price=461;
              total=total+price;
            }
            else if((input== 5 && size=='S' || size=='s'))
            {
              price=396;
              total=total+price;
            }
              else if((input==5  && size=='R' || size=='r'))
            {
              price=461;
              total=total+price;
            }
            else if((input==6 && size=='S' || size=='s'))
            {
              price=396;
              total=total+price;
            }
              else if((input==6 && size=='R' || size=='r'))
            {
              price=461;
              total=total+price;
            }
            else if((input==7 && size=='S' || size=='s'))
            {
              price=396;
              total=total+price;
            }
              else if((input==7 && size=='R' || size=='r'))
            {
              price=461;
              total=total+price;
            }
            else if((input==8 && size=='S' || size=='s'))
            {
              price=399;
              total=total+price;
            }
              else if((input==8 && size=='R' || size=='r'))
            {
              price=509;
              total=total+price;
            }
             else if((input== 9&& size=='S' || size=='s'))
            {
              price=399;
              total=total+price;
            }
              else if((input==9  && size=='R' || size=='r'))
            {
              price=509;
              total=total+price;
            }
            return total;
}
int menu2()
{  char size;
int input=0,total=0,price=0;
            printf("..............Over Ice............ \n");
            printf("1. SIGNATURE ICED COFFEE \n price: small=300 regular= 374 \n");
            printf("2. ICED MOCHA : \n price: small=300 regular= 361 \n");
            printf("3. ICED CARAMEL LATTE:\n price: small=378 regular= 430 \n");
            printf("4. ICED AMERICAND: \n Price:  small= 252  regular= 274\n");
            printf("5. BLUEBERRY LEMONADE: \n Price:  small= 250  regular= 291 \n");
            printf("6. LYCHEE LEMONADE: \n Price:  small= 250  regular= 291\n");
            printf("7. GREEN APPLE LEMONADE:\n Price:  small= 250  regular= 291\n");
            printf("8. PEACH LEMONADE:\n Price: small= 250  regular= 291\n");
            printf("9. APPLE SODA:\n Price:  small= 335 regular= 348\n");
            printf("10. LIME SODA:\n Price:  small= 335 regular= 361\n");
            printf("11. ICED TEAS (Peach/Lemon Lycheel:\n Price:  small= 239  regular= 291 \n");
            printf("Enter R for regular and S for  small \n");
            scanf("\n%c",&size);
            printf("Choose  the Number \n ");
            scanf("\n%d",&input);
            if(input==1 && size=='R' || size=='r')
            {
              price=374;
              total=total+price;
            }
            else if((input==1 && size=='S' || size=='s'))
            {
              price=300;
              total=total+price;
            }
             else if((input==2 && size=='R' || size=='r'))
            {
              price=361;
              total=total+price;
            }
             else if((input==2 && size=='S' || size=='s'))
            {
              price=300;
              total=total+price;
            }
             else if((input==3 && size=='R' || size=='r'))
            {
              price=430;
              total=total+price;
            }
             else if((input==3 && size=='S' || size=='s'))
            {
              price=378;
              total=total+price;
            }
              else if((input==4 && size=='S' || size=='s'))
            {
              price=252;
              total=total+price;
            }
              else if((input==4 && size=='R' || size=='r'))
            {
              price=274;
              total=total+price;
            }
            else if((input== 5 && size=='S' || size=='s'))
            {
              price=250;
              total=total+price;
            }
              else if((input==5  && size=='R' || size=='r'))
            {
              price=291;
              total=total+price;
            }
            else if((input==6 && size=='S' || size=='s'))
            {
              price=250;
              total=total+price;
            }
              else if((input==6 && size=='R' || size=='r'))
            {
              price=291;
              total=total+price;
            }
            else if((input==7 && size=='S' || size=='s'))
            {
              price=250;
              total=total+price;
            }
              else if((input==7 && size=='R' || size=='r'))
            {
              price=291;
              total=total+price;
            }
            else if((input==8 && size=='S' || size=='s'))
            {
              price=250;
              total=total+price;
            }
              else if((input==8 && size=='R' || size=='r'))
            {
              price=291;
              total=total+price;
            }
             else if((input== 9&& size=='S' || size=='s'))
            {
              price=335;
              total=total+price;
            }
              else if((input==9  && size=='R' || size=='r'))
            {
              price=348;
              total=total+price;
            }
             else if((input==  10 && size=='S' || size=='s'))
            {
              price=335;
              total=total+price;
            }
              else if((input==10 && size=='R' || size=='r'))
            {
              price=341;
              total=total+price;
            }
             else if((input== 11 && size=='S' || size=='s'))
            {
              price=239;
              total=total+price;
            }
              else if((input== 11  && size=='R' || size=='r'))
            {
              price=391;
              total=total+price;
            }
             return total;
}
int menu3()
{  char size;
int input=0,total=0,price=0;
 printf("..............Chochlate chiller ............ \n");
            printf("1. ORIGINAL ICED CHOCOLATE: \n price: small=348 regular= 365 \n");
            printf("2. WHITE ICED CHOCOLATE : \n price: small=348 regular= 365 \n");
            printf("3. CHOCOLATE DELIGHT:\n price: small=348  regular= 400 \n");
            printf("Enter R for regular and S for  small \n");
            scanf("\n%c",&size);
            printf("Choose  the Number \n ");
            scanf("\n%d",&input);
            if(input==1 && size=='R' || size=='r')
            {
              price=365;
              total=total+price;
            }
            else if((input==1 && size=='S' || size=='s'))
            {
              price=348;
              total=total+price;
            }
             else if((input==2 && size=='R' || size=='r'))
            {
              price=365;
              total=total+price;
            }
             else if((input==2 && size=='S' || size=='s'))
            {
              price=348;
              total=total+price;
            }
             else if((input==3 && size=='R' || size=='r'))
            {
              price=400;
              total=total+price;
            }
             else if((input==3 && size=='S' || size=='s'))
            {
              price=348;
              total=total+price;
            }
             return total;
}
int menu4()
{
 char size;
int input=0,total=0,price=0;
 printf(".............. FUSION ............ \n");
            printf("1.ICED LIME : \n price: small=335 regular= 365 \n");
            printf("2.APPLE CHILLER: \n price: small=335 regular= 365 \n");
            printf("3.CHAI CHILLER:\n price: small=348  regular= 400 \n");
            printf("4.GREEN TEA CHILLER:\n price: small=348  regular= 400 \n");
           printf("Enter R for regular and S for  small \n");
            scanf( "\n%c",&size);
            printf("Choose  the Number \n ");
            scanf("\n%d",&input);
            if(input==1 && size=='R' || size=='r')
            {
              price=365;
              total=total+price;
            }
            else if((input==1 && size=='S' || size=='s'))
            {
              price=335;
              total=total+price;
            }
             else if((input==2 && size=='R' || size=='r'))
            {
              price=365;
              total=total+price;
            }
             else if((input==2 && size=='S' || size=='s'))
            {
              price=335;
              total=total+price;
            }
             else if((input==3 && size=='R' || size=='r'))
            {
              price=400;
              total=total+price;
            }
             else if((input==3 && size=='S' || size=='s'))
            {
              price=348;
              total=total+price;
            }
               else if((input== 4 && size=='R' || size=='r'))
            {
              price=400;
              total=total+price;
            }
             else if((input== 4 && size=='S' || size=='s'))
            {
              price=348;
              total=total+price;
            }
             return total;
}
int main()
{
    char Menu[10];
    int a=0,b=0,c=0,d=0, total=0,SR=500;
    float tax=0,Stotal=0;

    printf(">>>>>>>>>>>>>>>>>>>> Menu >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n ");
   
   for ( int i= 1;;i++)
    { 
       printf(" 1. Espresso & MOCHA CHILLER:\n");
       printf(" 2. Over ice: \n");
       printf(" 3. Choclate Chiller:\n");
       printf(" 4. Fusion  \n");
       printf("Enter N to exit \n");
       printf("Select the menu you want  \n",i );
        scanf("\n%s",Menu);
        if ( strcmp(Menu, "1" )==0)
           a=menu1();
      
       else  if ( strcmp(Menu, "2" )==0)
            {
            b=menu2();
            }
       else if ( strcmp(Menu, "3" )==0)
            {
           c= menu3();
            }
        else if ( strcmp(Menu, "4" )==0)
           {
           d=menu4();
           }
         else if ( strcmp(Menu, "No" )==0 || strcmp(Menu,"N")==0 || strcmp(Menu,"n")==0)
        {
          break;
        }
          total=a+b+c+d;
     }  
         printf("Your bill without S.R and tax is %d \n ",total);
         SR=500;
         printf("Service charge = %d \n",SR);
         tax=(20*total)/100;
         printf("Your TAX is = %.2f\n",tax);
         Stotal=SR+tax+total;
     printf("Your Total Bill is %.2f",Stotal);
        return 0;
}