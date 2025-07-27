#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);// Insert from back(Front)
    d.push_front(2);// Insert from front(Rear)

    for(int i : d)
    {
        cout<<i<<" "; // 2 1
    }
    cout<<endl;
    d.pop_back();
    for(int i : d)
    {
        cout<<i<<" "; // 2
    }
    cout<<endl;
    d.pop_front();
    for(int i : d)
    {
        cout<<i<<" "; // Nothing
    }
    cout<<endl;
    // d.at(), d.empty() can also be used here.

    deque<int> d1;
    d1.push_back(1);
    d1.push_front(2);

    cout<<"Before erase- Size: "<<d1.size() <<" Queue: ";
    for(int i : d1)
    {
        cout<<i<<" "; // Size will be 2, queue: 2 1
    }
    
    cout<<endl;
    d1.erase(d1.begin(),d1.begin()+1); // To delete only the first element
    cout<<"After erase: "<<d1.size()<<" Queue: ";
    for(int i : d1)
    {
        cout<<i<<" "; // Size: 1 , queue: 1
    }
}