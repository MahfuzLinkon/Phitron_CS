#include <stdio.h>
#include <string.h>

int main()
{
    char ch;
    int count[26] = {0};
    
    for (int i = 0; scanf("%c", &ch) != EOF; i++)
    {
        int indx = ch - 'a';
        count[indx]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            printf("%c : %d\n", i + 'a', count[i]);
        }
    }

    return 0;
}