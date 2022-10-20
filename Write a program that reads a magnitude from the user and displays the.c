#include<stdio.h>
int main()
{
	float magnitude;
    printf("Enter magnitude of the earthquake \n");
    scanf("%f",&magnitude);
    if(magnitude<2.0)
    {
        printf(" A magnitude %.2f earthquake is considered to be a Micro earthquake. \n",magnitude);
    }
    else if (magnitude<3.0)
    {
         printf(" A magnitude %.2f earthquake is considered to be a Very Minor  earthquake. \n",magnitude);
    }
     else if (magnitude<4.0)
    {
        printf(" A magnitude %.2f earthquake is considered to be a Minor  earthquake. \n",magnitude);
    }
     else if (magnitude<5.0)
    {
         printf(" A magnitude %.2f earthquake is considered to be a Light earthquake. \n",magnitude);
    }
       else if (magnitude<6.0)
    {
       printf(" A magnitude %.2f earthquake is considered to be a Moderate  earthquake. \n",magnitude);
    }
     else if (magnitude<7.0)
    {
         printf(" A magnitude %.2f earthquake is considered to be a Strong earthquake. \n",magnitude);
    }
     else if (magnitude<8.0)
    {
       printf(" A magnitude %.2f earthquake is considered to be a Major  earthquake. \n",magnitude);
    }
     else if (magnitude<10.0)
    {
     printf(" A magnitude %.2f earthquake is considered to be a Great  earthquake. \n",magnitude);
    }
    else
    {
       printf(" A magnitude %.2f earthquake is considered to be a Meteoric earthquake. \n",magnitude);;  
    }
    return 0;
}