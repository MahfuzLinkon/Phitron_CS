#include <stdio.h>
#include <string.h>
// 1. Suppose you are given an array of integers in an arbitrary order.
// Write a recursive solution to find the maximum element from the array.
// Input:
// 5
// 7 4 9 6 2
// Output:
// 9

int max_number(int *ar, int n, int i)
{
    if (i == n - 1)
    {
        return ar[i];
    }
    int max = max_number(ar, n, i + 1);
    if (ar[i] > max)
    {
        max = ar[i];
    }
    return max;
}

int max_number_2(int *ar, int n)
{
    if (n == 0)
    {
        return ar[n];
    }
    int max = max_number_2(ar, n - 1);
    if (ar[n] > max)
    {
        max = ar[n];
    }
    return max;
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
    // int max = max_number(ar, n, 0);
    int max = max_number_2(ar, n - 1);
    printf("%d", max);

    return 0;
}