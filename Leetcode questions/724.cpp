#include <bits/stdc++.h>
using namespace std;
int pivotIndex(vector<int>& nums) {
    int totalSum = 0, leftSum = 0;
    
    for (int num : nums) 
        totalSum += num;

    for (int i = 0; i < nums.size(); i++) {
        if (leftSum == totalSum - leftSum - nums[i]) // Right sum is totalSum - leftSum - nums[i]
            return i;
        leftSum += nums[i];
    }
    
    return -1;
}

    // Works to some extent
    // int low = 0, high = nums.size() - 1;
    
    // while (low <= high) 
    // {
    //     int mid = low + (high - low) / 2;
    //     int sum1 = 0, sum2 = 0;

    //     // Compute sum1 (left of mid)
    //     for (int i = 0; i < mid; i++)
    //         sum1 += nums[i];

    //     // Compute sum2 (right of mid)
    //     for (int j = mid + 1; j < nums.size(); j++)
    //         sum2 += nums[j];

    //     if (sum1 == sum2) 
    //         return mid; // Found pivot index

    //     if (sum1 < sum2)
    //         low = mid + 1; // Move right
    //     else
    //         high = mid - 1; // Move left
    // }

    // return -1; // No pivot index found


int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    
    for (int i = 0; i < n; i++) 
        cin >> nums[i];

    cout << pivotIndex(nums);
}
