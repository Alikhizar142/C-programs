#include <stdio.h>
int main()
{
 int a ;
 printf("Enter a Number \n");
 scanf("%d",&a);
 if(a==0) 
 {
     printf("The number you  entered is zero \n");
 }
 else if(a>0)
 {
 printf("The number is positive \n");
 }
 else if(a<0) 
 {
 printf("The number is negative");
}
    
    return 0;
}

