#include <stdio.h>

int main()
{
    int num = 1, rem, sum, c = 0;

    for (int k = 2; k > 0; k++)
    {
        sum = 0;
        for (int i = 1; i <= num / 2; i++)
        {
            rem = num % i;
            if (rem == 0)
            {
                sum = sum + i;
            }
        }
        if (sum == num)
        {
            c++;
            printf(" %d is a Perfect Number\n", num);

            if (c == 4)
            {
                break;
            }
        }
        num++;
    }
    return 0;
}