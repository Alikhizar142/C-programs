#include<stdio.h>
#include<math.h>
int main()
{
	int a , b ,c ;
	float descriminent , root1 ,root2 ,imaginary_part,Real_part ;
	printf("Enter value of a  \n");
	scanf("%d",&a);
	printf("Enter value of b  \n");
	scanf("%d",&b);
	printf("Enter value of c  \n");
	scanf("%d",&c);
	descriminent=sqrt((b*b)-4*a*c);
	if(descriminent>0)
	{
	root1=(-b+descriminent)/2*a;
	root2=(-b-descriminent)/2*a;
	printf("Root 1 is %.2f \n",root1);
	printf("Root 2 is %.2f \n",root2);
    }
   else if (descriminent==0)
   {
   
   root1=root2= (-b/2*a);
   printf("Root 1 = Root 2 = %.2f",root1);
   }
   else 
   {
   Real_part = -b/2*a;
   imaginary_part= -descriminent/(2*a);
   printf("Root 1 = %.2f + %.2f \n",Real_part,imaginary_part);
   printf("Root 2 = %.2f - %.2f \n",Real_part,imaginary_part);
   }
   return 0;
}
