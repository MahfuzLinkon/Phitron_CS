#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100001];
    scanf("%s", ch);
    int cnt = 0;
    for (int i = 0; i < strlen(ch); i++)
    {
        if (ch[i] != 'a' && ch[i] != 'e' && ch[i] != 'i' && ch[i] != 'o' && ch[i] != 'u')
        {
            cnt++;
        }
    }
    printf("%d", cnt);

    return 0;
}