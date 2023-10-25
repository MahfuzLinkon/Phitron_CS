#include <stdio.h>
#include <string.h>

int main()
{
    int x = 10;

    int * p = &x;

    // printf("%p\n", &x);
    printf("%p\n", p);

    // Dereference
    // printf("%d\n", *p);

    // update using dereference
    
    printf("%d\n", x);
    *p=500;
    printf("%d\n", *p);
                
    return 0;
}