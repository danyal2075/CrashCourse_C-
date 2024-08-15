#include <iostream>
using namespace std;
// array of obejct: instead of creating object of each employee, use array of object to optimize the code
class Employee
{
    int id;
    int salary;

public:
    void getid(void){
        salary = 120;
        cout<<"Enter the id: ";
        cin>>id;
    }
    void displayid(void){
        cout<<"Employee ID is: "<<id<<endl;

    }
};

int main()
{
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].getid();
        fb[i].displayid();
    }
    

    return 0;
}