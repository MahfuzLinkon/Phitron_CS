#include <stdio.h>
#include <string.h>
void change_it(int *ar, int sz)
{
    ar[sz - 1] = 100;
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
    change_it(ar, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}