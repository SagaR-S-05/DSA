#include<bits/stdc++.h>
using namespace std;
int removeDuplicates(vector<int>& nums) {
    if(nums.empty())
    {
        return 0;
    }
    int i=0;
    for(int j=1;j<nums.size();j++)
    {
        if(nums[j]!=nums[i])
        {
            i++;
            nums[i]=nums[j];
        }
    }
    return i+1;
}

int main()
{
    int n;
    cin>>n;
    vector <int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int result=removeDuplicates(nums);
    cout<<result<<endl;
}