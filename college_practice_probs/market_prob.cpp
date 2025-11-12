#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=20,b=14;
    int n=122;
    int mrp = a+(2*b);
    n=n-a-(2*b);
    // cout<<n;
    int no_of_b2_g1 = n-(n%3);
    int rem_prod = n%3;
    mrp=mrp+(no_of_b2_g1/3)*2;
    cout<<"MRP :" <<mrp<<endl;
    cout<<"Not sold :"<<rem_prod;

}