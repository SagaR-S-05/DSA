#include<bits/stdc++.h>
using namespace std;

int rearrange(int n)
{
    string bin="";
    // vector <char> bin_arr;
    
        
        while(n!=0)
        {
            bin=(n%2==0?'0':'1')+bin;
            n/=2;
        }
        sort(bin.begin(),bin.end());
    
    cout<<bin;
   int res=stoi(bin,0,2);

   return res;
}

int main()
{
    int n;
    cin>>n;

    cout<<rearrange(n);
}