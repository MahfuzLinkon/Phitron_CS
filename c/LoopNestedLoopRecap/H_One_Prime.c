#include <stdio.h>
int main()
{
    int n;
    int count = 0;
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        count++;
    }

    for (int i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}