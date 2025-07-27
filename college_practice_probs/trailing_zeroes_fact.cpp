// O(n log n)
// #include <iostream>
// using namespace std;

// int main()
// {
//     int fact=1;
//     int n;
//     cin>>n;
//     while(n!=0)
//     {
//         fact=fact*n;
//         n--;
//     }
//     cout<<fact<<endl;
//     int temp=0;
//     int count=0;
//     while(fact>=120)
//     {
//         temp=fact%10;
//         if(temp==0)
//         {
//             count++;
//         }
//         fact=fact/10;
//     }
//     cout<<count;
// }

// O(log n)
#include <iostream>
using namespace std;

int zeros(int num)
{
    int count=0;
    while(num>=5)
    {
        count+=num/5;
        num/=5;
    }
    return count;
}

int main()
{
    int num;
    cin>>num;
    cout<<zeros(num);

}