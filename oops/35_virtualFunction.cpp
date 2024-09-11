#include<iostream>
using namespace std;

/*
Virtual Function:
These are used to define that prefer the another function with similar name.
*/



class Base{
    public:
        virtual void display(){ // writing virtual with this function gives preference to the display function of derived class
            cout<<"Displaying Base Class";
        }
};

class Derived : public Base {
    public:
    void display(){
        cout<<"Displaying Derived Class function";
    }
};

int main(){
    /*
    Created ptr of based class and put the object of derived class in that ptr,
    if we donot want write virtual function, the ptr will display base class display function although
    derived class object is assign into it,
    But if we write virtual function, as you can see now it will display function of Derived class
    */


    Base *base_ptr;
    Base base_obj;
    Derived Derived_obj;
    base_ptr = & Derived_obj;
    base_ptr->display();



    return 0;
}