#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[1001];
    char b[1001];

    cin >> a >> b;

    cout << strlen(a) << " " << strlen(b) << endl;
    cout << a << b << endl;

    // char tem = a[0];
    // a[0] = b[0];
    // b[0] = tem;

    swap(a[0], b[0]);
    cout << a << " " << b;

    return 0;
}