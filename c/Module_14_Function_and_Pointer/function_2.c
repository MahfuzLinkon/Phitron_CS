#include <stdio.h>
#include <string.h>

int sum(void)
{
    int x,y;
    scanf("%d %d", &x,&y);
    return x+y;
}

int main()
{
    int result = sum();
    printf("%d", result);
    return 0;
}