#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> no_bids(int a[],int n, int target)
{
    vector<vector<int>> result;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(a[i]-a[j])==target)
            {
                result.push_back({min(a[i],a[j]),max(a[i],a[j])});
            }
        }
    }
    return result;
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
    int target;
    cin>>target;

    for(auto x : no_bids(a,n,target))
    {
        cout<<x[0]<<" "<<x[1]<<endl;
    }
}