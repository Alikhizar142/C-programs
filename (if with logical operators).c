#include <stdio.h>
int main()
{
    int age, fees = 0;
    char membership;
    //Taking input from the user.
    printf("Press M  if you are a member else  N \n");
    scanf("%c", &membership);
    printf(" Enter age : \n");
    scanf("%d", &age);
    // if user is a member & age is less than 65 
    if ((membership == 'm' || membership == 'M') && age < 65)
    {
        fees = 10;
        printf("%d $ is your seminar fee", fees);
    }
      // if user is a member & age is more  than 65 
    else if ((membership == 'm' || membership == 'M') && age >= 65)
    {
        fees = 5;
        printf("%d $ is your seminar fee", fees);
    }
    else
    // if user is not a Member 
    {
        fees = 20;
        printf("You are not a member.%d $ is your seminar fee  \n", fees);
    }
    return 0;
}