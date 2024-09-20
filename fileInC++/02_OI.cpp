#include<iostream>
#include<fstream>

// fstreambase
// ifstream
// ofstream

using namespace std;

template <typename val, typename str>
class complex{
    val value;
    str cha;
    public:
    void setvalue(val a, string c){
        value = a;
        cha = c;
    }
    void getvalue(){
        cout<<value<<endl<<cha;
    } 
};



int main(){
    // Opining files using constructor and reading
    complex<int, string> *ptr;

    complex<int, string> o;
    ptr = &o;
    ptr->setvalue(2, "This is sohail");
    ptr->getvalue();

    // string st;
    // ifstream in("./sample.txt"); 
    // // THis function is gonna read the whole line: getline
    // getline(in, st);
    // // in>>st;
    // cout<<st;
    // ifstream iin("./sample.txt"); 
    // iin>>st;
    // cout<<st;
    return 0;
}