#include <stdio.h>
#include <string.h>
int count_odd(int *ar, int sz)
{
    int count = 0;
    for (int i = 0; i < sz; i++)
    {
        if (ar[i] % 2 != 0)
        {
            count++;
        }
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
    printf("%d", count_odd(ar, n));

    return 0;
}