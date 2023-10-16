#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int ar[N];
    int x, v;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ar[i]);
    }
    scanf("%d %d", &x, &v);
    ar[x] = v;

    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}