#include<iostream>
using namespace std;

// Both the based class have function having similar name so it create an ambiguity, 
// to resolve it, we can define another method in the derived class with the same name and call the function of the Based class which we want to print
// As you can in the below example

class Based1{
    public:
    void greet(){
        cout<<"Hello";
    }
};

class Based2{
    public:
    void greet(){
        cout<<"Hello Based2";
    }
};

class Derived: public Based1, public Based2{
    public:
    void greet(){
        Based1 :: greet(); 
    }
};

int main(){
    Derived o1;
    o1.greet();
    return 0;
}