#include<iostream>
using namespace std;
int main(){
    int marks[] = {50,89,45,56};
    int* p = marks;
    // cout<<p;
    cout<<"The value of *p is: "<<*p<<endl;
    cout<<"The value of *(p+1) is: "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is: "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is: "<<*(p+3)<<endl;
    


    return 0;
}