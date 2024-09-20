#include<iostream>
#include<map>
using namespace std;

template<typename k, typename v>
class interval_map{
    v m_valbegin;
    map<k,v> m_map;

    public:
    template<typename V_forward>
    interval_map(V_forward&& val): m_valbegin(forward<V_forward>(val)){
        cout<<val;
    }

};

int main(){
    int a = 3;
    int &b = a;
    cout<<b;
    interval_map<int, char> o('A');
    return 0;
}