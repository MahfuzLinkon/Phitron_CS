#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    int ar[100];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    int count[7] = {0};

    for (int i = 0; i < n; i++)
    {
        // if (ar[i] == 0)
        // {
        //    count[ar[i]]++;
        // }
        int val = ar[i];
        count[val]++;
        
    }
    
    
    for (int i = 0; i <= 6; i++)
    {
        printf("%d - %d\n", i, count[i]);
    }
                
    return 0;
}