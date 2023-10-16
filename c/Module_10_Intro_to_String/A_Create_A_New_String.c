#include <stdio.h>
#include <string.h>
int main()
{
    char S[1001];
    scanf("%s", S);
    char T[1001];
    scanf("%s", T);

    int lenS = strlen(S);
    int lenT = strlen(T);

    printf("%d %d\n%s %s", lenS, lenT, S, T);

    return 0;
}