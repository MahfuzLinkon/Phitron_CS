#include <stdio.h>
#include <string.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int count[m+1];
    for (int i = 1; i <= m; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        int index = ar[i];
        count[index]++;
    }

    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", count[i]);
    }

    return 0;
} 