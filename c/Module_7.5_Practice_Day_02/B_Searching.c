#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int ar[N];
    int x, index =-1;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ar[i]);
    }
    scanf("%d", &x);

    for (int i = 0; i < N; i++)
    {
        if (ar[i] == x)
        {
            index = i;
            break;
        }
    }
    
    printf("%d", index);
                
    return 0;
}