#include <stdio.h>
#include <string.h>

int main()
{
    int a, b;
    float c, d;
    scanf("%d %d %f %f", &a, &b, &c, &d);

    int intSum = a + b;
    int intDiff = a - b;

    float floatSum = c + d;
    float floatDiff = c - d;

    printf("%d %d\n", intSum, intDiff);
    printf("%0.1f %0.1f\n", floatSum, floatDiff);

    return 0;
}