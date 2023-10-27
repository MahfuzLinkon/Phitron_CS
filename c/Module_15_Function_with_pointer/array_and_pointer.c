#include <stdio.h>
#include <string.h>

int main()
{
    int ar[5] = {10, 20, 30, 40, 50};
    printf("Address of 0th Index: %p\n", &ar[0]);
    printf("Address of 0th Index: %p\n", ar);

    printf("Value of 0th index : %d\n", ar[0]);
    printf("Value of 0th index using Dereference : %d\n", *ar);


    printf("%d\n", ar[1]);
    printf("%d\n", *(ar+1));
    printf("%d\n", 1[ar]);
    printf("%d\n", *(1+ar));

    return 0;
}