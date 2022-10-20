#include<stdio.h>
int main()
{
	int month , date ;
    printf("Enter your Birthday Month ( 1 to 12): \n");
    scanf("%d",&month);
    printf("Enter your Birthday date : \n");
    scanf("%d",&date);
    // checking conditions 
    if((month == 3 && date>=21) || (month == 4 && date<=20))
    {
        printf("Your Astrological sign is Aries. \n");
    }
    else if ((month == 4 && date>=21) || (month == 5 && date<=20))
     {
        printf("Your Astrological sign is Taurus. \n");
    }
     else if ((month == 5 && date>=21) || (month == 6 && date<=20))
     {
        printf("Your Astrological sign is Gimini. \n");
    }
     else if ((month == 6 && date>=21) || (month == 7 && date<=22))
     {
        printf("Your Astrological sign is Cancer.  \n");
    }
     else if ((month == 7 && date>=23) || (month == 8 && date<=22))
     {
        printf("Your Astrological sign is Leo.  \n");
    }
    else if ((month == 8 && date>=23) || (month == 9 && date<=22))
     {
        printf("Your Astrological sign is Virgo.  \n");
    }
     else if ((month == 9 && date>=23) || (month == 10 && date<=22))
     {
        printf("Your Astrological sign is Libra.  \n");
    }
    else if ((month == 10 && date>=23) || (month == 11 && date<=22))
     {
        printf("Your Astrological sign is Scorpio.  \n");
    }
    else if ((month == 11 && date>=23) || (month == 12 && date<=21))
     {
        printf("Your Astrological sign is Sagittarius . \n");
    }
     else if ((month == 12 && date>=22) || (month == 1 && date<=19))
     {
        printf("Your Astrological sign is Capricorn .  \n");
    }
     else if ((month == 1 && date>=20) || (month == 2 && date<=19))
     {
        printf("Your Astrological sign is Aquarius .  \n");
    }
     else if  ((month == 2 && date>=20) || (month == 3 && date<=20))
     {
             printf("Your Astrological sign is Pisces.  \n");
     }
     else 
	 printf("You entered incorrect date. ");
    return 0;
}
