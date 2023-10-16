#include <stdio.h>
#include <string.h>

int main()
{
    char ch[100003];
    scanf("%s", &ch);

    int len = strlen(ch);

    for (int i = 0; i < len; i++)
    {
        if (ch[i] == ',')
        {
            printf(" ");
        }
        else if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            printf("%c", ch[i]-32);
        }
        else if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            printf("%c", ch[i]+32);
        }
    }

    return 0;
}