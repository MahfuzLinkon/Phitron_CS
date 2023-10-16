#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        char ch[103];
        scanf("%s", &ch);

        if (strlen(ch) > 10)
        {
            printf("%c%d%c\n", ch[0], strlen(ch) - 2, ch[strlen(ch) - 1]);
        }
        else
        {
            printf("%s\n", ch);
        }
    }

    return 0;
}