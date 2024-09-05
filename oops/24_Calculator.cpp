#include<iostream>
#include<cmath>
using namespace std;

class SampleCalculator{
    protected:
    int a1, b1;

    public:
    void setNumber(int num1, int num2){
        a1 = num1;
        b1 = num2;
    }
    void dispplay(){
        cout<<"The Addition is: "<< a1 + b1 <<endl;
        cout<<"The Minus is: "<< a1 - b1 <<endl;
        cout<<"The Division is: "<< a1 / b1 <<endl;
        cout<<"The Prodcut is: "<< a1 * b1 <<endl;
    }

};


class ScientificCalculator{
    protected:
    int a1, b1;

    public:
    void s_setNumber(int num1, int num2){
        a1 = num1;
        b1 = num2;
    }
    void s_dispplay(){
        cout<<"The Cos of two number is: "<< cos(a1 + b1) <<endl;
     
    }

};

class HybridCal : public SampleCalculator, public ScientificCalculator{


};


int main(){
    HybridCal o1;
    o1.s_setNumber(2,3);
    o1.s_dispplay();
    o1.setNumber(8,4);
    o1.dispplay();
    return 0;
}

