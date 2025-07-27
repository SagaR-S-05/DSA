
#include<bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) 
{
    /* O(N log(N))
        vector <int> arr1=arr;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr1.size();i++)
        {
            if(arr[arr.size()-1]==arr1[i])
            {
                return i;
            }
        }
*/
    int low=0,high=arr.size()-1;
    while(low<high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]>arr[mid+1])
        {
            high=mid;
        }
        else
        {
            low=mid+1;
        }
        return low;
    }
}


int main()
{
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<peakIndexInMountainArray(arr);
}


