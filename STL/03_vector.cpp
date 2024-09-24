#include<iostream>
#include<vector>
using namespace std;
// Different ways of creating vector

template<typename T>

void display(vector<T> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v.at(i)<<" ";
    }
    
    
}

int main(){
    vector<int> vec1 = {1,2,3,4};
    display(vec1);
    cout<<endl;
    cout<<"The size of Vector is: "<<vec1.size();

    // vector of size 5 will created haivng 0 will be entries
    // vector<int> vec2(5);
    // display(vec2);

    // vector<char> vec3(vec3);
    // display(vec3);

    // vector<int> vec4(6, 10);
    // display(vec4);
    return 0;
}