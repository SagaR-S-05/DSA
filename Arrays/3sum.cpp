#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int target;
    cin >> target;

    vector<vector<int>> result;

    // Step 1: Sort the array to make duplicate checking easier
    sort(a.begin(), a.end());

    // Step 2: Fix one element and use two-pointer approach for the other two
    for (int i = 0; i < n - 2; i++) {
        // Skip duplicate elements for the first number
        if (i > 0 && a[i] == a[i - 1]) continue;

        int left = i + 1, right = n - 1;

        while (left < right) {
            int sum = a[i] + a[left] + a[right];

            if (sum == target) {
                result.push_back({a[i], a[left], a[right]});

                // Skip duplicate elements for the second number
                while (left < right && a[left] == a[left + 1]) left++;
                // Skip duplicate elements for the third number
                while (left < right && a[right] == a[right - 1]) right--;

                // Move pointers
                left++;
                right--;
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
    }

    // Print unique triplets
    for (auto x : result) {
        cout << x[0] << " " << x[1] << " " << x[2] << endl;
    }

    return 0;
}

//O(n^3)
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     vector <int> a(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int target;
//     cin>>target;
//     set<vector<int>> uniquetriplet;
//     vector <vector<int>> result;
//     for(int i=0; i<n;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         { 
//             for(int k=j+1;k<n;k++)
//             {
//                 if((a[i]+a[j]+a[k])==target)
//                 {
//                     vector<int> triplet={a[i],a[j],a[k]};
//                     sort(triplet.begin(),triplet.end());
//                     uniquetriplet.insert(triplet);
//                 }
//             }
//         }
//     }

//     for(auto triplet: uniquetriplet)
//     {
//         result.push_back(triplet);
//     }

//     for(auto x: result)
//     {
//         cout<<x[0]<<" "<<x[1]<<" "<<x[2]<<endl;
//     }
// }