#include<iostream>
#include<set>

using namespace std;

int main()
{
    set <int> s;

    s.insert(5);
    s.insert(5);
    s.insert(2);
    s.insert(2);
    s.insert(8);
    s.insert(8);
    s.insert(1);
    s.insert(1);

    for(auto x: s)
    {
        cout<<x<<" "; // 1 2 5 8
    }
    cout<<endl;

    // s.erase(s.begin());
    // for(auto x: s)
    // {
    //     cout<<x<<" "; // 2 5 8 -> removes first element
    // }
    set<int> :: iterator it = s.begin(); // Here, to remove second element, we can't use s.begin()+1.
    it++;
    s.erase(it);
    for(auto x: s)
    {
        cout<<x<<" "; // 1 5 8
    }
    cout<<endl;
    // To check if an element is present or not
    cout<<"Is 8 present or not? -> "<<s.count(8)<<endl; // 1

    // To return value present at the iterator for a searched element
    set<int> :: iterator itr = s.find(5);
    cout<<"Value present at itr: "<<*itr<<endl;

}