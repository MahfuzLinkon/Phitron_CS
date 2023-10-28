#include <stdio.h>
#include <string.h>
int my_len(char *ch)
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char ch[20];
    scanf("%s", &ch);
    printf("%d", my_len(ch));
    return 0;
}