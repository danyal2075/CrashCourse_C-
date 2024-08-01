#include<iostream>

using namespace std;
// https://en.cppreference.com/w/cpp/language/operator_precedence

int main()
{
    int a = 2 , b = 8;
    int c = ((((a * b) + 42) - 8) + 5);

    cout<<"Value of c: "<<c;
    return 0;
}