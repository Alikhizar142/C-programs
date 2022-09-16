#include <stdio.h>
int max_of_two(int a, int b)
{
    if(a>b)
    {
    return a;
    }
    else 
    { 
        return b;
}
}
int main()
{
    int a, b ;
    printf("Enter 1st number");
    scanf("%d",&a);
    printf("Enter 2nd number \n");
    scanf("%d",&b);
    int ans =max_of_two(a, b);
    printf("The maximum of a and b is %d", ans);
    
    return 0;
}

