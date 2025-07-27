#include<bits/stdc++.h>
using namespace std;

int magic_no(int n)
{
    int count=0;
   
    for(int i=1;i<=n;i++)
    {
        int sum=0;
        string bin="";
        while(n>0)
        {
            bin=(n%2==0?'0':'1')+bin;
            
            n=n/2;
        }
        // cout<<bin<<" ";
        
        for(char c: bin)
        {
            sum=sum+(c=='0'?1:2);
            // cout<<sum<<" ";
        }
        // cout<<sum<<" "<<endl;
        if(sum%2!=0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cin>>n;
    cout<<magic_no(n);
}