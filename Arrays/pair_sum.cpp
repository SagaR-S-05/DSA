#include<iostream>
#include<vector>
#include<algorithm>
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
    int target;
    cin>>target;
    vector <pair<int,int>> result; // or vector<vector<int>> result;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==target)
            {
                result.push_back({min(a[i],a[j]),max(a[i],a[j])});
            }
        }
        
    }
    sort(result.begin(),result.end());

    for(auto k : result)
    {
        cout<<k.first<<" "<<k.second<<endl;
    }
}