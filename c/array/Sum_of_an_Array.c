#include<stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    
    int ar[N];
    int sum=0;

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ar[i]);
    }

    for (int i = 0; i < N; i++)
    {
        sum += ar[i];
    }

    printf("%d", sum);
                
    return 0;
}