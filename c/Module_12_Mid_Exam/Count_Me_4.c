#include <stdio.h>
#include <string.h>

int main()
{
    char ch[10001];
    scanf("%s", ch);

    int cnt[26] = {0};

    for (int i = 0; i < strlen(ch); i++)
    {
        int index = ch[i] - 'a';
        cnt[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (cnt[i] != 0)
        {
            printf("%c - %d\n", i + 'a', cnt[i]);
        }
    }

    return 0;
}