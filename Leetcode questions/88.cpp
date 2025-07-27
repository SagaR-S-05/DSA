#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
{
    for(int i=m;i<m+n;i++)
    {
        nums1.pop_back();
    }
    for(auto x: nums2)
    {
        nums1.push_back(x);
    }
    sort(nums1.begin(),nums1.end());
     
}

int main()
{
    int m=3;
    vector<int> nums1={1,2,3,0,0,0};
    int n=3;
    vector <int> nums2={2,5,6};

    merge(nums1,m,nums2,n);
    for(auto x: nums1)
    {
        cout<<x<<" ";
    }
}