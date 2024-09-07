#include<iostream>
using namespace std;

// access the complex class member using pionter


class Complex{
    int real;
    int img;
    public:
        void setdata(int a , int b){
            real = a;
            img = b;
        }

        void getdata(){
            cout<<"The real part is: "<<real<<endl;
            cout<<"The img part is: "<<img<<endl;
        }

};

int main(){
    // Complex o1;
    // Complex *ptr = &o1;

    // We can also create objects using pionter like this

    // Syntax: Data_type PointerName = new Datatype
    Complex *ptr = new Complex;
    (*ptr).setdata(1,5);
    (*ptr).getdata();

    // We can also dereference like this
    ptr->setdata(6,8);
    ptr->getdata();
    
    return 0;
}