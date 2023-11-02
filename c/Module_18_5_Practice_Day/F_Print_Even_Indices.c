#include <stdio.h>
#include <string.h>

void even_rev_print(int *ar, int n, int i)
{
    if (i == n)
    {
        return;
    }
    even_rev_print(ar, n, i + 1);
    if (i % 2 == 0)
    {
        printf("%d ", ar[i]);
    }
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

    even_rev_print(ar, n, 0);
    return 0;
}