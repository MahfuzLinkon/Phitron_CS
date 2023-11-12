#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    switch (x)
    {
    case 1:
        cout << "One";
        break;
    case 2:
        cout << "Two";
        break;
    case 3: 
        cout << "There";
        break;
    case 4:
        cout << "Four";
        break;
    case 5:
        cout << "Five";
        break;
    default:
        cout << "Do not match any!";
    }
}