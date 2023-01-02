#include <stdio.h>

int main() 
{
int Town_A , Town_B;
int g1,g2;
printf("Enter the Population of Town A:\n");
scanf("%d",&Town_A);
printf("Enter the growth rate of Town A:\n");
scanf("%d",&g1);
printf("Enter the Population of Town B:\n");
scanf("%d",&Town_B);
printf("Enter the growth rate of Town B:\n");
scanf("%d",&g2);
if((Town_A<Town_B) &&  (g1>g2))
{
int count=0;
while(1)
{
    Town_A=Town_A+((g1*Town_A)/100);
    Town_B=Town_B+((g2*Town_B)/100);
   
    if(Town_A>=Town_B)
    {  if(Town_A>Town_B)
       {
        printf("After %d years population of town A is greater than town B: \n",count);
        printf("The population of Town A is %d :\n",Town_A);
        printf("The population of Town B is %d :\n",Town_B);
        }
        else if (Town_A=Town_B)
        {
         printf("After %d years population of town A is Equal to town B: \n",count);
        printf("The population of Town A is %d :\n",Town_A);
        printf("The population of Town B is %d :\n",Town_B);
        }
        break;
    }
     count++;
}
}
else
printf("Error invalid Input Check condition \n");
    return 0;
}