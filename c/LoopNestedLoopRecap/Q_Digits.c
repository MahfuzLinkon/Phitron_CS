#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int val;
        scanf("%d", &val);
        do
        {
            int x = val % 10;
            printf("%d ", x);
            val = val / 10;
        } while (val != 0);
        printf("\n");
    }

    return 0;
}