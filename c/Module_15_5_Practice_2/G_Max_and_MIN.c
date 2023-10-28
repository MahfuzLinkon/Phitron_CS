#include <stdio.h>
#include <limits.h>

void max_min(int *ar, int size)
{
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
        }

        if (ar[i] > max)
        {
            max = ar[i];
        }
    }
    printf("%d %d", min, max);
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
    max_min(ar, n);

    return 0;
}