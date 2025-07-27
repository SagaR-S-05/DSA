#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

double findMedianSortedArray(vector<int> &nums1, vector<int> &nums2)
{
    nums1.insert(nums1.end(),nums2.begin(),nums2.end());

    int n=nums1.size();

    sort(nums1.begin(),nums1.end());

    if(n%2!=0)
    {
        return (nums1[n/2]);
    }
    else
    {
        return ((nums1[n/2-1]+nums1[n/2])/2.0);
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> nums1(n);
    for(int i=0;i<n;i++)
    {
        cin>>nums1[i];
    }
    int m;
    cin>>m;
    vector<int> nums2(m);
    for(int i=0;i<m;i++)
    {
        cin>>nums2[i];
    }
    cout<<findMedianSortedArray(nums1,nums2);
}