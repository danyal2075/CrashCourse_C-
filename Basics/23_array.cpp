#include<iostream>
using namespace std;
// Array Example
int main(){
    int marks[] = {50,89,45,56};

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    // we can change the value of specific position
    marks[3] = 5;
    cout<<marks[3]<<endl;


    cout<<"These are another values"<<endl;
    int mathmarks[4];
    mathmarks[0] = 4564;
    mathmarks[1] = 741;
    mathmarks[2] = 258;
    mathmarks[3] = 369;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;    


    return 0;
}