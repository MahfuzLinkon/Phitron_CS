#include <stdio.h>

int main ()
{
    // int a, b;

    // scanf("%d/%d", &a, &b);

    // float res = (float) a/b; // type casting

    // printf ("%lf", res);

    int a;
    scanf("%d", &a);
    long long int b ;
    scanf("%lld", &b);
    float c;
    scanf("%f", &c);
    char d;
    scanf("%c", &d);
    
    printf("%d\n", a);
    printf("%lld\n", b);
    printf("%0.2f\n", c);
    printf("%c\n", d);
}