#include <iostream>
using namespace std;

// This is constructor overlaoding that we can make more than one constructor and then pass the args according to the desire functionality
class Complex
{
    int a, b;

public:
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex()
    {
        a = 0;
        b = 0;
    }
    void displayNumber()
    {
        cout << "The Complex Number: " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    // This will invoke the first constructor
    Complex o1(5, 6);
    o1.displayNumber();

    // Invoke the second Constructor
    Complex o2(5);
    o2.displayNumber();

    // Invoke Last Constructor
    Complex o3;
    o3.displayNumber();

    return 0;
}