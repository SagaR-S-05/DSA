#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<vector<int>> arr = {{0,30},{5,10}};
     vector<vector<int>> arr = {{2,4},{4,5},{7,10}};
    sort(arr.begin(),arr.end(),[](const vector<int> &a, const vector<int> &b) {
       return a[1]<b[1]; 
    });
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j];
        }
        cout<<" ";
    }
    cout<<endl;
    
    int count=0;
    for(int i=0;i<arr.size()-1;i++)
    {
        if(arr[i][1]>arr[i+1][0])
        {
            cout<<"Overlap";
            exit(0);
        }
        
    }
    cout<<"No overlap";