#include <stdio.h>
#include <string.h>

int max_num(int *ar, int n)
{
    if (n == 0)
    {
        return ar[n];
    }
    int max = max_num(ar, n - 1);
    if (ar[n] > max)
    {
        max = ar[n];
    }
    return max;
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
    int max = max_num(ar, n - 1);
    printf("%d", max);

    return 0;
}