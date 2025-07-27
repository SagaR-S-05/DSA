#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int space=n-row;
        while(space)
        {
            cout<<" ";
            space-=1;
        }
        int col=1;
        while(col<=row)
        {
            cout<<col;
            col++;
        }
        int start=row-1;
        while(start)
        {
            cout<<start;
            start--;
        }
        cout<<endl;
        row++;
        
    }
}