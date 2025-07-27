#include<bits/stdc++.h>
using namespace std;

long long int sq_rt(int n)
{
    int low = 0, high = n;
    long long int ans=-1;
    while(low<=high)
    {
        long long int mid = low + (high-low)/2;
        if(mid*mid == n)
        {
            return mid;
        }
        else if (mid*mid > n)
        {
            high=mid-1;
        }
        else
        {
            ans=mid;
            low=mid+1;

        }
    }
    return ans;
}

double morePrecision(int n, int precision , int tempsol )
{
    double factor=1;
    double ans = tempsol;

    for(int i=0;i<precision;i++)
    {
        factor=factor/10;
    }
    for(double j=ans;j*j<n;j=j+factor)
    {
        ans=j;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int tempsol=sq_rt(n);
    cout<<"Ans: "<<morePrecision(n,3,tempsol)<<endl;
}