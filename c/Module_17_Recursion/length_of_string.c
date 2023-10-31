#include <stdio.h>
#include <string.h>
int string_len(char *ch, int i)
{
    if(ch[i] == '\0') return 0;
    int l = string_len(ch, i+1);
    return l+1;
}

int main()
{
    char ch[100];
    scanf("%s", ch);

    printf("%d", string_len(ch, 0));

                
    return 0;
}