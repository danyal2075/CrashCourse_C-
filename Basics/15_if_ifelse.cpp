#include<iostream>
using namespace std;

// if and if else statement

int main(){
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;

    if(age<18){
        cout<<"You canot come to my part"<<endl;
    }
    else if(age==18){
        cout<<"Still you are under age and cannot come to the party"<<endl;
    }

    else{
        cout<<"You are allowed to the party.";
    }
    return 0;
}