#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        if (ch == 'z')
        {
            printf("a");
        }
        else
        {
            printf("%c", ch + 1);
        }
    }

    return 0;
}