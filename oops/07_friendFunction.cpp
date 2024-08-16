#include<iostream>
using namespace std;

class Complex{
    int a, b;
    public:
        friend Complex sumComplex(Complex x1, Complex x2);
        void getcomplex(int v1, int v2);
        void printComplex();
};

void Complex::getcomplex(int v1, int v2){
    a = v1;
    b = v2;
}
void Complex::printComplex(){
    cout<<"The Complex Number is: "<<a<<" + "<<b<<"i."<<endl;
}

Complex sumComplex(Complex x1, Complex x2){
    Complex c3;
    c3.getcomplex((x1.a + x2.a),(x1.b + x2.b));
    return c3;
}


int main(){
    Complex c1, c2, sum;
    c1.getcomplex(1,4);
    c1.printComplex();

    c2.getcomplex(2,3);
    c2.printComplex();
    
    sum = sumComplex(c1, c2);
    sum.printComplex();
    return 0;
}