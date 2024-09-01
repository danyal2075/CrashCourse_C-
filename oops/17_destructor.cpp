#include<iostream>
using namespace std;
int count = 0;
class num{
    public:
    num(){
        count++;
        cout<<"This is time when construcotr is called for object number: "<< count << endl;
    }
    ~num(){
        cout<<"Destrcutor is called"<<endl;
    }

    void print(){
        cout<<count;
    }
};

int main(){
    cout<<"Main is called"<<endl;
    num n1;
    {
        cout<<"Inside the block"<<endl;
        num n2, n3;
        // cout<<
    }

    return 0;
}