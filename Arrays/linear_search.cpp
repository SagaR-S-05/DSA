#include<iostream>
using namespace std;
 bool search(int a[],int key, int n)
 {
    for(int i=0;i<n;i++)
    {
        if(key==a[i])
        {
            return 1;
            
            
        }
       
    }
    return 0;
 }

 int main()
 {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cout<<"Key:"<<" ";
    cin>>key;

    bool found=search(a,n,key);
    
    if(found)
    {
        cout<<"Found";
    }
    else{
        cout<<"No";
    }

 }