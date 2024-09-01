#include <iostream>
using namespace std;
class Base
{
protected:
    int a;

private:
    int b;

public:
    int c;
    void setData(){
        c = 20;
        a = 10;
    }
};

class Derived : public Base
{
public:
    // void setdata(int val);
    void getdata(){
        // a is a protected var, so we cannot access it outside but it canbe inherited as we can see
        cout<<"The value of the protected var of Base class is: "<<a<<endl;
        cout<<"The value of the public var of Base class is: "<<c<<endl;
        // This is not possible to inherit private member in any visibility mode
        // cout<<"The value of the private var of Base class is: "<<b;
    }
};

int main()
{
    // Base o1;
    // o1.setData();
    // o1.c;

    Derived o2;
    o2.setData();
    o2.getdata();

    return 0;
}