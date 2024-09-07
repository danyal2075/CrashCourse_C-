#include<iostream>
using namespace std;

class Test{
    int a;
    int b;
    public:
        // Test(int i, int j): a(i), b(j) // we can also pass the values in the var like this
        // Test(int i, int j): a(i), b( a + j) // This will work because a is intialized before
        Test(int i, int j): b(j), a(i + b) // 
        { 
            cout<<"Constructor Excuated"<<endl;
            cout<<"The value of a: "<<a<<endl;
            cout<<"The value of b: "<<b<<endl;
        }
};

int main(){
    Test o(3,4);

    return 0;
}