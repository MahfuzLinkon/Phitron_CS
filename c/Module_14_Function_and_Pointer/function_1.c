#include <stdio.h>
#include <string.h>

int sum(int x, int y)
{
    return x+y;
}

int main()
{
    int result = sum(10, 20);
    printf("%d", result);
    return 0;
}