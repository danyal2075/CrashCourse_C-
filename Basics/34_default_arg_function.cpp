#include<iostream>
using namespace std;
float moneyReceived(int money, float factor = 1.04){
    return money * factor;
}

int main(){
    int money = 10000;
    cout<<"If you give "<<money<<" to the bank. after one year you will get "<<moneyReceived(money)<<endl;
    cout<<"If you are VIP member and give "<<money<<" to the bank. after one year you will get "<<moneyReceived(money, 1.1);
    return 0;
}