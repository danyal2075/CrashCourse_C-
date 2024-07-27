#include<iostream>
using namespace std;

int main(){
    int a = 4, b = 5;
    cout<<"Operators in C++"<<endl;
    cout<<"Following are the types of operators"<<endl;
    cout<<"1) Arthematic Operator"<<endl;
    cout<<"The value of a + b: "<< a + b<<endl;
    cout<<"The value of a - b: "<< a - b<<endl;
    cout<<"The value of a * b: "<< a * b<<endl;
    cout<<"The value of a / b: "<< a / b<<endl;
    // See the logic of the increment and decrement, before and after
    cout<<"The value of --a: "<< --a<<endl;
    cout<<"The value of ++a: "<< ++a<<endl;
    cout<<"The value of a--: "<< a--<<endl;
    cout<<"The value of a++: "<< a++<<endl;


    cout<<endl;
    cout<<"Following are the Comparsion Operator"<<endl;
    cout<<"Value of a == b:"<< (a==b)<<endl;
    cout<<"Value of a != b:"<< (a!=b)<<endl;
    cout<<"Value of a > b:"<< (a>b)<<endl;
    cout<<"Value of a < b:"<< (a<b)<<endl;

    cout<<endl;
    cout<<"Logical Operator"<<endl;
    cout<<"The value of this 'AND'logic ((a == b) && (a < b)): "<<((a == b) && (a < b))<<endl;
    cout<<"The value of this 'OR'logic ((a == b) || (a < b)):"<<((a == b) || (a < b))<<endl;
    cout<<"The value of this 'NOT'logic (!(a == b):"<<(!(a == b))<<endl;
    
    
    return 0;
}