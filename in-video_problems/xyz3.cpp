#include<iostream>
using namespace std;
int bincounta(int a)
{
    int binary1=0,count1=0;
    int rem1=0;
    while(a!=0)
    {
        rem1=a%2;
        if(rem1==1)
        {
            count1++;
        }
        binary1=binary1*10+rem1;
        a=a/2;

    }
    return count1;

}

int bincountb(int b)
{
    int binary2=0,count2=0;
    int rem2=0;
    while(b!=0)
    {
        rem2=b%2;
        if(rem2==1)
        {
            count2++;
        }
        binary2=binary2*10+rem2;
        b=b/2;

    }
    return count2;

}
int main()
{
    int a,b;
    cin>>a>>b;
    int acount=bincounta(a);
    int bcount=bincountb(b);
    int ans=acount+bcount;
    cout<<ans;
}