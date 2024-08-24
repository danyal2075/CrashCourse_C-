#include<iostream>
using namespace std;


class Y;
class X{
    int data;
    
    public:
        void getvalue(int value){
            data = value;
        }
    friend void add(X, Y);
};

class Y{
    int num;
    friend void add(X, Y);
    public:
        void getvalue(int value){
            num = value;
        }
};

void add(X o1, Y o2){
    cout<<"The sum of two values from two class is: "<< o1.data + o2.num;
}

int main(){
    X a;
    a.getvalue(5);
    Y b;
    b.getvalue(2);
    add(a, b);
    return 0;
}