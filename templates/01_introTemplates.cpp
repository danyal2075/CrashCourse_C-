#include<iostream>
using namespace std;
template<typename t>
class Vector{
    t arr;

    public:
    Vector(t a): arr(a)
    {}
    void getData(){
        cout<<"Value of Array is: "<<arr;
    }
};


int main(){
    Vector<int> o(5);
    Vector<int> *ptr;
    ptr = &o;
    ptr->getData();

    Vector<float> o1(5.5);


    return 0;
}