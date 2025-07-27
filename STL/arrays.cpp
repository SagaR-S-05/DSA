#include<iostream>
#include<array>

using namespace std;

int main()
{
    array<int,5> arr = {1,2,3,4,5};
    for(int x : arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"Size: "<<arr.size()<<endl; // 5
    cout<<"Element at position 2: "<<arr.at(1)<<endl; // 2
    cout<<"Is array empty? 0 if no, 1 otherwise: "<<arr.empty()<<endl; // 0
    cout<<"First element: "<<arr.front()<<endl; // 1
    cout<<"Last element: "<<arr.back()<<endl; // 5
}