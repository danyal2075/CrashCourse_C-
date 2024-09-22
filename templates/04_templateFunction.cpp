#include<iostream>
using namespace std;

template<typename t1, typename t2>
float average(t1 a, t2 b){
    float avg;
    avg = (a + b) / 2.0;
    return avg;

}
int main(){
    float a;
    a = average(2.4,4);
    cout<<a;
    return 0;
}