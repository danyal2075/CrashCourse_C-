#include<iostream>
using namespace std;

int findFactorial(int num){
    if (num <=1)
    {
        /* code */
        return 1;
    }
    
    return num * findFactorial(num - 1);
}

int main(){
    int num = 5;
    cout<<findFactorial(num);
    return 0;
}