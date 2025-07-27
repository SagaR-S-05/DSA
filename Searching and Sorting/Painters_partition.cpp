#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector <int> &boards,int k,int mid)
{
    int paintsum=0;
    int painter=1;

    for(int i=0;i<boards.size();i++)
    {
       if(paintsum+boards[i]>mid)
       {
            painter++;
            paintsum=boards[i];
            if(painter>k)
            {
                return false;
            }
       }
       else
        {
            paintsum+=boards[i];
        }
    }
    return true;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    int start=*max_element(boards.begin(),boards.end());
    int end=0,ans;
    for(int i=0;i<boards.size();i++)
    {
        end+=boards[i];
    }
    ans=end;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(isPossible(boards,k,mid))
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

int main()
{
    int n;
    cin>>n;
    vector <int> boards(n);
    for(int i=0;i<n;i++)
    {
        cin>>boards[i];
    }
    int k;
    cin>>k;
    cout<<findLargestMinDistance(boards,k);
}