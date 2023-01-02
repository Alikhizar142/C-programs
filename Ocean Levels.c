#include <stdio.h>

int main() 
{
float level=1.5;
printf("Current sea level is %.1f mm \n",level);
float sum=1.5;;
int i=1;
while(i<=25)
{
    sum=sum+level;
    printf("After %d year sea level has risen about  %.2f mm \n",i,sum);
    i++;
}


    return 0;
}