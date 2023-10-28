#include <stdio.h>
#include <string.h>

void print_it(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i != n)
        {
            printf(" ");
        }
        
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    print_it(n);
    return 0;
}