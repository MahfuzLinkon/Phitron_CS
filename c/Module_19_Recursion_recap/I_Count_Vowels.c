#include <stdio.h>
#include <string.h>
#include <ctype.h>

int vowels_count(char *ch, int i)
{
    if (ch[i] == '\0')
    {
        return 0;
    }
    int count = vowels_count(ch, i + 1);
    if (ch[i] >= 'A' && ch[i] <= 'Z')
    {
        ch[i] = ch[i] + 32;
    }

    if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u')
    {
        return count + 1;
    }
    else
    {
        return count;
    }
}

int main()
{
    char ch[201];
    fgets(ch, 201, stdin);

    printf("%d", vowels_count(ch, 0));

    return 0;
}