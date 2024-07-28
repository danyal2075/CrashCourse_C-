#include<iostream>
using namespace std;

int main(){
    int x = 4;
    int & y = x;

    cout<<"The value of x: "<<x<<endl;
    
    cout<<"The value of y: "<<y<<endl;

    return 0;
}