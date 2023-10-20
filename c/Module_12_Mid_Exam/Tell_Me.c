#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ar[i]);
        }
        int num;
        int cnt = 0;
        scanf("%d", &num);
        for (int i = 0; i < n; i++)
        {
            if (ar[i] == num)
            {
                cnt = 1;
            }
        }
        if (cnt > 0)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}