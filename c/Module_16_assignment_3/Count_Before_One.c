#include <stdio.h>
#include <string.h>

int count_before_one(int *ar, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (ar[i] == 1)
        {
            break;
        }
        count++;
    }
    return count;
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
    printf("%d", count_before_one(ar, n));

    return 0;
}