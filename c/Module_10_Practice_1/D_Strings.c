#include <stdio.h>
#include <string.h>
int main()
{
    char ch1[11];
    scanf("%s", &ch1);
    char ch2[11];
    scanf("%s", &ch2);

    printf("%d %d\n", strlen(ch1), strlen(ch2));

    printf("%s%s\n", ch1, ch2);

    char tem = ch1[0];
    ch1[0] = ch2[0];
    ch2[0] = tem;

    printf("%s %s", ch1, ch2);

    return 0;
}