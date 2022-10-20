#include<stdio.h>
int main()
{
    char c;
    char UPPER_CASE;
    char lower_case;
    // Taking input 
    printf("Enter a charachter \n");
    scanf("%c",&c);
    // comparing upper case Vowles 
    UPPER_CASE=  (c=='A' || c=='E' || c=='I' || c=='O' || c=='U' );
    // comparing Lower case Vowles 
    lower_case=  ( c=='a' || c== 'e' || c== 'i' || c==  'o' || c== 'u' );
    if( UPPER_CASE || lower_case)
    printf("It is a vowel");
    // if the vowel is not enterd by user 
    else 
    printf("It is a consonant");
    return 0;
    
}
