#include<iostream>
using namespace std;

int binsearch(int a[],int key,int n)
{
    int low=0,high=n-1;
    int mid;
    for(int i=0;i<n;i++)
    {
        mid=(low+high)/2;

        if(key==a[mid])
        {
            return 1;
        }
        else if(key>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;

    int a[25];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int key;
    cin>>key;

    int found=binsearch(a,key,n);

    if(found==1)
    {
        cout<<"Found!"<<endl;
    }
    else
    {
        cout<<"Nope"<<endl;
    }
}