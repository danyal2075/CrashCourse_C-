#include<iostream>
using namespace std;

class Complex{
    int a, b;

    public:
        void getnum(int v1, int v2);
        void setDataBySum(Complex o1, Complex o2);
        void dataDisplay(void){
            cout<<"Value of complex: "<<a<<" + "<<b<<"i"<<endl;
        }


};
 
void Complex:: getnum(int v1, int v2){
    a = v1;
    b = v2;
}

void Complex::setDataBySum(Complex o1, Complex o2){
    a = o1.a + o2.a;
    b = o1.b + o2.b;
}



int main(){
    
    Complex c1,c2,c3;

    c1.getnum(1,3);
    c1.dataDisplay();

    c2.getnum(4,5);
    c2.dataDisplay();

    c3.setDataBySum(c1, c2);
    c3.dataDisplay();

    return 0;
}