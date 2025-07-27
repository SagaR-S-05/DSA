#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    char target;
    cin>>target;
    
    int count=0;
    // for(int i=0;a[i]!='\0';i++)
    // {
        
    //     if(a[i]==target)
    //     {
    //         count++;
    //     }
    // }

    for(char cha: a)
    {
        if(cha==target)
        {
            count++;
        }
    }
    cout<<count;


    
}