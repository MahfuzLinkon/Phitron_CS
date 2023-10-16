#include<stdio.h>
int main()
{
    // int ch[6] = {'M', 'a','h','f','u','z'};

    // int n;
    // scanf("%d", &n);
    char ch[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &ch[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
       printf("%c\n", ch[i]); 
    }
    
                
    return 0;
}