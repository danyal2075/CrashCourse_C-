#include<iostream>
using namespace std;

class Base{

    public:
    int var_base;
    void display(){
        cout<<"the value of var_base is: "<<var_base<<endl;
    }
};

class Derived : public Base{
    public:
    int var_derived;
    void display(){
        cout<<"the value of var_base is: "<<var_base<<endl;
        cout<<"the value of var_derived is: "<<var_derived<<endl;
        
    }
};



int main(){
    Base *base_pointer;
    Base base_obj;
    Derived derived_obj;

    base_pointer = &derived_obj;
    base_pointer->var_base = 34;
    base_pointer->display();

    // base_pointer->var_base = 134;
    // base_pointer->display();

    Derived *derived_pointer;
    derived_pointer = &derived_obj;
    derived_pointer->var_derived = 9600;
    derived_pointer->display();

    return 0;
}