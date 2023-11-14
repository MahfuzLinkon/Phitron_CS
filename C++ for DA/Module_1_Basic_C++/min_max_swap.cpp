#include <iostream>
#include <algorithm>
#include <utility>

using namespace std;

void my_swap(int *a, int *b)
{
    int tem = *a;
    *a = *b;
    *b = tem;
}

int main()
{
    //////////////////// MIN AND MAX //////////////////////////////
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    // int mn = min(a,b);

    int mn = min({a, b, c, d});
    int mx = max({a, b, c, d});
    cout << mn << " " << mx << endl;

    ///////////////////////// Swap //////////////////////////////
    // my_swap(&a, &b);

    swap(a,b);

    cout << a << " " << b << endl;

    return 0;
}