#include<stdio.h>
int main()
{
	int a, b , ans;
	printf("Enter Value of a \n");
	scanf("%d",&a);
	printf("Enter Value of b \n");
	scanf("%d",&b);
	ans=a*a*a + b*b*b + 3*a*b*(a + b);
	printf("(%d + %d)^3  = %d",a , b ,ans);
	return 0;
	
}
