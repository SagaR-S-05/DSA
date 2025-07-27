#include<iostream>
#include<vector>
using namespace std;

void reversearr(vector<int> &arr,int m)
{
    /*
    int start=m+1,end=arr.size()-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    */
    vector <int> res;
    for(int i=0;i<arr.size();i++)
    {
        res.push_back(arr[i]);   
        if(i==m)
        {
            for(int count=arr.size()-1;count>m;count--)
            {
                res.push_back(arr[count]);
            }
            break;
            
        }
        
    }
    for(auto x: res)
    {
        cout<<x<<" ";
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
    int m;
    cin>>m;
    reversearr(arr,m);
    // for(auto x: arr)
    // {
    //     cout<<x<<" ";
    // }
}