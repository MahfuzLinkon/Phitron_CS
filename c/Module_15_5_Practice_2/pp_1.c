#include <stdio.h>
#include <string.h>
int my_abs(int a)
{
    if (a<0)
    {
        a= a*(-1);
    }
    return a;
}

int main()
{
    int a;
    scanf("%d", &a);
    printf("%d", my_abs(a));
                
    return 0;
}