// // O(n)
// #include<iostream>
// using namespace std;

// int main() 
// {
//     int a[25],n;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }

//     int temp[25];
//     for(int i=0;i<n;i++)
//     {
//         temp[n-i-1]=a[i];
//     }

//     for(int i=0;i<n;i++)
//     {
//         cout<<temp[i]<<" ";
//     }
// }

// O(1)
#include<iostream>
using namespace std;

int main() 
{
    int a[25], n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Two-pointer approach to reverse in-place
    int left = 0, right = n - 1;
    while (left < right) {
        swap(a[left], a[right]);
        left++;
        right--;
    }

    // Print the reversed array
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
