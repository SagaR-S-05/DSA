#include <bits/stdc++.h>  
using namespace std;

bool isPossible(int m,int n, vector<int> &time, long long mid)
{
    long long dayscount=1;
    long long timesum=0;
    for(int i=0;i<m;i++)
    {
        if(timesum+time[i]<=mid)
        {
            timesum+=time[i];
        }
        else
        {
            dayscount++;
            if(timesum>mid || dayscount>n)
            {
                return false;
            }
            timesum=time[i];
        }
    }
    return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> &time)
{
    long long start=0,sum=0;
    for(int i=0;i<m;i++)
    {
        sum+=time[i];
    }
    long long end = sum;
    long long ans=-1;
    while(start<=end)
    {
        long long mid = start + (end-start)/2;
        if(isPossible(m,n,time,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return ans;
}


int main() {
    int n, m;
    cin >> n >> m;
    vector<int> time(m);

    for (int i = 0; i < m; i++) {
        cin>>time[i];
    }
    cout << ayushGivesNinjatest(n,m, time);
}
