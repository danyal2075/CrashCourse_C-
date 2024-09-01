#include <iostream>
using namespace std;

class Based
{
    int data1;

public:
    int data2;
    void setData();
    int getdata1();
    int getdata2();
};

void Based :: setData(void){
    data1 = 10;
    data2 = 20;
}
int Based :: getdata1(){
    return data1;
}
int Based :: getdata2(){
    return data2;
}

class Derived : public Based
{
    int data3;

public:
    void process();
    void display();
    
};

void Derived :: process(){
    data3 = data2 * getdata1();
}

void Derived :: display(){
    cout<<"value of data1: "<<getdata1()<<endl;
    cout<<"value of data1: "<<data2<<endl;
    cout<<"value of data1: "<<data3<<endl;
}

int main()
{
        Derived o1;
        o1.setData();
        o1.process();
        o1.display();

    return 0;
}