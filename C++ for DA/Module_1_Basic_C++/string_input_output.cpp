#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    char s[n];

    getchar();

    cin.getline(s, 100);

    cout << n << endl;
    cout << s << endl;

    return 0;
}