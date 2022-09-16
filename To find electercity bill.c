#include<stdio.h>
int main()
{ 
    int unit;
float amount, total_amount , sur_charge ;
printf("Enter total Unit consumed ");
scanf("%d",&unit);
if(unit<=50)
    amount=unit*0.50 ;
else if(unit<=150)
amount= amount + ((unit-50)*0.75);
else if(unit<=250)
amount= amount + ((unit-150)*1.20);
else 
amount= amount + ((unit-250)*1.50);
sur_charge=amount*0.20 ;
total_amount=amount+sur_charge ;
printf("Total cost of electercity is %.2f",total_amount);
return 0 ;
}
