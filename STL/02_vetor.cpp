#include<iostream>
#include<vector>
using namespace std;

// In the below link, all the details of the methods are present
// https://cplusplus.com/reference/vector/vector/

template<typename t>
void display(vector<t> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}


int main(){
    vector<int> vec;
    int element, size;
    cout<<"Enter the size of the Vector: ";
    cin>>size;
    // Using for loop to add value into vector using pushback funciton.
    for (int i = 0; i < size; i++)
    {
        cout<<"The the value: ";
        cin>>element;
        vec.push_back(element);
        
    }
    cout<<"Vec Before Insert: ";
    display(vec);
    cout<<endl;



    // Insert Function
    cout<<"Vect After Insert: ";
    vector<int> :: iterator iter = vec.begin();
    // vec.insert(iter, 10); // sample insert 10 value at the beggining of the vector
    // vec.insert(iter + 1, 10); // THis is inserting value at postion 1, we can increase the value to insert at desire position
    vec.insert(iter, 5 , 10); // (position of iter, how many copies, value)
    display(vec);
        
    return 0;
}