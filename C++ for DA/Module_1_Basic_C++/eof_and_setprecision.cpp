#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{
    /////////////////// EOF __ END OF FILE ////////////////////
    // int a, b;
    // // in C
    // // while (scanf("%d %d", &a, &b) != EOF)
    // // {
    // //     printf("%d %d\n", a, b);
    // // }

    // // in C++
    // while (cin >> a >> b)
    // {
    //     cout << a << " " << b << endl;
    // }

    ////////////////////// SET PRECISION ////////////////////
    double a;
    cin >> a;

    cout << a << endl;
    cout << fixed << setprecision(2) << a << endl;

    return 0;
}
