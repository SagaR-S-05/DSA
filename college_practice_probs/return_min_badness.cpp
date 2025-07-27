#include<bits/stdc++.h>
using namespace std;

int minbad(string S)
{
    int n=S.length();
    int tot_badness=0;

    for(int i=1;i<n;i++)
    {
        if(S[i]!=S[i-1])
        {
            tot_badness++;
        }
    }

    int min_bad=tot_badness;
    for(char c: {'R','B'})
    {
        string painted=S;
        for(int i=0;i<n;i++)
        {
            if(painted[i]=='W')
            {
                painted[i]=c;
            }
        }
        int cur_bad=0;
        for(int i=1;i<n;i++)
        {
            if(painted[i]!=painted[i-1])
            {
                cur_bad++;
            }
        }
        min_bad=min(min_bad,cur_bad);
    }
    return min_bad;
}

int main()
{
    string S;
    cin>>S;
    int result=minbad(S);
    cout<<result;
}