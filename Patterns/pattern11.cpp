#include<iostream>
using namespace std;
int main()
{
    int n;
    int count;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        int count=i;
        while(j<=i)
        {
            cout<<count<<"\t";
            j++;count--;

        }
        cout<<"\n";
        i++;
    }
}

// Without using count:
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     int count;
//     cin>>n;
//     int i=1;
//     while(i<=n)
//     {
//         int j=1;
//         while(j<=i)
//         {
//             cout<<i-j+1<<"\t";
//             j++;

//         }
//         cout<<"\n";
//         i++;
//     }
// }