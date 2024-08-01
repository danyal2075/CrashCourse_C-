#include<iostream>
using namespace std;


// making constant var which cannot be changed
int main(){
    const int a = 45;
    const float b = 5.4;
    cout<<'The value of a is:'<<a;
    // i can not assign anyother value to it, such as value of pi to be kept constant 
    // a = 566;
    return 0;
}