#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int maxlength=0,curlength=0;
    for(char c: s)
    {
        if(c=='.')
        {
            maxlength=max(maxlength,curlength);
            curlength=0;
        }
        else
        {
            curlength++;
        }
    }
    maxlength=max(maxlength,curlength);
    cout<<maxlength;


}