#include<iostream>
using namespace std;
typedef struct employee
{
    /* data */
    int id;
    char favsubject;
    float salary;

}ep;


int main(){
    ep sohail;
    ep hamza;
    ep majid;
    sohail.id = 1;
    sohail.favsubject = 'c';
    sohail.salary = 12000000;

    cout<<sohail.id<<endl;
    cout<<sohail.favsubject<<endl;
    cout<<sohail.salary<<endl;
    
    return 0;
}