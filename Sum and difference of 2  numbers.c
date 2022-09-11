#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b ;
    float c,d ;
    scanf("%d %d", &a , &b) ;
    scanf("%f %f", &c ,&d) ;
    int Sum=a+b ;
    int differnce =a-b;
    float sum1=c+d;
    float differnce1=c-d ;
    printf("%d %d \n" ,Sum , differnce);
    printf("%.1f %.1f", sum1 , differnce1);
    
    return 0;
}