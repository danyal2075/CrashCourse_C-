#include<fstream>
#include<iostream>
using namespace std;
int main(){
    
    ifstream in;
    in.open("./sample.txt");
    string st, st1;
    // in>>st>>st1;
    // cout<<st<< st1;
    while (in.eof() == 0)
    {
        getline(in, st);
        cout<<st<<endl;
    }
    

    in.close();

    return 0;
}