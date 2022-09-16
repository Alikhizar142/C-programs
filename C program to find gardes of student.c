#include<stdio.h>
int main()
{ int a,b,c,d,e,sum ;
float percentage;
printf("Enter marks of Physics");
scanf("%d",&a);
printf("Enter marks of Chemistry");
scanf("%d",&b);
printf("Enter marks of Computer");
scanf("%d",&c);
printf("Enter marks of Biology");
scanf("%d",&d);
printf("Enter marks of Mathmatics");
scanf("%d",&e);

sum=a+b+c+d+e ;
percentage= sum/5.0 ;
printf("your percentage is %.2f \n",percentage);
if(percentage>=90)
{
printf("Your grade is A");
}
else if(percentage>=80) {
printf("Your grade is B");
}
else if(percentage>=70)
{
    printf("Your grade is C");
   }
else if(percentage>=60)
{
    printf("Your grade is D");
}
else if (percentage>=40)
{
    printf("Your grade is E");
}
else 
printf("Your grade if F");
return 0;
}

