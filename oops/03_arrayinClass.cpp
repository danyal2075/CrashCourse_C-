#include <iostream>
using namespace std;
class shop
{

    int counter;
    int itemId[100];
    int price[100];

public:
    void initcounter(void) { counter = 0; };
    void setprice(void);
    void displayPrice(void);
};

void shop ::setprice(void)
{
    cout << "Enter Prodcut ID: " ;
    cin >> itemId[counter];
    // cout << itemId[counter];
    cout << "Enter Product Price: " ;
    cin >> price[counter];
    // cout << price[counter];
    counter++;
}

void shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout <<"Product ID: " << itemId[i] << " Product Price: " << price[i] << endl;
    }
}

int main()
{
    shop dokan;
    dokan.initcounter();
    dokan.setprice();
    dokan.setprice();
    dokan.setprice();
    dokan.displayPrice();

    return 0;
}