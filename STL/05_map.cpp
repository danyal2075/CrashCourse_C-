#include<iostream>
#include<map>
#include<string>

// https://en.cppreference.com/w/cpp/container/map

using namespace std;
int main(){
    map<string, int> marks;
    marks["sohail"] = 89;
    marks["danyal"] = 73;
    marks["hamza"] = 70;

    marks.insert({{"majid", 85}, {"khan", 70}});
    map<string, int> :: iterator it;
    for (it = marks.begin(); it != marks.end(); it++ )
    {
        cout<<(*it).first<<" "<<(*it).second<<"\n";
    }
    


    return 0;
}