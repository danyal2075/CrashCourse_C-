#include<iostream>
#include<fstream>

// fstreambase
// ifstream
// ofstream

using namespace std;
int main(){
    // Opining files using constructor and reading
    string st;
    ifstream in("D:\PIAIC\my_skills\C++\fileInC++\01_File_I\I\sample.txt"); 
    in>>st;
    cout<<st;
    return 0;
}