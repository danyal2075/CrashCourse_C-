#include<iostream>
using namespace std;
int main(){
    int a = 4;

    int* p = &a;
    cout<<"The Address of a is: "<< p <<endl;
    cout<<"The value of a is: "<<*p <<endl;

    // We can intialize the pionter as,
    int *np = new int(40); // This can be of any type like float, 
    cout<<"The value of dynamic Pionter is: "<<np<<endl;
    delete np;

    // Use of array, Incase of array there is no need to explictly put * with pointer to show its value

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout<<"The value of dynamic Pionter is: "<<arr[0]<<endl;
    cout<<"The value of dynamic Pionter is: "<<arr[1]<<endl;
    cout<<"The value of dynamic Pionter is: "<<arr[2]<<endl;
    delete[] arr;

    // We can delete this dynamically allocated values, address, and will give some garbage value
    int *arr1 = new int[3];
    arr1[0] = 10;
    arr1[1] = 20;
    arr1[2] = 30;
    delete[] arr1; // delete the whole arr
    cout<<"The value of dynamic Pionter is: "<<arr1[0]<<endl;
    cout<<"The value of dynamic Pionter is: "<<arr1[1]<<endl;
    cout<<"The value of dynamic Pionter is: "<<arr1[2]<<endl;

    return 0;
}