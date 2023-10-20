#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100];
    scanf("%s", ch);
    int cnt[26] = {0};
    for (int i = 0; i < strlen(ch); i++)
    {
        int val = ch[i] - 97; // asqii value a = 97
        cnt[val]++;
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i + 97, cnt[i]);
    }

    return 0;
}