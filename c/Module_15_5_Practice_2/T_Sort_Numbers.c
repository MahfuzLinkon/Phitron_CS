#include <stdio.h>
#include <string.h>

void sort_number(int *ar, int sz)
{
    for (int i = 0; i < sz-1; i++)
    {
        for(int j = i+1; j<sz; j++)
        {
            if (ar[i] > ar[j])
            {
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
            
        }
    }

    for (int i = 0; i < sz; i++)
    {
        printf("%d\n" ,ar[i]);
    }
    printf("\n");
    
}

int main()
{
    int ar[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &ar[i]);
    }
    int a = ar[0], b=ar[1], c=ar[2];
    sort_number(ar, 3);
    printf("%d\n%d\n%d" ,a,b,c);
                
    return 0;
}