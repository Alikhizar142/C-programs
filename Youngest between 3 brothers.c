#include<stdio.h>
int main()
{
	int Ali,Ahmed,Saad;
	printf("Enter age of Ali \n");
	scanf("%d",&Ali);
	printf("Enter age of Ahmed \n");
	scanf("%d",&Ahmed);
	printf("Enter age of Saad \n");
	scanf("%d",&Saad);
	if(Ali<Ahmed && Ali<Saad)
	printf("Ali is youngest \n");
	else if(Ahmed<Ali && Ahmed<Saad)
		printf("Ahmed is youngest \n");
	else 
	printf("Saad is youngest ");
	return 0;
}
