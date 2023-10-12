#include <stdio.h>
int main()
{
    long long int n, m, k;
    long long int count = 0;
    long long int min;
    scanf("%lld %lld %lld", &n, &m, &k);

    if (n <= m && n <= k)
    {
        min = n;
    }
    else if (m <= n && m <= k)
    {
        min = m;
    }
    else if (k <= n && k <= m)
    {
        min = k;
    }

    count += min;

    n = n - min;
    m = m - min;
    k = k - min;

    n = n / 2;
    if (n < k)
    {
        count += n;
    }
    else if (n > k)
    {
        count += k;
    }

    printf("%lld", count);

    return 0;
}