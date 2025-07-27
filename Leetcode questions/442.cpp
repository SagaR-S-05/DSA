#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[25];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        int index=abs(a[i])-1;

        if(a[index]<0)
        {
            cout<<abs(a[i])<<" ";
        }
        else
        {
            a[index]=-a[index];
        }
    }
  

}

// #include<iostream>
// using namespace std;

// void findDuplicates(int arr[], int n) {
//     cout << "Duplicates: ";
//     for (int i = 0; i < n; i++) {
//         int index = abs(arr[i]) - 1;  // Get index based on value

//         if (arr[index] < 0) {  
//             // If already negative, it's a duplicate
//             cout << abs(arr[i]) << " ";
//         } else {
//             // Mark it as visited by making it negative
//             arr[index] = -arr[index];
//         }
//     }
//     cout << endl;
// }

// int main() {
//     int n;
//     cin >> n;
//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }

//     findDuplicates(arr, n);
//     return 0;
// }
