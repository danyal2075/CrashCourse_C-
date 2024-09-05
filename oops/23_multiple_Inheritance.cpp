#include<iostream>
using namespace std;


// Syntax of multiple inheritance
// class Derived : visibility-mode base1, visibility-mode base2
// {
//     body of the derived class
// }


class Based1{
    protected:
    int base1int;

    public:
    void set_base1int(int a ){
        base1int = a;
    }
};


class Based2{
    protected:
    int base2int;

    public:
    void set_base2int(int a ){
        base2int = a;
    }
};

class Derived: public Based1, public Based2{
    public:
        void show(){
            cout<<"The value of Base1 is: "<<base1int<<endl;
            cout<<"The value of Base2 is: "<<base2int<<endl;
            cout<<"The value of these values is: "<<base1int + base2int<<endl;
        }
};


int main(){
    Derived o1;
    o1.set_base1int(5);
    o1.set_base2int(4);
    o1.show();  
    return 0;
}