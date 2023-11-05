#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        char s[n + 1];
        scanf("%s", s);

        int tiger = 0;
        int pathan = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'T')
            {
                tiger++;
            }
            else
            {
                pathan++;
            }
        }

        if (tiger > pathan)
        {
            printf("Tiger");
        }
        else if (pathan > tiger)
        {
            printf("Pathaan");
        }
        else
        {
            printf("Draw");
        }
        printf("\n");
    }

    return 0;
}