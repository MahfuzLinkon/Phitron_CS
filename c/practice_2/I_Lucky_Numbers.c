#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a = n % 10;
    int b = (n / 10) % 10;

    if (a % b == 0)
    {
        printf("YES");
    }
    else if (b % a == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}