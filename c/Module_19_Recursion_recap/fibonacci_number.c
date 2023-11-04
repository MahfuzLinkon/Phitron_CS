// 4. Write a recursive program to compute nth fibonacci number. 1st and 2nd fibonacci numbers are 1, 1.
// Input:
// 6
// Output:
// 8

#include <stdio.h>
#include <string.h>

int fibonacci(int n)
{
    if (n <= 2)
    {
        return 1;
    }
    return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", fibonacci(n));

    return 0;
}