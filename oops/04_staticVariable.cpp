#include<iostream>
using namespace std;

// static var and methods
// static var are uised to create a var which is shared by all objects
// static methods are iused to access static variables
class Employee 

{
private:
    int id;
    static int count;
public:
    void setdata(void){
        cout<<"Enter the id: ";
        cin>>id;
        count++;
        cout<<endl;
    }
    void getdatat(void){
        cout<<"Employee id is: "<<id<<" Employee Count: "<<count<<endl;
    }
    static void getcount(void){
        cout<<"Value of count is: "<<count<<endl;
    }
    
};

int Employee :: count;




int main(){
    Employee sohail, hamza, majid;
    sohail.setdata();
    sohail.getdatat();
    Employee::getcount();


    hamza.setdata();
    hamza.getdatat();
    Employee::getcount();

    majid.setdata();
    majid.getdatat();
    Employee::getcount();
    return 0;
}