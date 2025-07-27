#include<iostream>
using namespace std;
// Approach 1:
int main()
{
    int n;
    cin >> n;
    int count=0;

    string binary = "";

    while (n > 0)
    {
        int rem = n % 2;
        binary = to_string(rem) + binary;
        if(rem==1)
        {
            count++;
        }
        n /= 2;
    }

    cout << binary<<endl;
    cout<<count;
    
    return 0;
}

// Approach 2
int main()
{
    int n;
    cin >> n;
    int count=0;
    while(n!=0)
    {
        if(n&1)
        {
            count++;
        }
        n=n>>1;
    }
    cout<<count;
}