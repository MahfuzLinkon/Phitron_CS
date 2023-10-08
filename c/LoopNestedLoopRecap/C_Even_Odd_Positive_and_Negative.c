#include <stdio.h>
int main()
{
    int n, x;
    int even = 0;
    int odd = 0;
    int positive = 0;
    int negative = 0;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if (x % 2 == 0)
        {
            even++;
        }else
        {
            odd++;
        }

        if (x > 0)
        {
            positive++;
        }else if (x < 0)
        {
            negative++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negative);

    return 0;
}