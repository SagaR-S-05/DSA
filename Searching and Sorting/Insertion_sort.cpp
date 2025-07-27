#include<bits/stdc++.h>
using namespace std;

vector <int> sortedarr(vector<int> &arr)
{
    for(int i=1;i<arr.size();i++)
    {
        int temp=arr[i];
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1]=temp;
    }
    return arr;
}

int main()
{
    vector <int> arr= {10,1,7,4,8,2,11};
    for(auto x: sortedarr(arr))
    {
        cout<<x<<" ";
    }
}