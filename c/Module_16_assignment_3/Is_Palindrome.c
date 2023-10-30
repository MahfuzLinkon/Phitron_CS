#include <stdio.h>
#include <string.h>

int is_palindrome(char *ch)
{
    int flag = 0;
    int j = strlen(ch) - 1;
    int i = 0;

    while (j >= 0)
    {
        if (ch[i] != ch[j])
        {
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
        }

        i++;
        j--;
    }

    return flag;
}
int main()
{
    char ch[1001];
    scanf("%s", ch);

    int flag = is_palindrome(ch);

    if (flag == 1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}