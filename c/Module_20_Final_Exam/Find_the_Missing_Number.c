#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long int m;
        int a, b, c;
        scanf("%lld %d %d %d", &m, &a, &b, &c);

        long long int mult = a * b * c;
        long long int x = m / mult;

        if (m == mult * x)
        {
            printf("%lld\n", x);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}