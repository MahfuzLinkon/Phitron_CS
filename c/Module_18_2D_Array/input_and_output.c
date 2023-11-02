#include <stdio.h>
#include <string.h>

int main()
{
    int ar[5][3];

    // 2D array Formate printings
    // for (int i = 0; i < 5; i++)
    // {
    //     for(int j = 0; j<3; j++)
    //     {
    //         printf("ar[%d][%d] ", i, j);
    //     }
    //     printf("\n");
    // }

    // Input 2D Array
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    
    // Printing 2D Array
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }

    return 0;
}