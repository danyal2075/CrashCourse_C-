#include<iostream>
#include<cmath>
using namespace std;

class Piont{
    int x, y;
    public:

    // Constructor
    Piont(int a, int b){
        x = a;
        y = b;
    }
    // it will display the pionts
    void displayNumber(){
        cout<<"The piont is: ("<<x<<", "<<y<<")"<<endl;
    }
    friend int getDifference(Piont, Piont);

};
int getDifference(Piont o1, Piont o2){
    return sqrt(o2.x - o1.x) + sqrt(o2.y - o1.y);
}


int main(){
    Piont p1(4,5), p2(7,6);
    p1.displayNumber();
    p2.displayNumber();

    int res = getDifference(p1, p2);
    cout<<"Difference between two piont is: "<<res;
    return 0;
}