#include<bits/stdc++.h>
using namespace std;

int LCS(string s1, string s2, string s3)
{
    int l1=s1.length();
    int l2=s2.length();
    int l3=s3.length();
    int dp[101][101][101]={0};

    for(int i=1;i<=l1;i++)
    {
        for(int j=1;j<=l2;j++)
        {
            for(int k=1;k<=l3;k++)
            {
                if((s1[i-1]==s2[j-1]) && (s2[j-1]==s3[k-1]))
                {
                    dp[i][j][k]=1+dp[i-1][j-1][k-1];
                }
                else
                {
                    dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
                }
            }
        }
    }
    return dp[l1][l2][l3];
}

int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    cout<<LCS(s1,s2,s3);
    return 0;
}