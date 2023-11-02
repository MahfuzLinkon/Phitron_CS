#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int ar[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    int p_sum = 0;
    int s_sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                p_sum += ar[i][j];
            }
            if (i + j == n - 1)
            {
                s_sum += ar[i][j];
            }
        }
    }
    int dif = abs(p_sum - s_sum);
    printf("%d", dif);

    return 0;
}