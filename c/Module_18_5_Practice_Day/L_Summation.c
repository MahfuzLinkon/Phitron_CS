#include <stdio.h>
#include <string.h>

long long int array_sum(int *ar, int n, int i)
{
    if (i == n - 1)
    {
        return ar[i];
    }
    long long int sum = array_sum(ar, n, i + 1);
    return sum + ar[i];
}

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    printf("%lld", array_sum(ar, n, 0));

    return 0;
}