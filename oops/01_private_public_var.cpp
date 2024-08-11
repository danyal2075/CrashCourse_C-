#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int e, d;
    void setData(int a1, int b1, int c1);
    void getData()
    {
        cout << "The value of a: " << a << endl;
        cout << "The value of b: " << b << endl;
        cout << "The value of c: " << c << endl;
        cout << "The value of d: " << d << endl;
        cout << "The value of e: " << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee sohail;
    sohail.e = 8;
    sohail.d = 9;
    sohail.setData(1, 2, 6);
    sohail.getData();

    return 0;
}