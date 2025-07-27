#include<iostream>
using namespace std;

int main()
{
    int a[25], n, temp = 0;

    
    cin >> n;

    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) {
                count++; 
            }
        }
        if (count == 1) { 
            temp = a[i];
            break; 
        }
    }

    
    cout << temp << endl;

    return 0; 
}


// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;  // Input the size of the array (must be 2M+1)

//     int a[n];  // Declare an array of size n
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];  // Input array elements
//     }

//     int unique = 0;  // XOR accumulator
//     for (int i = 0; i < n; i++) {
//         unique ^= a[i];
//         cout<<unique<<endl;  // XOR all elements
//     }

//     cout << "The unique element is: " << unique << endl;
//     return 0;  // Indicate successful execution
// }
