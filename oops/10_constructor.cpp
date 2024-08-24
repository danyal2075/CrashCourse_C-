#include<iostream>
using namespace std;

// it should be declared in the public section of the class
// they are automatically invoked
// donot have return value
// it can have default args
// we cannnot refer to their address

class Complex{
    int a, b;
    public:
    // THis is default constructor
    Complex(void);
    void printNumber(){
        cout<<"Complex Number is: "<<a<<" + "<<b;
    }

};

Complex :: Complex(void){
    a = 0;
    b = 0;
}

int main(){
    Complex o;
    o.printNumber();
    return 0;
}