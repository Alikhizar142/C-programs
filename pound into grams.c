#include<stdio.h>
int main()
{
	float pound , gram;
	printf("Enter pounds \n");
	scanf("%f",&pound);
	gram=453.592*pound;
	printf("%.2f pound = %.2f grams \n",pound, gram);
	return 0;
	
}
