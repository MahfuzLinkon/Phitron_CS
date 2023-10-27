#include <stdio.h>
#include <string.h>
void fun(int x)
{
    printf("Address Of Fun X : %p\n", &x);
    x= 100;
    printf("Value of Fun X : %d\n",x);
}

int main()
{
    int x = 10;
    printf("Address Of Main X : %p\n", &x);
    fun(x);
    x= 200;
    printf("Value of Main X : %d\n",x);
    return 0;
}