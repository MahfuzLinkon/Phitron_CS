#include <stdio.h>
#include <string.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int ar[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    int el = n * m;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (ar[i][j] == 0)
            {
                count++;
            }
        }
    }

    if (count == el)
    {
        printf("Zero Matrix");
    }
    else
    {
        printf("Not Zero Matrix");
    }

    return 0;
}