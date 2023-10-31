#include <stdio.h>
#include <string.h>

void print_5_to_1(int i)
{
    if (i == 0)
        return;
    printf("%d ", i);
    print_5_to_1(i - 1);
}

int main()
{
    print_5_to_1(5);

    return 0;
}