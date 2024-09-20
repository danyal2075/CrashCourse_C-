#include<iostream>
#include<fstream>
#include<string>

using namespace std;
int main(){
    ofstream out;
    out.open("./sample.txt");
    out<<"This is me";
    out.close();


    ifstream in;
    in.open("./sample.txt");
    string st, st1;
    in>>st>>st1;
    cout<<st<< st1;
    in.close();


    
    return 0;
}