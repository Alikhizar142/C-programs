#include <stdio.h>

int main() 
{
int Speed,Time,Distance=0;
printf("Enter Speed in miles per hour: \n");
scanf("%d",&Speed);
printf("Enter time:                   \n");
scanf("%d",&Time);
if(Speed>0 && Time>=1)
{
printf("Hour\t\t\t DISTANCE(miles)\n");
printf("..............................\n");
for (int i=1;i<=Time;i++)
{
    Distance=(Speed*i);
    printf("%d\t\t\t\t\t %d\n",i,Distance);
}
}
else
printf("\"Invalid Input\"");
    return 0;
}
