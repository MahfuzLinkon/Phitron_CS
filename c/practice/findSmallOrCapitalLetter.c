#include <stdio.h>

int main ()
{
    char ch ;
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is a Small letter!", ch);
    }else if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is a capital letter!", ch);
    }
    
    return 0;
}