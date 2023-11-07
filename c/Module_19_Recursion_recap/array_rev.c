#include <stdio.h>
#include <string.h>

void array_rev(int *ar, int n)
{
    if (n == 0)
    {
        return;
    }
    array_rev(ar, n - 1);
    printf("%d ", ar[n-1]);
}

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    array_rev(ar, n);

    return 0;
}