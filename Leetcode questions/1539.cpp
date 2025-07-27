#include<bits/stdc++.h>
using namespace std;

int kthpositivenumber(vector<int> &arr, int k)
{
    int miss_no=0,i=0,cur=1;
        while(miss_no<k)
        {
            if(i<arr.size() && arr[i]==cur)
            {
                i++;
            }
            else
            {
                miss_no++;
                if(miss_no==k)
                {
                    return cur;
                }
            }
            cur++;
        }
        return -1;
}
// O(N log N)
// int kthpositivenumber(vector<int>& arr, int k) {
//     int left = 0, right = arr.size() - 1;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         int missing = arr[mid] - (mid + 1);

//         if (missing < k) {
//             left = mid + 1;  // Search in the right half
//         } else {
//             right = mid - 1; // Search in the left half
//         }
//     }
    
//     return left + k;  
// }


int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int k;
    cin>>k;
    int result = kthpositivenumber(arr,k);
    cout<<result;

}