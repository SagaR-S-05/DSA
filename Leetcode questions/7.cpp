#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int binary=0;
    while(x!=0)
    {
        if(binary<INT32_MIN/10 || binary>INT32_MAX/10)
            {
                return 0;
            }
            
        int rem=x%10;
        binary=binary*10+rem;
        x/=10;

    }
    cout<<binary<<endl;
    
    
}