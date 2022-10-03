#include<stdio.h>
int main()
{
	int  angel1,angel2,angel3, sum;
	printf("Enter angel 1: \n");
	scanf("%d",&angel1);
	printf("Enter angel 2: \n ");
	scanf("%d",&angel2);
	printf("Enter angel 3: \n");
	scanf("%d",&angel3);
	sum=angel1+angel2+angel3;
	printf("The sum of angels is %d \n",sum);
	if(sum==180 && angel1>0 && angel2>0 && angel3>0)
	printf("It is a valid triangle. \n");
	else
	printf("It is an invalid triangle. ");
	return 0;

	
}
