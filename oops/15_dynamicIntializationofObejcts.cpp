#include<iostream>
using namespace std;
// based on input of the users, respective constructor will be used

/*
Bank Depoist Class:

Parameters:
    principle account
    years to invest for
    increment percentage


return:
    it will return the ammount based on year of investement and percentage

*/

class BankDeposit{
    int princpal;
    int years;
    int R;
    float intRate;
    float returnAmount;
    public:
    BankDeposit(){}
    BankDeposit(int p, int y, float r){
        princpal = p;
        years = y;
        intRate = r;
        returnAmount = princpal;
        for (int i = 0; i < years; i++)
        {
            returnAmount = returnAmount * (1 + intRate);
        }
        

    }
    BankDeposit(int p, int y, int r){
        princpal = p;
        years = y;
        intRate = float(r)/100;
        returnAmount = princpal;
        for (int i = 0; i < years; i++)
        {
            returnAmount = returnAmount * (1 + intRate);
        }
        

    }
    void show(){
        cout<<"The principle amount is: "<<princpal<<endl
        <<"Investment year: "<<years<<endl
        <<"IntersetRate: "<<intRate<<endl
        <<"Return Amount: "<< returnAmount;
    }




};

int main(){
    BankDeposit o1,o2;
    int p,y;
    float r;
    int R;
    cout<<"Enter the values of p, y, and r"<<endl;
    cin>>p>>y>>r;
    o1 = BankDeposit(p,y,r);
    o1.show();

    cout<<"Enter the values of p, y, and R"<<endl;
    cin>>p>>y>>R;
    o2 = BankDeposit(p,y,R);
    o2.show();

   

    


    return 0;
}