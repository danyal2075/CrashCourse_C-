#include<iostream>
using namespace std;

/* 

BaseClass{

}

// Derived Class

class {{dervied class-name}} : {{visibility-mode}} {{base-class-name}}
{
    members/mathods/ etc
}
Note: 
- Default visibility mode is private 
- Private members of the based class cannot be inherited
 */


class Employee{
    public:
    int id;
    float salary;
    Employee(int nid){
        id = nid;
        salary = 34.0;
    }
    Employee(){}
};


class Programmer : Employee{
    public:
    int languageCode = 9;
    Programmer(int nid){
        id = nid;
    }
    void getid(){
        cout<<id;
    }
};

class Assistant : public Employee{
    public:
    // int languageCode = 9;
    Assistant(int nid){
        id = nid;
    }
    void getid(){
        cout<<id;
    }
};



int main(){
    Employee sohail(1), hamza(2);
    cout<<sohail.salary<<endl<<hamza.salary<<endl;
    
    Programmer expert(3);
    cout<<expert.languageCode<<endl;
    // inheritence is by default Privte, so we cannot access the ID member directly 
    // this is throw an error
    // expert.id;
    expert.getid();

    Assistant a1(4);
    cout<<endl<<a1.id<<endl; // Here i can access the id member because the inheritance is public

    return 0;
}