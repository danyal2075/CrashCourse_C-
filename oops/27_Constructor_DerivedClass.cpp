/*

1.  if there is no args into base class constructor to be passed, then there is no need of a constructor in derived class.
2.  if there has to pass some args in the base class constructor, then derived class must pass args into based class constructor
3.  if both based and derived class have constructor, then based class constructor would be excuited frist.
4.  in multiple inheritance, base class constructor are excauted in the order they are declared.
5.  In multilevel inheritance, the constructor are excauted in the order of inheritance.


******************* SPECIAL SYNTAX
-   The derived class recieves all the args at once and then distribute the args according to the rules above

Base A, Base B, Derived C

C(a1,a2,b1,b2,c1,c2) : This is how the args will be passed and the distribute among the class

************************* Virtual based class
- Here this is a special case, the virtual based class constructor will always be preferred, no matter it is placed in the order.
- if there are more than one VBC, then constructor of them will excuated in the order in which they are declared



*/


#include<iostream>
using namespace std;

/*
class B: public A{
    // Order excuation of construction: B() ---> A()
}

class A: public B, public C{
    // Order of excaiton: B,C,A
}

class A: public B, virtual public C{
    // Order of excuation: C,B,A
}


*/

class Based{
    protected:
    int data;
    public:
        Based(int i){
            data = i;
            cout<<"Base class constructor is called"<<endl;

        }

        void print(){
            cout<<"The value of data is: "<<data<<endl;
        }
        

};

class Based2{
    protected:
    int data2;
    public:
        Based2(int i){
            data2 = i;
            cout<<"Base2 class constructor is called"<<endl;

        }

        void print(){
            cout<<"The value of data2 is: "<<data2<<endl;
        }


};
// The order of the excuation of the constructor depends upon the below declaration (public Based, public Based2)
class Derived: public Based, public Based2{
    int d1, d2;
    public:
        Derived(int a, int b, int c, int d): Based(a), Based2(b){
            d1 = c;
            d2 = d;
            cout<<"Derived Class Constructor is called"<<endl;
        }
        void print(){
            cout<<"The value of data is: "<<data<<endl;
            cout<<"The value of data2 is: "<<data2<<endl;
            cout<<"The value of d1 is: "<<d1<<endl;
            cout<<"The value of d2 is: "<<d2<<endl;
        }
};

int main(){
    Derived sohail(1,2,3,4);
    sohail.print();
    return 0;
}