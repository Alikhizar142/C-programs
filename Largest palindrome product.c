#include <stdio.h>
int palindromic(int n)
{
    int reverse = 0, temp = n;
    while (temp != 0)
    {
        reverse = 10 * reverse + (temp % 10);
        temp = temp / 10;
    }

    return reverse == n;
}
int main()
{
    int i=1, j=1, max = 0;
    for(i = 100;i <1000;i++)
    {
        for (j=100; j<1000;j++)
        {
            int p = i * j;
            if (palindromic(p) && p > max)
            {
                max = p;
            }
          
        }

    }
    printf(" \" %d \"is the largest  largest palindrome number made from the product of two 3-digit numbers \n", max);
    return 0;
}

