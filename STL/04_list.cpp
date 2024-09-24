#include<iostream>
#include<list>
using namespace std;
// find all the information
// https://en.cppreference.com/w/cpp/container/list 

list<int> setvalue(list<int> &lst,int size){
    int s = size;
    int element;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Your value: ";
        cin>>element;
        lst.push_back(element);
    }
    return lst;
}

void display(list<int> lst){
    list<int> :: iterator iter = lst.begin();
    for (int i = 0; i < lst.size(); i++)
    {
        cout<< *iter<<" ";
        iter++;
    }
    cout<<endl;
    
}


list<int> insert(list<int> &lst){
    list<int> :: iterator it = lst.begin();
    int ele;
    for (int i = 0; i < lst.size(); i++)
    {
        cout<<"Enter Your value: ";
        cin>>ele;
        * it  = ele;
        it++;
    }
    return lst;

}

int main(){
    list<int> list1;
    list1 = setvalue(list1, 5);

    cout<<"Second List"<<endl;
    list<int> list2(3); // this is give list of size 7 having no entries
    list2 = insert(list2);



    display(list1);
    display(list2);    

    // **************************** Deleting***


    // list1.pop_back(); // THis delets the last element
    // display(list1);

    // list1.pop_front();  // This deletes the first values
    // display(list1);


    // list1.remove(3); // put the value in the that exist in the list
    // display(list1);


    //***************************************** Sorting */
    // list1.sort();
    // cout<<"Sorted list: ";
    // display(list1);


    // *********************** Merging two list ***********
    list1.merge(list2);
    cout<<"Merge list: ";
    display(list1);


    // ********************** 
    list1.reverse();
    cout<<"Reserve list: ";
    display(list1);

    return 0;
}