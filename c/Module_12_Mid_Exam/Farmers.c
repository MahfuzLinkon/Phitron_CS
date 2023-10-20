#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);

        int result = d - (m1 * d) / (m1 + m2);
        printf("%d\n", result);
    }

    return 0;
}