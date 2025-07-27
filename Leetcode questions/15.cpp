#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


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

            if (sum == 0) {
                result.push_back({a[i], a[left], a[right]});

                // Skip duplicate elements for the second number
                while (left < right && a[left] == a[left + 1]) left++;
                // Skip duplicate elements for the third number
                while (left < right && a[right] == a[right - 1]) right--;

                // Move pointers
                left++;
                right--;
            } else if (sum < 0) {
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
