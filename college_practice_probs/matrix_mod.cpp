#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                a[i][j]=pow(i*j+2,2);
            }
            else
            {
                int temp1=1;
                int temp2=1;
                for(int k=i+1;k<=n;k++)
                {
                    temp1*=k;
                }
                for(int k=j+1;k<=n;k++)
                {
                    temp2*=k;
                }
             
                // cout<<temp1<<endl;
                // cout<<temp2<<endl;
                a[i][j]=temp1+temp2;
            }
            

        }
    }
    int a2[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 || j==0)
            {
                a2[i][j]=a[i][j]*2;
            }
            else
            {
                a2[i][j]=a[i][j]+a[i-1][j-1];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a2[i][j]<<" ";
        }
        cout<<endl;
    }


}


