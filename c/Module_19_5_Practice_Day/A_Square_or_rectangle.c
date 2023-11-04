#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int w, h;
        scanf("%d %d", &w, &h);
        if (w == h)
        {
            printf("Square");
        }
        else
        {
            printf("Rectangle");
        }
        printf("\n");
    }

    return 0;
}