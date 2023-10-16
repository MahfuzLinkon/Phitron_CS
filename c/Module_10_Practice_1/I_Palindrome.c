#include <stdio.h>
#include <string.h>

int main()
{
    char ch[1000];
    scanf("%s", &ch);
    char rev[1000];

    int i = strlen(ch) - 1;
    int j = 0;
    int count = 0;
    while (i >= 0)
    {
        rev[j] = ch[i];
        i--;
        j++;
    }

    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i] == rev[i])
        {
            count++;
        }
    }

    if (count == strlen(ch))
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}