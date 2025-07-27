#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=0;
     while(n!=0)
        {
            if(n==pow(2,i))
            {
                cout<<"true";
                break;
                
            }
            
            else if(pow(2,i)>n)
            {
                cout<<"false";
                break;
            }
            i++;
            
        }
   
}