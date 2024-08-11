#include <iostream>
#include <string>
using namespace std;

// Calling chkbin() inside another function: in this case it is in the getbin()
// make it private then i cannot call this function in the main if i do, it will throw in error


class binary
{
private:
    string s;
    void chkbin(void);

public:
    void getbin(void);
    // void chkbin(void);
    void oneComplement(void);
    void display(void);
};

void binary ::getbin(void)
{
    cout << "Enter a binary value: ";
    cin >> s;
    chkbin();
}

void binary ::chkbin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Number";
            exit(0);
        }
    }
}

void binary ::oneComplement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
            s.at(i) = '0';
    }
}

void binary ::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    
}

int main()
{
    binary h;
    h.getbin();
    // h.chkbin();
    h.oneComplement();
    h.display();

    return 0;
}