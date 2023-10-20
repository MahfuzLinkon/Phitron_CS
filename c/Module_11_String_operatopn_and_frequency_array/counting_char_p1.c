#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];
    scanf("%s", ch);
    int count[26] = {0};

    for (int i = 0; i < strlen(ch); i++)
    {
        int val = ch[i] - 97;
        count[val]++;
    }

    // for (int i = 0; i < 26; i++)
    // {
    //     if (count[i] != 0)
    //     {
    //         printf("%c - %d\n", i + 97, count[i]);
    //     }
    // }

    for (int i = 0; i < strlen(ch); i++)
    {
        int val = ch[i] - 97;
        if (count[val] != 0)
        {
            printf("%c - %d\n", ch[i], count[val]);
        }
        count[val] = 0;
    }

    return 0;
}