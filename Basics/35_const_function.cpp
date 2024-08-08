#include<iostream>
using namespace std;
int strlen(const string name){
    return name.length();
}

int main(){
    string name = "sohail";
    cout<<strlen(name);
    return 0;
}