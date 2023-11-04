// 3. Implement linear search recursively, i.e. given an array of integers, find a specific value from it.
// Input format: first n, the number of elements. Then n integers. Then, q, number of query, then q integers.
// Output format: for each of the q integers, print its index (within 0 to n-1) in the array or print 'not found', whichever is appropriate.
// Input:
// 5
// 2 9 4 7 6
// 2
// 5
// 9
// Output:
// not found
// 1

#include <stdio.h>
#include <string.h>

int linear_search(int *ar, int num, int n, int i)
{
    if (i == n)
    {
        return -1; 
    }
    // int res = linear_search(ar, num, n, i + 1);
    if (ar[i] == num)
    {
        return i;
    }
    // return res;
    return linear_search(ar, num, n, i + 1);
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
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int num;
        scanf("%d", &num);
        int res = linear_search(ar, num, n, 0);
        
        if (res == -1)
        {
            printf("not found");
        }else
        {
            printf("%d", res);
        }
        
        printf("\n");
    }

    return 0;
}