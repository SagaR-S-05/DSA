//O(n^2)
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int target;
    cin >> target;

    int num1 = -1, num2 = -1;  // Initialize with -1 to check if a valid pair is found

    // Loop through the array to find two numbers that add up to the target
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {  // Start from j = i + 1 to avoid self-pairing
            if (a[i] + a[j] == target) {
                num1 = a[i];
                num2 = a[j];
                break;  // Break when we find a valid pair
            }
        }
        if (num1 != -1) break;  // Stop the outer loop if a pair is found
    }

    if (num1 != -1) {
        cout << num1 << " " << num2 << endl;  // Output the indices of the pair
    } else {
        cout << "No solution found" << endl;  // In case no pair is found
    }

    return 0;
}

// -------------------------------------------------------------------------------------------------------------------------

//O(n^2)- 2
// #include <iostream>
// #include <vector>
// using namespace std;

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         // Iterate over the array
//         for (int i = 0; i < nums.size(); i++) {
//             for (int j = i + 1; j < nums.size(); j++) {  // Start from `i + 1` to avoid self-pairing
//                 if (nums[i] + nums[j] == target) {
//                     return {i, j};  // Directly return the indices as a vector
//                 }
//             }
//         }
        
//         return {};  // Return empty vector if no solution is found
//     }
// };

// int main() {
//     Solution solution;
    
//     // Test input
//     vector<int> nums = {2, 7, 11, 15};
//     int target = 9;
    
//     // Call the twoSum method
//     vector<int> result = solution.twoSum(nums, target);
    
//     // Output the result
//     if (!result.empty()) {
//         cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
//     } else {
//         cout << "No solution found" << endl;
//     }
    
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------
// O(n)

// #include <iostream>
// #include <vector>
// #include <unordered_map>  // Include unordered_map for efficient lookup
// using namespace std;

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int, int> num_map;  // Map to store the number and its index
        
//         for (int i = 0; i < nums.size(); i++) {
//             int complement = target - nums[i];  // Calculate complement
            
//             // Check if complement exists in the map
//             if (num_map.find(complement) != num_map.end()) {
//                 return {num_map[complement], i};  // Return indices of complement and current number
//             }
            
//             // Store the current number with its index in the map
//             num_map[nums[i]] = i;
//         }
        
//         return {};  // Return empty vector if no solution is found
//     }
// };

// int main() {
//     Solution solution;
    
//     // Test input
//     vector<int> nums = {2, 7, 11, 15};
//     int target = 9;
    
//     // Call the twoSum method
//     vector<int> result = solution.twoSum(nums, target);
    
//     // Output the result
//     if (!result.empty()) {
//         cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
//     } else {
//         cout << "No solution found" << endl;
//     }
    
//     return 0;
// }
