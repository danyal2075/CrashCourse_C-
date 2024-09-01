#include <iostream>
using namespace std;

/*
    - Inheritance Path: StudentExamResult


*/

class Student
{
protected:
    int rol_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int roll)
{
    rol_number = roll;
}
void Student ::get_roll_number()
{
    cout << "The roll number of the student is: " << rol_number << endl;
}

class Exam : public Student
{
protected:
    float math;
    float pyhsic;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m, float p)
{
    math = m;
    pyhsic = p;
}

void Exam ::get_marks()
{
    cout << "Math: " << math << " Physics: " << pyhsic << endl;
}

class Result : public Exam
{
public:
    void percentage(void);
};
void Result ::percentage()
{
    get_new_handler();
    get_marks();
    cout << "The result is: " << (math + pyhsic) / 2 << "%" << endl;
}

int main()
{
    Result sohail;
    sohail.set_roll_number(12);
    sohail.get_roll_number();
    sohail.set_marks(90.0, 95.0);
    sohail.percentage();

    return 0;
}