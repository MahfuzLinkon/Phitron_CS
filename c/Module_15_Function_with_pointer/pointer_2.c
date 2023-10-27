#include <stdio.h>
#include <string.h>

int main()
{
    double x = 15.65;

    double *ptr = &x;

    *ptr = 500.125;

    printf("%lf", *ptr);
                
    return 0;
}