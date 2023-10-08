#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    
    int lastVal = (n/1000) % 10;

    if(lastVal%2 == 0) printf("EVEN");
    else printf("ODD");
    
    return 0;
}