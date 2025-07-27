#include<bits/stdc++.h>
using namespace std;

int binsearch(int a[],int n,int key)
{
    int low=0, high=n-1;
    // int mid;
    while(low<=high)
    {
        // int mid=(low+high)/2;
        // This formula can get exhausting when low=2^31 -1  and  high=2^31 -1 
        // Instead we use the below formula, which yields the same, but becomes useful in the above scenario.
        int mid = low + (high-low)/2;

        if(a[mid]==key)
        {
            return mid;
        }
        else if (a[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    int res=binsearch(a,n,key);
    if(res!=-1)
    {
        cout<<"The key is found at position: "<<res;
    }
    else
    {
        cout<<"Not found!";
    }
    
}