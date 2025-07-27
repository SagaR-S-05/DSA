#include<iostream>
#include<vector> // Dynamic array

using namespace std;

int main()
{
    vector <int> v;
    vector <int> v1(5,1); // v1(size-5,Initialize all elements to 1)
    for(auto x : v1)
    {
        cout<<x<<" "; // 1 1 1 1 1
    }
    cout<<endl;
    // Copying a vector to another
    vector<int> last(v1);
    for(auto x : last)
    {
        cout<<x<<" "; // 1 1 1 1 1
    }
    cout<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl; // 0
    v.push_back(1);
    cout<<"Capacity: "<<v.capacity()<<endl; // 1
    v.push_back(2);
    cout<<"Capacity: "<<v.capacity()<<endl; // 2
    v.push_back(3);
    cout<<"Capacity: "<<v.capacity()<<endl; // 4 Gets doubled
    // But size will be the number of elements in the vector itself. 
    // Capacity and size are different.

    cout<<"Size: "<<v.size()<<endl;
    // Similarly like arrays, we can use v.at(),v.front(),v.back()
    cout<<"Before Popping: ";
    for(auto x: v)
    {
        cout<<x<<" "; // 1 2 3 
    }
    cout<<endl;
    v.pop_back();  // deletes from back(Last index)
    cout<<"After Popping: ";
    for(auto x: v)
    {
        cout<<x<<" "; // 1 2
    }
    cout<<endl;
    cout<<"Before clearing size: "<<v.size()<<endl; // 2
    v.clear();
    cout<<"After clearing size: "<<v.size()<<endl; // 0

}