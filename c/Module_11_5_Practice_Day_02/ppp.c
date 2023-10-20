#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    int v;
    scanf("%d", &v);
    // scanf("%[^\n]s", v);
    // scanf(" %[^\n]s", b);
    getchar();
    fgets(b, 5, stdin);
    
    printf("%d", v);
    printf("%s", b);
    return 0;
}