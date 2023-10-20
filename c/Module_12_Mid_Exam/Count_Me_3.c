#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char ch[10001];

    for (int i = 0; i < n; i++)
    {
        scanf("%s", ch);
        int capCnt = 0, smallCnt = 0, numCnt = 0;
        for (int j = 0; j < strlen(ch); j++)
        {
            if (ch[j] >= 'A' && ch[j] <= 'Z')
            {
                capCnt++;
            }
            else if (ch[j] >= 'a' && ch[j] <= 'z')
            {
                smallCnt++;
            }
            else
            {
                numCnt++;
            }
        }
        printf("%d %d %d\n", capCnt, smallCnt, numCnt);
    }

    return 0;
}