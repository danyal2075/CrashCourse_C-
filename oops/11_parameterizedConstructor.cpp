#include<iostream>
using namespace std;
class Complex{
    int a, b;
    public:
    // THis is parameterized constructor. it takes two args
    Complex(int x, int y);
    void printNumber(){
        cout<<"Complex Number is: "<<a<<" + "<<b;
    }

};

Complex :: Complex(int x, int y){
    a = x;
    b = y;
}

int main(){
    Complex o(5,6);
    o.printNumber();
    return 0;
}