#include<iostream>
using namespace std;
// general use of overloading funciton

int sum(int a , int b){
    return a + b;
}

int sum(int a, int b, int c){
    return a + b +c;
}


int main(){
    cout<<"The sum of 7 and 8 is: "<<sum(7,8)<<endl;
    // This will take function according to the args
    cout<<"The sum of 7,6 and 8 is: "<<sum(7,6,8)<<endl;   
    return 0;
}