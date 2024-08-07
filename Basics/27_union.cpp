#include<iostream>
using namespace std;

struct money
{
    /* data */
    int rice;
    char car;
    float pound;

};


int main(){
    struct money m1;
    m1.rice = 1;
    cout<<m1.rice;
    
    return 0;
}