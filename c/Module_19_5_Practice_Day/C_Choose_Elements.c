#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ar[i] < ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }

    long long int sum = 0;
    for (int i = 0; i < k; i++)
    {
        if (ar[i] > 0)
        {
            sum = sum + ar[i];
        }
        
    }
    printf("%lld", sum);

    return 0;
}