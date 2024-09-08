#include<iostream>
using namespace std;


class Shop{
    int id;
    float price;

    public:
        void setdata(int a, float b){
            id = a;
            price = b;
        }
        void getdata(){
            cout<<"Item Id: "<<id<<" item Price: "<<price<<endl;
        }
};

int main(){
    int size = 3;
    Shop *ptr = new Shop[size];
    Shop *ptrtemp = ptr;
    int q;
    float p;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Id and Price of Item: "<<i+1<<endl;
        cin>>q>>p;
        ptr->setdata(q,p);
        ptr++;
    }
    
    for (int i = 0; i < size; i++)
    {   
        ptrtemp->getdata();
        ptrtemp++;
    }
    

   
    
    return 0;
}