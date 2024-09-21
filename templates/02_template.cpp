#include<iostream>
using namespace std;

template<typename t>
class Vector{
    int size;
    public:
    t *arr;
    Vector(int s): size(s)
    {
        arr = new t[size];
    }


    // This functuon takes another object as an input, we used reference var becuase in C++ refrence var is used to copy content of the another var
    t dotProduct(Vector &v){
        t d = 0;
        for (int i = 0; i < size; i++)
        {   
            // cout<<"this->arr[i]: "<<this->arr[i]<<"v.arr[i]: "<<v.arr[i];
            d += this->arr[i] * v.arr[i];
        }
        return d;
        

    }

};


int main(){
    int size = 3;
    Vector<int> v(size);
    v.arr[0] = 1;
    v.arr[1] = 2;
    v.arr[2] = 3;

    Vector<int> v1(3);
    v1.arr[0] = 1;
    v1.arr[1] = 2;
    v1.arr[2] = 4;
    int a = v.dotProduct(v1);
    
    cout<<"Dot Product of two vectors are: "<<a;


    return 0;
}