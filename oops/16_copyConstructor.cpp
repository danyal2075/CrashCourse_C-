#include<iostream>
using namespace std;

// Copy Constructor: it takes refernce object as an arg and gets values of that object
// if we donot write a copy constructor, complier is gonna assign copy constructor by default

class Number{
    int a;
    public:
    Number(){}
    Number(int num){
        a = num;
    }
    Number(Number & obj){
        cout<<"Copy Constructor is called"<<endl;
        a = obj.a;
    }


    void display();
};


void Number:: display(){
    cout<<"The Number is: "<<a<<endl;
}

int main(){
    Number o1 , o2, o3(45);
    o1.display();
    o3.display();

    Number o4(o3);
    o4.display();
    return 0;
}