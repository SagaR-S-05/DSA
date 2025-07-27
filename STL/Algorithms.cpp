#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);

    // Binary search: -> array needs to be sorted.
    // If found -> 1, 0 otherwise.

    cout<<"Finding 3 using BS: "<<binary_search(v.begin(),v.end(),3)<<endl; // 1
    cout<<"Lower bound: "<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl; // 1
    cout<<"Upper bound: "<<upper_bound(v.begin(),v.end(),3)-v.begin()<<endl; // 2


    // Max and Min:
    int a=3;
    int b=5;
    cout<<max(a,b)<<endl; // 5
    cout<<min(a,b)<<endl; // 3

    // Swap:
    swap(a,b);
    cout<<"a: "<<a<<" b: "<<b<<endl; // a:5 b:3

    // String reversal: 

    string s1="abcd";
    reverse(s1.begin(),s1.end());
    cout<<s1<<endl; // dcba

    // Rotation:
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"v after rotation:";
    for(auto x: v)
    {
        cout<<x<<" "; // 3 5 7 1
    }
    cout<<endl;
    // Sort: Based on IntroSort -  Combination of quick,heap and insertion sorts.

    sort(v.begin(),v.end());
    for(auto x: v)
    {
        cout<<x<<" "; // 1 3 5 7
    }

}