#include <stdio.h>
#include <string.h>

void sum(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int res = a + b;
    printf("%d\n", res);
}

int main()
{
    sum();
    sum();

    return 0;
}