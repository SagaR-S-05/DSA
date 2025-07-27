#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<4;i++)
    {
        switch(i)
        {
            case 0:
            cout<<n/100<<" 100rs note"<<endl;
            n=n-((n/100)*100);
            break;

            case 1:
            cout<<n/50<<" 50rs note"<<endl;
            n=n-((n/50)*50);
            break;

            case 2:
            cout<<n/20<<" 20rs note"<<endl;
            n=n-((n/20)*20);
            break;

            case 3:
            cout<<n<<" 1rs note"<<endl;
            break;
        }
    }
}
