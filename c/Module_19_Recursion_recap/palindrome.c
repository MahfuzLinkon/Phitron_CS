#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool fun(char *ch, int i, int j)
{
    if (i >= j)
    {
        return true;
    }
    return fun(ch, i + 1, j - 1) && ch[i] == ch[j];
}



int main()
{
    char ch[6] = "level";

    bool res = fun(ch, 0, 4);

    if (res == true)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}