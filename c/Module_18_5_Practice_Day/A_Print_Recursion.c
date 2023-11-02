#include <stdio.h>
#include <string.h>
void recursion_print(int n)
{
    if (n == 0)
    {
        return;
    }

    printf("I love Recursion\n");
    recursion_print(n - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    recursion_print(n);
    return 0;
}