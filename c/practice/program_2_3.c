#include <stdio.h>

int main()
{
    // int x,y;

    // x=1;
    // y = x;
    // x=2;
    // printf("%d", y);

    // Finding remainder without mod operator
    // find out number is odd or even

    int num = 13;
    int quotient = num / 2;
    int remainder = num - (quotient * 2);
    // printf("%d", remainder);

    if (remainder == 0)
    {
        printf("%d is Even Number!", num);
    }else{
        printf("%d is Odd Number!", num);
    }
    

}