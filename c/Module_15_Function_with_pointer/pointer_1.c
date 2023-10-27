#include <stdio.h>
#include <string.h>

int main()
{
    int x =10;
    int *ptr = &x;
    *ptr = 100;


    // int **ptr2 = &ptr;
    // **ptr2 = 200;

    int *ptr2 = ptr;
    *ptr2 = 400;
    

    printf("Address of X: %p\n", &x);
    printf("Value of PTR: %p\n", ptr);
    printf("Address of PTR: %p\n", &ptr);
    printf("Address of X Directly: %d\n", x);
    printf("Value of X using Dereference: %d\n", *ptr);

    return 0;
}