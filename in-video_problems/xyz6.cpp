#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[25];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<sizeof(a)/sizeof(int);
}