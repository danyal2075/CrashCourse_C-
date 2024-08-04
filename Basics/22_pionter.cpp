#include<iostream>
using namespace std;
int main(){
    // pionters : data type which store address of other data types.

    int a = 3;
    int* b = &a;
    // & ----> (Address of) Operator
    cout<<"The address of a: "<<&a<<endl;
    cout<<"The address of a: "<<b<<endl;

    // * ----> (value of) Deference operator
    cout<<"The value of a: "<<*b;

    return 0;
}