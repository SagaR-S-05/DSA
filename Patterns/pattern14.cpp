#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    char count='A';
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<count;
            count++;
        }
        cout<<endl;
    }
}