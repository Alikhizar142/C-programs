#include<stdio.h>
int main()
{
    int temprature;
    float C,F;
    char input;
    printf("Prss F  to convert in Fahrenheit and C to Celcius \n" );
    scanf("%c",&input);
    printf("Enter Temprature \n" );
    scanf("%d",&temprature);
    
    if(input=='f'||input=='F')
    {
        F=(temprature*9.0/5)+32;
        printf("The Temprature is %.2f Fahrenheit \n",F);
    }
    else
    {
        C=(temprature-32)*(5.0/9);
         printf("The Temprature is %.2f Celcius  \n",C);
    }
    return 0;
}