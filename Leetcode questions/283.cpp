#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {

    int nonZeroIndex=0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=0)
        {
            swap(nums[i],nums[nonZeroIndex]);
            nonZeroIndex++;
        }
    }
    // int count = 0; // Count of zeros
    
    // for (auto it = nums.begin(); it != nums.end();) {
    //     if (*it == 0) {
    //         it = nums.erase(it); // Remove the zero and shift elements left
    //         count++; // Keep track of how many zeroes were removed
    //     } else {
    //         ++it; // Move iterator only if not erasing
    //     }
    // }

    // // Append 'count' number of zeroes at the end
    // while (count--) {
    //     nums.push_back(0);
    // }
}

int main()
{
    vector<int> nums = {0,1,0,3,12};
    moveZeroes(nums);
    for(auto x: nums)
    {
        cout<<x<<" ";
    }
}