#include<iostream>
using namespace std;

void func(int a ){
    cout<<"This is function"<<endl;
}

template<typename T>
void func(T a){
    cout<<"This is template function"<<endl;
}

using namespace std;
int main(){
    // Closed match function would be priorities
    func(4);
    func(4.5);
    return 0;
}