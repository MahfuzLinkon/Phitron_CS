#include <stdio.h>
#include <string.h>

int char_to_ascii(char x)
    {
        int a = x;
        return a;
    }

int main()
{
    char c;
    scanf("%c", &c);
    printf("%d", char_to_ascii(c));
                
    return 0;
}