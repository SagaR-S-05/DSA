#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &stalls, int k, int mid)
{
    int lastpos=stalls[0];
    int cowcount=1;
    for(int i=0;i<stalls.size();i++)
    {
        if(stalls[i]-lastpos>=mid)
        {
           cowcount++;
           if(cowcount==k)
           {
                return true;
           }
           lastpos=stalls[i];
        }
    }
    return false;
}

int maxdist(vector<int> &stalls, int k)
{
    sort(stalls.begin(),stalls.end());
    int start=0, max_dist=0,ans=-1;
    for(int i=0;i<stalls.size();i++)
    {
        max_dist=max(max_dist,stalls[i]);
    }
    int end=max_dist;
    while(start<=end)
    {
        int mid = start + (end-start)/2;
        if(isPossible(stalls,k,mid))
        {
            ans=mid;
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    return ans; 
    
}


int main()
{
    int n;
    cin>>n;
    vector <int> stalls(n);
    for(int i=0;i<n;i++)
    {
        cin>>stalls[i];
    }
    int k;
    cin>>k;
    cout<<maxdist(stalls,k);
}