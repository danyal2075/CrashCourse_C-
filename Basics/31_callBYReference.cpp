#include<iostream>
using namespace std;
// call by reference, it will change the original values
// call by value does not change the orginal variables
void swapRefPionter(int* a,int* b ){
    int temp = *a;
    *a = *b;
    *b = temp;

}

void swapRefvalue(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 4, y = 5;
    cout<<"The value of x: "<<x<<" and value of y is: "<<y<<endl;
    // swapRefPionter(&x, &y);
    swapRefvalue(x, y);
    cout<<"The value of x: "<<x<<" and value of y is: "<<y<<endl;

    return 0;
}