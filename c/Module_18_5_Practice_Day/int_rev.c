#include <stdio.h>
#include <string.h>

int int_rev(int n, int s)
{
    if (n == 0)
    {
        return s;
    }
    s = (s * 10 )+ (n % 10);
    return int_rev(n / 10, s);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", int_rev(n, 0));

    return 0;
}