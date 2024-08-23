#include <iostream>
using namespace std;
// forward declaration
class Complex;
class Add
{
public:
    int sumrealnumber(Complex, Complex);
    int sumcomnumber(Complex, Complex);
};

class Complex
{
    int a, b;
    // individual decalring funciton as friend
    // friend int Add ::sumrealnumber(Complex, Complex);
    // friend int Add ::sumcomnumber(Complex, Complex);

    // declaring whole class as friend
    friend class Add;

public:
    void getnumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void print()
    {
        cout << "a is: " << a << " b is: " << b << endl;
    }
};
int Add::sumrealnumber(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Add::sumcomnumber(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}



int main()
{
    Complex o1, o2;
    o1.getnumber(5, 4);
    o2.getnumber(2, 2);
 

    Add com;
    int res = com.sumrealnumber(o1, o2);
    int res1 = com.sumcomnumber(o1, o2);
    cout << "The sum of two real part number is: " << res << endl;
    cout << "The sum of two complex part number is: " << res1 << endl;
    return 0;
}