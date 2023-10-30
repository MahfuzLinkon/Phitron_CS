#include <stdio.h>
#include <string.h>

void odd_even(void)
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (ar[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }
    printf("%d %d", evenCount, oddCount);
}

int main()
{
    odd_even();

    return 0;
}