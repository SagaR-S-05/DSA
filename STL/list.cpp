#include<iostream>
#include<list>

using namespace std;

int main()
{
    list <int> l;
    l.push_back(1);
    l.push_front(2); 
    // pop_back and pop_front is also present here.
    // To copy a list:
    list <int> n(l);

    for(int i : l)
    {
        cout<<i<<" "; // 2 1
    }
    cout<<endl;
    for(int i : n)
    {
        cout<<i<<" "; // 2 1
    }
    cout<<endl;
    l.erase(l.begin());
    for(int i : l)
    {
        cout<<i<<" "; // 1
    }
    cout<<endl;
    cout<<"Size: "<<l.size(); // 1
    cout<<endl;
    list <int> l1(5,100);
    for(int i : l1)
    {
        cout<<i<<" "; // 100 100 100 100 100
    }
}