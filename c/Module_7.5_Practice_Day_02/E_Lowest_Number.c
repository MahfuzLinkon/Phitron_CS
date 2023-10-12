#include <stdio.h>
#include <limits.h>
int main()
{
    int N;
    scanf("%d", &N);
    int ar[N];
    int min = INT_MAX;
    int index;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
            index = i + 1;
        }
    }

    printf("%d %d", min, index);

    return 0;
}