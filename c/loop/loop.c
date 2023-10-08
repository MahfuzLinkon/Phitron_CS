#include <stdio.h>

// for loop
void forLoop()
{
    // int sum = 0;
    // for (int i = 1; i <= 5; i++)
    // {
    //    sum += i;
    // }
    // printf ("%d", sum);

    // Loop with condition
    // for (int i = 1; i <= 10; i++)
    // {
    //    if (i % 2 ==0)
    //    {
    //      printf("%d - Even\n", i);
    //    }else{
    //     printf("%d - Odd\n", i);
    //    }
    // }

    // for (int i = 1; i <= 10; i++)
    // {
    //     printf("%d\n", i);
    //     if (i == 5)
    //     {
    //         break;
    //     }
    // }

    for (int i = 10; i >= 0; i--)
    {
        printf("%d\n", i);
    } 
    

    
}

// While loop
void whileLoop()
{
    int i = 1;
    while(i <= 5)
    {
       printf("%d\n", i);
       i++;
    }
}

// do while loop
void doWhileLoop ()
{
    int i = 100;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 5);
}

int main ()
{
    // forLoop();
    // whileLoop();
    // doWhileLoop();
    int n,i;
    printf("Enter the Value of N: \n");

    scanf("%d", &n);

    for (i = 1; i <= n; i=i+1)
    {
        printf("%d\n", i);
    }

    return 0;
}