#include <bits/stdc++.h>

using namespace std;

int main()
{
    int *ar = new int[3];
    int *b = new int[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> ar[i];
        b[i] = ar[i];
    }

    delete[] ar;

    ar = new int[5];

    for (int i = 0; i < 3; i++)
    {
        ar[i] = b[i];
    }

    ar[3] = 40;
    ar[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        cout << ar[i] << " ";
    }
    // kaj shes delete array from heap
    delete[] ar;

    return 0;
}