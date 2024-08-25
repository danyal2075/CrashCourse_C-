#include<iostream>
using namespace std;

class Sample{
    int data1, data2;
    public:
    Sample(int a, int b = 0){
        data1 = a;
        data2 = b;
    }

    void print();
};

void Sample :: print(){
    cout<<"The values are: "<<data1<<" and "<<data2<<endl;
}

int main(){
    Sample o1(5,4);
    o1.print();

    Sample o2(5);
    o2.print();

    
    return 0;
}