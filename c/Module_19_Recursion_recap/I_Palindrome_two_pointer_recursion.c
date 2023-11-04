#include <stdio.h>
#include <string.h>

int palindrome(char *a, int i, int j)
{
    if (a[i] == '\0')
    {
        return 1;
    }

    int flag = palindrome(a, i + 1, j - 1);
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

    int flag = palindrome(a, i, j);
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