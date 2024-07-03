# include<iostream>
using namespace std;
// this glo is a global varaible
int glo = 99;

void sum(){
    cout<<"This is sum function Glo:"<<glo;

}

int main(){
    // we can write more than one var at front of more data type
    int glo = 45;
    sum();
    cout<<"\nThis is main function Glo:"<<glo;
    return 0;

}