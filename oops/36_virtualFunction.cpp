#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
    protected:

    float rating;
    const char *title;
public:
    CWH(const char *s, float r) : rating(r), title(s)
    {
    }

    virtual void display()
    {
        cout<<"Based Class Constructor is called."<<endl;
    }
};

class CWHvideo : public CWH
{
    int videolength;
    public:
    CWHvideo(const char *s, float r, int vl) : CWH(s, r)
    {
        videolength = vl;
    }
    void display()
    {
        cout<<"THis is an amazing video with title: "<<title<<endl;
        cout<<"Ratings: "<< rating << " Out of 5"<<endl;
        cout<<"Length of this video is: "<< videolength << " Minutes" << endl;
    }
};
class CWHword : public CWH
{
    int word;
    public:
    CWHword(const char *s, float r, int w) : CWH(s, r)
    {
        word = w;
    }
    void display()
    {
        cout<<"THis is an amazing article with title: "<<title<<endl;
        cout<<"Ratings: "<< rating << " Out of 5"<<endl;
        cout<<"Length of this article is: "<< word << " Words" << endl;
    }
};

int main()
{
    const char *title;
    float rating;
    int vl;

    // THis is for video 
    title = "THis is Django Video";
    rating = 4.5;
    vl = 6;
    CWHvideo dj(title, rating, vl);
    // dj.display();



    // THis is for txt.
    title = "THis is Django Video";
    rating = 4.0;
    int word = 100; 
    CWHword djtxt(title, rating, word);
    // djtxt.display();

    // Ploymorphism Concept
    CWH *tut[2];
    tut[0] = &dj;
    tut[1] = &djtxt;
    tut[0]->display(); // Due to virtual function of the Based Class, display function of Child classes are display, if the display fuction is not present in the child class then display function of the based class will be excauted
    tut[1]->display();


    // CWH o(title, rating);
    // CWH *tut = &o;
    // CWH *ptr = new CWH(title, rating);






    return 0;
}