#include<iostream>
using namespace std;

int main()
{
    int sum=0,prod=1;
    int n;
    cout<<"n=";
    cin>>n;

    while(n>0)
    {
        int n1=n%10;
        sum+=n1;
        prod*=n1;
        n/=10;
    }
    cout<<"Sum:"<<sum<<endl;
    cout<<"Product:"<<prod<<endl;

    cout<<"Difference:"<<prod-sum<<endl;

   

}