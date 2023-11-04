#include <stdio.h>

int main()
{
    int x, p;
    scanf("%d %d", &x, &p);
    float dis = 1.0 * x / 100;

    float op = p / (1 - dis);
    printf("%0.2f", op);

    return 0;
}