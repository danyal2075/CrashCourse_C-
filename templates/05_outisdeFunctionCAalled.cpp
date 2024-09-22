#include<iostream>
using namespace std;

// Writing function outiside of the class

template<typename T>
class Test{
    T data;
    public:
        Test(T a): data(a){}
        void display();
};

template<typename T>
void Test<T>::display(){
    cout<<data;
}


int main(){
    
    return 0;
}