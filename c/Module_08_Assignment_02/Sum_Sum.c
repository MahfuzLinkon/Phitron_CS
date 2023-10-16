#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int ar[N];
    int pSum = 0;
    int nSum = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (ar[i] > 0)
        {
            pSum += ar[i];
        }else{
            nSum += ar[i];
        }
    }

    printf("%d %d", pSum, nSum);
    

    return 0;
}