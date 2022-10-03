#include<stdio.h>
int main()
{
	int cost_price, sale_price;
	int profit , loss;
	printf("Enter cost price: \n");
	scanf("%d",&cost_price);
	printf("Enter sale price: \n");
	scanf("%d",&sale_price);
	if(cost_price < sale_price )
	{
		printf("Seller made a profit \n");
	    profit=sale_price - cost_price;
	    printf("Seller earn profit of %d \n",profit);
	}
	else
	{
		printf("Seller incurred a loss\n");
	    loss=cost_price - sale_price;
	    printf("Seller incurred loss  of %d \n",loss);
     }
return 0;

}
