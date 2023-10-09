#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    for (int k = 1; k <= N; k++)
    {
        int val;
        scanf("%d", &val);
        int res = 1;
        for (int i = val; i > 0; i--)
        {
            res = res * i;
        }
        printf("%d", res);
        printf("\n");
    }

    return 0;
}