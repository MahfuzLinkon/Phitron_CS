#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100];
    scanf("%s", ch);

    int count = 0;
    // for (int i = 0; i < 100; i++)
    // {
    //     if (ch[i] == '\0')
    //     {
    //         break;
    //     }
    //     count++;
    // }

    // for (int i = 0; ch[i] != '\0'; i++)
    // {
    //     count++;
    // }

    // int i = 0;
    // while (ch[i] != '\0')
    // {
    //     count++;
    //     i++;
    // }

    int len = strlen(ch);
    
    
    printf("%d", len);
                
    return 0;
}