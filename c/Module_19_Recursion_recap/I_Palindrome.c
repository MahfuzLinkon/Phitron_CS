#include <stdio.h>
#include <string.h>

int palindrome(char *a, char *b, int i)
{
    if (a[i] == '\0')
    {
        return 1;
    }

    int flag = palindrome(a, b, i + 1);
    if (a[i] != b[i])
    {
        return flag = 0;
    }
    return flag;
}

int palindrome2(char *a, int i, int j)
{
    if (a[i] == '\0')
    {
        return 1;
    }

    int flag = palindrome2(a, i + 1, j - 1);
    if (a[i] != a[j])
    {
        return flag = 0;
    }
    return flag;
}

int main()
{
    char a[10001];
    char b[10001];
    scanf("%s", a);
    int i = 0;
    int j = strlen(a) - 1;

    // while (j >= 0)
    // {
    //     b[i] = a[j];
    //     i++;
    //     j--;
    // }

    // int flag = palindrome(a, b, 0);

    int flag = palindrome2(a, i, j);
    if (flag == 1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}