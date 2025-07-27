#include<iostream>
#include<string>
#include<vector>

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
    vector <int> non_zero;
    vector <int> zero;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            zero.push_back(a[i]);
        }
        else
        {
            non_zero.push_back(a[i]);
        }
    }
    vector <int> ans;
    for(int k=0;k<non_zero.size();k++)
    {
        ans.push_back(non_zero[k]);
    }
    for(int k=0;k<zero.size();k++)
    {
        ans.push_back(zero[k]);
    }
    for(int k=0;k<ans.size();k++)
    {
        cout<<ans[k]<<" ";
    }

}