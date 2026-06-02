#include <stdio.h>
#include <math.h>

int main()
{
    int n, digits, num, rem, sum;

    printf("Enter range: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        digits = 0;
        sum = 0;
        num = i;

        while (num != 0)
        {
            digits++;
            num /= 10;
        }

        num = i;

        while (num != 0)
        {
            rem = num % 10;
            sum += pow(rem, digits);
            num /= 10;
        }

        if (sum == i)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}