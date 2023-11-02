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

    int col;
    scanf("%d", &col);

    if (col < n)
    {
        for (int i = 0; i < m; i++)
        {
            printf("%d\n", ar[i][col]);
        }
    }
    else
    {
        printf("Colum does not exits!");
    }

    return 0;
}