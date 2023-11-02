#include <stdio.h>
#include <string.h>

int main()
{
    int m, n; // m = row; n= column;
    scanf("%d %d", &m, &n);
    int ar[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    int row;
    scanf("%d", &row);

    if (row < m)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%d ", ar[row][i]);
        }
    }
    else
    {
        printf("Row does not exits!");
    }

    return 0;
}