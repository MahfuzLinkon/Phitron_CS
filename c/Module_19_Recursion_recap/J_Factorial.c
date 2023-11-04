#include <stdio.h>
#include <string.h>

long long int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }

    long long int num = factorial(n - 1);
    return num * n;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%lld", factorial(n));

    return 0;
}