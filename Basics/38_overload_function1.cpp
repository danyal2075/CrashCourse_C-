#include<iostream>
using namespace std;
// cylinder
int volume(double r, int h){
    return (3.14 * r * r * h);
}

// cube
int volume(int a){
    return (a * a * a);
}

// rectangular
int volume(int l, int b, int h){
    return (l*b*h);
}

int main(){

    cout<<"The volume of Cylinder is: "<<volume(2.5, 6)<<endl;
    
    cout<<"The volume of Cube is: "<<volume(4)<<endl;
    
    cout<<"The volume of rectangular is: "<<volume(1,2,3)<<endl;

    
    return 0;
}