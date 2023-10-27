#include <stdio.h>
#include <string.h>

void fun(int ar[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ar[i]);
    }
}

// using pointer
void fun2(int *ar, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(ar+i));
    }
}

int main()
{
    int ar[3] = {10, 20, 30};
    // fun(ar, 3);
    fun2(ar, 3);

    return 0;
}