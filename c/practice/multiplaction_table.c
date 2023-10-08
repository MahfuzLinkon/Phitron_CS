#include <stdio.h>

int main()
{
    // int n;
    // scanf("%d", &n);
    // int i =1;
    // while (i <= 10)
    // {
    //     printf("%d * %d = %d\n",n, i, n*i);
    //     i++;
    // }

    // for (;;)
    // {
    //     printf("%d * %d = %d\n",n, i, n*i);
    //     i++;
    //     if (i > 10) break;
    // }
    // int m = 0;
    // for (;;)
    // {
    //     m += n;
    //     printf("%d * %d = %d\n",n, i, m);
    //     i++;
    //     if (i > 10) break;
    // }

    // Multiplication 1-20;
    
    for (int n = 1; n <= 20; n++)
    {
        int m = 0;
        for (int i = 1; i <= 10; i++)
        {
            m += n;
            printf("%d * %d = %d\n", n, i, m);
        }
        printf("\n");
    }
    
    return 0;
}