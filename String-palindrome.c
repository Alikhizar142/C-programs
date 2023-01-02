#include <stdio.h>
#include <string.h>

int isPalindrome(char *name)
{
    int l = 0;
    int h = strlen(name) - 1;

    while (h > l) {
        if (name[l++] != name[h--]) 
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char name[100];

    printf("Enter a string: ");
    scanf("%s", name);

    if (isPalindrome(name)==1) {
        printf("%s is a palindrome.", name);
    } else {
        printf("%s is not a palindrome.", name);
    }

    return 0;
}

