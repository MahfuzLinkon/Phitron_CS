#include <stdio.h>
int main()
{
    int dp , p;

    scanf("%d %d", &dp, &p);
    float discount = 1.0 * dp / 100;

    float oP = p / (1 - discount);
    printf("%.2f", oP);
    return 0;
}