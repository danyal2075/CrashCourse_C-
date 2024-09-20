#include<iostream>
#include<fstream>


using namespace std;
int main(){
    string st = "Hello Sohail";

    ofstream out("sample_writing.txt");
    out<<st;



    
    return 0;
}