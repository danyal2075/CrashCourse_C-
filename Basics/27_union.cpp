#include<iostream>
using namespace std;

union money
{
    /* data */
    int rice;
    char car;
    float pound;

};


int main(){
    union money m1;
    m1.rice = 1;
    cout<<m1.rice;
    
    return 0;
}