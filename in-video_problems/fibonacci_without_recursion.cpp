#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    int f = 0;
    int s = 1;
    for (int i = 1; i <= n; i++)
    {
        int temp = s;
        s = s + f;
        f = temp;
    }
    return f;
}
int main()
{
    int n;
    cin>>n;
    int ans=fib(n);
    cout<<ans;
}