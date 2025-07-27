#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    // int rem=0;
    // string bin="";
    // while(num!=0)
    // {
    //     rem=num%2;
    //     bin=to_string(rem)+bin;
    //     // cout<<bin;
    //     num=num/2;
    // }
    // cout<<bin;
    string bin="";
    while(num!=0){
        bin=(num%2==0?'0':'1')+bin;
        num/=2;
    }

    cout<<bin;
}

// bitset<32> variable_name(int_num);


