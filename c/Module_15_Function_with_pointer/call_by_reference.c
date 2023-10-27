#include <stdio.h>
#include <string.h>

void fun(int *x)
{
    printf("Value of *X : %p\n", x);
    *x= 500;
}

int main()
{
    int x = 100;
    printf("Value of X Before call fun Function : %d\n", x);
    printf("Address of X : %p\n", &x);
    fun(&x);
    printf("Value of X After call fun Function : %d\n", x);
    return 0;
}