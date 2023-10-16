#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    int max = INT_MIN, min = INT_MAX;
    int maxIndex, minIndex;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
            maxIndex = i;
        }

        if (ar[i] < min)
        {
            min = ar[i];
            minIndex = i;
        }
    }

    ar[minIndex] = max;
    ar[maxIndex] = min;

    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}