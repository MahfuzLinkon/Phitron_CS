#include <stdio.h>
#include <string.h>

void print_1_to_N(int i)
{
    if(i == 6) return;
    printf("%d ", i);
    print_1_to_N(i+1);
}


int main()
{
    // int N;
    // scanf("%d", &N);
    print_1_to_N(1);
                
    return 0;
}