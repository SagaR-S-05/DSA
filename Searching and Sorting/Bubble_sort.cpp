#include<bits/stdc++.h>
using namespace std;

vector <int> sortedarr(vector<int> &arr)
{
    int count=0;
    for(int i=1;i<arr.size();i++)// For round 1 to n-1.
    {
        bool swapped = false; // Optimization for best case scenario (If array is already sorted)
        for(int j=0;j<arr.size()-i;j++) // Process element till n-i th index.
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
                // count++; Counts whenever shift is done.
            }
        }
        if(swapped==false) break;
    }
    // return count; return 6,i.e., no of shifts.
    return arr;
}

int main()
{
    vector <int> arr= {10,1,7,6,14,9};
    // cout<<sortedarr(arr);
    for(auto x: sortedarr(arr))
    {
        cout<<x<<" ";
    }
}