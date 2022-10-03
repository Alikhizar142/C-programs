#include<stdio.h>
int main()
{
	int seconds, minutes, hour ,sec, day ;
printf("Enter time in seconds \n");
scanf("%d",&seconds);
day = seconds/(24*60*60);
hour= (seconds-day*86400)/3600;
minutes=(seconds- hour * 3600 - day*86400)/60;
sec=(seconds-day*86400-(hour*3600)-(minutes*60));

printf("%d days %d hours %d minutes %d seconds \n",day,  hour , minutes , sec  );
return 0;

	
}
