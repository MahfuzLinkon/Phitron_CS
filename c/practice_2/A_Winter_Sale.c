#include <stdio.h>
int main()
{
    int dp , price;

    scanf("%d %d", &dp, &price);
    float discount = 1.0 * dp / 100;

    float oP = price / (1 - discount);
    printf("%.2f", oP);
    return 0;
}