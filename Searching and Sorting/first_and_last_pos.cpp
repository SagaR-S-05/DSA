#include<bits/stdc++.h>
using namespace std;

int firstocc(vector<int> &arr, int n , int k)
{
    int low=0,high=n-1,first=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==k)
        {
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]<k)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return first;
}

int lastocc(vector<int> &arr, int n , int k)
{
    int low=0,high=n-1,last=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(arr[mid]==k)
        {
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]<k)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return last;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int first = firstocc(arr,n,k);
    int last= lastocc(arr,n,k);
    return {first,last};
}


int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cin>>k;
    
    pair<int,int> res = firstAndLastPosition(arr,n,k);
    cout<<res.first<<" "<<res.second<<endl;
}