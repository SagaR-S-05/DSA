#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int freq[n] = {0}; // Array to store the frequency of each element
    int unique[n] = {0}; // Array to check if frequency counts are unique

    // Step 1: Count occurrences of each element
    for (int i = 0; i < n; i++) {
        if (freq[i] == -1) continue; // Skip already processed elements
        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
                freq[j] = -1; // Mark duplicate elements to avoid recounting
            }
        }
        freq[i] = count; // Store frequency
    }

    // Step 2: Check if all frequencies are unique
    for (int i = 0; i < n; i++) {
        if (freq[i] == -1) continue; // Ignore marked elements

        for (int j = i + 1; j < n; j++) {
            if (freq[i] == freq[j]) {
                cout << "False" << endl;
                return 0; // If duplicate frequency found, return immediately
            }
        }
    }

    cout << "True" << endl;
    return 0;
}























// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
    
//     int flag=0;
//     int count_array[n];
//     for(int i=0;i<n;i++)
//     {
//         int count=0;
        
//         for(int j=0;j<n;j++)
//         {
//             if(a[i]==a[j])
//             {
//                 count++;
//                 // cout<<count<<endl;
                 
//             }
            
//         }
//         // cout<<count<<endl;
//         count_array[i]=count;
//         // cout<<count_array[i]<<endl;
//         if(i>0 && count_array[i]!=count_array[i-1])
//         {
//             flag=1;
//         }
        
//     }
//     if(flag==1)
//     {
//         cout<<"True";
//     }
//     else
//     {
//         cout<<"False";
//     }
//     return 0;
    
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int a[n];

//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     int flag = 0;
//     int count_array[n]; // Fixed: Declaring array with proper size

//     for (int i = 0; i < n; i++) {
//         int count = 0;
        
//         for (int j = 0; j < n; j++) {
//             if (a[i] == a[j]) {
//                 count++;
//             }
//         }
        
//         count_array[i] = count; // Fixed: Assigning count correctly
        
//         for(int k=0;k<i;k++)
//         {
//             if(count_array[i]==count_array[k])
//             {
//                 flag=0;
//                 break;
//             }
//         }
//     }

//     if (flag == 1) {
//         cout << "True";
//     } else {
//         cout << "False";
//     }

//     return 0;
// }















// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int count_array[n];
//     int flag=0;
//     for(int i=0;i<n;i++)
//     {
//         if(count_array[i]==-1)
//         {
//             continue;
//         }
//         int count=1;
        
//         for(int j=i+1;j<n;j++)
//         {
//             if(a[i]==a[j])
//             {
//                 count++;
//                 count_array[j]=-1;
//                 // cout<<count<<endl;
                 
//             }
//         }
        
//         count_array[i]=count;   
//     }

//     for(int i=0;i<n;i++)
//     {
//         if(count_array[i]==-1) continue;
//         for(int j=i+1;j<n;j++)
//         {
//             if(count_array[i]==count_array[j])
//             {
//                 flag=0;
//             }
//         }
//     }
    

//     if(flag==1)
//     {
//         cout<<"True";
//     }
//     else
//     {
//         cout<<"False";
//     }
    
    
// }

