#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector <int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int low=0,high=n-1;
    while(low<high)
    {
        int mid = low + (high-low)/2;

        if(a[mid]>=a[0])
        {
            low=mid+1;
        }
        else
        {
            high=mid;
        }
    }
    cout<<low;
}
