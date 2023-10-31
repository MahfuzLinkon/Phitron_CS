#include <stdio.h>
#include <string.h>

void print_array(int *ar, int n, int i)
{
    if(i == n) return;
    printf("%d ", ar[i]);
    print_array(ar, n, (i+1));
}

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    
    print_array(ar, n, 0);         
    return 0;
}