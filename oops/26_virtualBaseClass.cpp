#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_no;
    
    public:
    void set_number(int a){
        roll_no = a;
    }
    void get_number(){
        cout<<"Roll Number is: "<< roll_no<<endl;
    }
};

class Test: virtual public Student{
    protected:
    int math, physics;
    public:
        void set_marks(int m, int p){
            math = m;
            physics = p;
        }
        void get_marks(){
            cout<<"Math marks is: "<<math<<endl<<"Physics Marks is: "<<physics<<endl;
        }
};

class Sports: virtual public Student{
    protected:
        float score;
    public:
        void set_score(int s){
            score = s;
        }
        void get_score(){
            cout<<"The score is: "<<score<<endl;
        }
};

class Result: public Test, public Sports{
    float total;
    public:
        void display(){
            total = math + physics + score;
            get_number();
            get_marks();
            get_score();
            cout<<"Total Marks: "<<total;
        }
};

int main(){
    Result sohail;
    sohail.set_number(78);
    sohail.set_marks(56,86);
    sohail.set_score(95);
    sohail.display();
    
    return 0;
}