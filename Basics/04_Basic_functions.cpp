# include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cout<<"Enter the value of Number1:"; /* << is called insertion operator*/
    cin>>num1; /* >> is called extraction operation */
    cout<<"Enter the value of Number1:"; /* << is called insertion operator*/
    cin>>num2; /* >> is called extraction operation */

    cout<<"The sum is:"<< num1 + num2;
    return 0;
}