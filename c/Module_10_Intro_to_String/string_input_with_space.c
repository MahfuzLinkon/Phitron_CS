#include<stdio.h>
int main()
{
    //////////// gets ////////////
    // char ch[100];
    // gets(ch);
    // printf("%s", ch);

    //////////// fgets ////////////
    char ch[100];
    fgets(ch, 11, stdin);
    printf("%s", ch);
                
    return 0;
}