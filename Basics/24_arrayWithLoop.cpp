#include<iostream>
using namespace std;
int main(){
    int marks[] = {50,89,45,56};

    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout<<"The value of mark["<<i<<"] is: "<<marks[i]<<endl;
    }
    cout<<"Printing array suing while loop"<<endl;
    int i = 0;
    while (i < 4)
    {
        cout<<"The value of mark["<<i<<"] is: "<<marks[i]<<endl;
        i++;
        /* code */
    }
    int j = 0;
    cout<<"Printing array suing do-while loop"<<endl;
    do
    {
        /* code */
        cout<<"The value of mark["<<j<<"] is: "<<marks[j]<<endl;
        j++;
    } while (j < 4);
    


    return 0;
}