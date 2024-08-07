#include<iostream>
using namespace std;
// function prototyping
int sum(int a, int b);

int main(){
    int num1, num2;
    cout<<"Enter First Value: ";
    cin>>num1;
    cout<<"Enter Second Value: ";
    cin>>num1;
    cout<<"The sum is: "<<sum(num1, num2);
    return 0;
}


int sum(int a, int b){
    int c = a + b;
    return c;

}