#include <iostream>
using namespace std;

// Pure Virtual Function is define to make sure that display function must be present in child class.
// Abstract base class: The class which is not use to create object, but to inherit other class from it
//

class SC
{
protected:
    string title;
    float rating;

public:
    SC(string t, float r)
    {
        title = t;
        rating = r;
    }
    // write '0' at front virtual function, it becomes pure virtual function.
    virtual void display() = 0; // do-nothing function ----> pure virtual function
};
class SCV : public SC
{
    int videolength;

public:
    SCV(string t, float r, int v) : SC(t, r)
    {
        videolength = v;
    }

    void display()
    {
        cout << "The title of Video is: " << title << endl;
        cout << "The Rating of the Video is: " << rating << endl;
        cout << "Length of Video is: " << videolength << endl;
    }
};

class SCT : public SC
{
    int txtlenght;

public:
    SCT(string t, float r, int txt) : SC(t, r)
    {
        txtlenght = txt;
    }

    void display()
    {
        cout << "The title of text is: " << title << endl;
        cout << "The Rating of the Text is: " << rating << endl;
        cout << "Length of Text iss: " << txtlenght;
    }
};

int main()
{
    // SC *ptr = new SC("This is", 14);
    SC *ptr[2];
    SCV djv("This is Django Video", 4.2, 2);
    SCT djt("This is Django para", 4.5, 200);
    ptr[0] = &djv;
    ptr[1] = &djt;
    ptr[0]->display();
    ptr[1]->display();

    return 0;
}