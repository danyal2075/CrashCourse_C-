#include<iostream>
using namespace std;
// Gobal Variable
int c = 45;


int main(){
    int a, b, c;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;
    cout<<"Enter the value of b:"<<endl;
    cin>>b;

    c = a + b;
    cout<<"The sum of a + b = "<<c<<endl;
    cout<<"The value of Global Var is:"<<::c;

    return 0;
    }