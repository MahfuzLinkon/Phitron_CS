#include <bits/stdc++.h>

using namespace std;

namespace Rakib
{
    int age = 24;

    void greet()
    {
        cout << "Hello from rakib"<<endl;
    }
}

namespace Sakib
{
    int age = 24;

    void greet()
    {
        cout << "Hello from sakib"<<endl;
    }
}


using namespace Rakib;
// using namespace Sakib;

int main()
{
    // Rakib::greet();
    // cout << Rakib::age << endl;
    // Sakib::greet();

    //
    // Declare name space in top

    greet();
    return 0;
}