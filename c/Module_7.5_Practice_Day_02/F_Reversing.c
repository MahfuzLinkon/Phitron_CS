#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int ar[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = N - 1; i >= 0; i--)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}