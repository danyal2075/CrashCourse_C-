#include<iostream>
using namespace std;

template<typename t1=int, typename t2= float>
class test{
    t1 data1;
    t2 data2;
    public:
        test(t1 a, t2 b): data1(a), data2(b){}
        void display(){cout<<"Data1: "<<data1<<endl<<"Data2: "<<data2;}
};

int main(){
    test<> obj(4, 4.5);
    obj.display();
    // Changing bydefault args in template
    test<int, int> obj1(4,6);
    obj1.display();


    return 0;
}