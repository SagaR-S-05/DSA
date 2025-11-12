#include<bits/stdc++.h>
using namespace std;

/* Memoization method
    int fib(int n, vector<int> &dp)
    {
        if(n<=1) return n;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=fib(n-1,dp)+fib(n-2,dp);
    }

    int main()
    {
        int n;
        cin>>n;
        vector<int> dp(n+1,-1);
        int res = fib(n,dp);
        cout<<res;
    }
*/        

/* Tabulation method
    int fib(int n, vector<int> &dp)
    {
        if(n<=1) return n;
        dp[0]=0, dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }

    int main()
    {
        int n;
        cin>>n;
        vector<int> dp(n+1,-1);
        int res = fib(n,dp);
        cout<<res;
    }
*/

int fib(int n)
{
    if(n<=1) return n;
    int prev1=1,prev2=0;
    for(int i=2;i<=n;i++)
    {
        int cur=prev1+prev2;
        prev2=prev1;
        prev1=cur;
    }
    return prev1;
}

int main()
{
    int n;
    cin>>n;
    int res = fib(n);
    cout<<res;
}
