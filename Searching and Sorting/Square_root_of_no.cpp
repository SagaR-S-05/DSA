#include<bits/stdc++.h>
using namespace std;

int floorSqrt(int n)
{
    
    int count=1;
    // O(n) approach
    // vector <int> no_arr;
    // for(int i=0;i<n;i++)
    // {
    //     no_arr.push_back(count);
    //     count++;
    // }
    // for (auto x: no_arr)
    // {
    //     // cout<<x<<" ";
    //     if(sqrt(n)==x)
    //     {
    //         return x;
    //     }
    // }

    //O(log n) approach
    int low=0, high = n;
    while(low<=high && high<count)
    {
        int mid = low + (high-low)/2;
        if(mid*mid == n)
        {
            return mid;
        }
        count++;
    }
    return floor(sqrt(n));

}

int main()
{
    int n;
    cin>>n;
    cout<<floorSqrt(n);
    // int res=int(sqrt(n));
    // cout<<res;
}