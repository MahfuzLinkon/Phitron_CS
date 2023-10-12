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

    for (int i = 0; i < N; i++)
    {
        if (ar[i] > 0)
        {
            ar[i] = 1;
        }
        else if (ar[i] < 0)
        {
            ar[i] = 2;
        }
    }

    // Printing
    for (int i = 0; i < N; i++)
    {
        printf("%d ", ar[i]);
    }

    return 0;
}