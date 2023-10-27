#include <stdio.h>
#include <string.h>
void fun(int ar[], int size)
{
    ar[0] = 500;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
}
void fun2(char *ch)
{
    ch[0] = 'H';   
}
int main()
{
    // int ar[3] = {10, 20, 30};
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%d ", ar[i]);
    // }
    // printf("\n");
    // fun(ar, 3);

    char ch[20] = "hello";
    printf("%s\n", ch);
    fun2(ch);
    printf("%s", ch);
    return 0;
}