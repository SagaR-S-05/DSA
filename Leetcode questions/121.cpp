#include<bits/stdc++.h>
using namespace std;
//O(n)
int maxProfit(vector<int>& prices) {
    int max_pro=0;
    int buy=prices[0];
    if(prices.empty())
    {
        return 0;
    }
    for(int i=1;i<prices.size();i++)
    {
        if(prices[i]>buy)
        {
            max_pro=max(max_pro,prices[i]-buy);
        }
        else
        {
            buy=prices[i];
        }
    }
    /*
    O(n^2)
    for(int i=0;i<prices.size();i++)
    {
        for(int j=i;j<prices.size();j++)
        {
            cur=prices[j]-prices[i];
            if(cur>max_pro)
            {
                max_pro=cur;
            }
        }
    }
    */
    return max_pro;  
}

int main()
{
    int n;
    cin>>n;
    vector <int> prices(n);
    for(int i=0;i<n;i++)
    {
        cin>>prices[i];
    }
    cout<<maxProfit(prices);
}