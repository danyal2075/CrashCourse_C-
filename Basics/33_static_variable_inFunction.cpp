#include<iostream>
using namespace std;
int product(int a, int b){
    static int c = 0; // this will excute just once
    c = c + 1;
    return a * b + c;
}

int main(){
    int a, b;
    cout<<"Enter the value of a and b:  "<<endl;
    cin>>a>>b;
    cout<<"The prodcut of a and b is: "<<product(a, b)<<endl;
    cout<<"The prodcut of a and b is: "<<product(a, b)<<endl;
    cout<<"The prodcut of a and b is: "<<product(a, b)<<endl;
    cout<<"The prodcut of a and b is: "<<product(a, b)<<endl;
    cout<<"The prodcut of a and b is: "<<product(a, b)<<endl;
    cout<<"The prodcut of a and b is: "<<product(a, b)<<endl;
    cout<<"The prodcut of a and b is: "<<product(a, b)<<endl;
    return 0;
}