#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 12:
        cout<<"You are 12"<<endl;
        break;


    default:
        cout<<"All casees are not correct";
        break;
    }

}