#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    string result;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            result.append("even");
        }
        else
        {
            result.append("odd");
        }

    }
    cout<<result;
}