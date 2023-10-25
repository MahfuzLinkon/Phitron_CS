#include <stdio.h>
#include <string.h>

void sum(int x, int y)
{
    int result = x+y;
    printf("%d", result);   
}

int main()
{
    int x,y;
    scanf("%d %d", &x,&y);
    sum(x,y);
    
    return 0;
}