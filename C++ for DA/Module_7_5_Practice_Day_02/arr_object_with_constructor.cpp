#include <bits/stdc++.h>

using namespace std;

class Product
{
public:
    int id;
    string name;
    double price;

    Product() {} // Default Constructor

    Product(int id, string name, double price)
    {
        this->id = id;
        this->name = name;
        this->price = price;
    }

    void setValue(int id, string name, double price)
    {
        this->id = id;
        this->name = name;
        this->price = price;
    }
    double calc_tax ()
    {
        return this->price * (5/100.0);
    }
};

int main()
{
    int n;
    cin >> n;

    // Product products[2] = {
    //     Product(1, "Laptop", 54.21),
    //     Product(2, "Mobile", 100.21)
    // };

    Product products[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> products[i].id >> products[i].name >> products[i].price;
    // }
    for (int i = 0; i < n; i++)
    {
        int id;
        string name;
        double price;
        cin >> id >> name >> price;
        products[i].setValue(id, name, price);
    }
    for (int i = 0; i < 2; i++)
    {
        cout << products[i].id << " " << products[i].name << " " << products[i].price << endl;
    }
    cout << products[0].calc_tax() << endl;
    cout << products[1].calc_tax() << endl;

    return 0;
}