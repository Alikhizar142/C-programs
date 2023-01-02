#include<stdio.h>
int main()
{
	int a[9],i,j,count=0;
	for(i=0;i<9;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
	{
		int flag=1;
		for(j=2;j<a[i]/2;j++)
		{
			if(a[i]%j==0)
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			count++;
		}
	}
	printf("The prime numbr in array %d",count);
	return 0;
}