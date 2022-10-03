#include<stdio.h>
int main()
{
	int seconds, minutes, hour ,sec;
printf("Enter time in seconds \n");
scanf("%d",&seconds);
hour= seconds/3600;
minutes=(seconds-(3600*hour))/60;
sec=(seconds-(hour*3600)-(minutes*60));

printf("%d hours %d minutes %d seconds \n", hour , minutes , sec  );
return 0;

	
}
