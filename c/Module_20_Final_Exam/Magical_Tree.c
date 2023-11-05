#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x = 6;
    for (int i = 1; i < n; i = i + 2)
    {
        x = x + 1;
    }

    int k = 1;
    int s = x - 1;

    for (int i = 1; i <= x + 5; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("*");
        }

        if (i >= x)
        {
            s = 5;
            k = n;
        }
        else
        {
            s--;
            k += 2;
        }
        printf("\n");
    }

    return 0;
}