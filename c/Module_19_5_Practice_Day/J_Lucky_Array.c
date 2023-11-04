#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
        }
    }

    int f[1] = {0};

    for (int i = 0; i < n; i++)
    {
        if (ar[i] == min)
        {
            f[0]++;
        }
    }

    if (f[0] % 2 == 0)
    {
        printf("Unlucky");
    }
    else
    {
        printf("Lucky");
    }

    return 0;
}