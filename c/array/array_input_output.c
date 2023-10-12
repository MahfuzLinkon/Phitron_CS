#include<stdio.h>
int main()
{
    // input into array 
    int ar[5];
    for (int i = 0; i < 5; i++)
    {
       scanf("%d", &ar[i]);
    }

    for ( int j = 0; j < 5; j++)
    {
        printf("%d\n", ar[j]);
    }
    

    return 0;
}