#include<iostream>
using namespace std;
int main(){
    // break use

    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout<<i<<endl;
        if(i == 2){
            cout<<"This broke after: "<<i;
            break;
        }
    }
    
    
    
    
    return 0;
}