#include<iostream>
using namespace std;
class Test{
    int a;
    public:
        void setdata(int a)
        {
            this->a = a;
        }
        void getdata(){
            cout<<"Value is: "<<a<<endl;
        }
};

int main(){
    Test o;
    o.setdata(1);
    o.getdata();
    return 0;
}