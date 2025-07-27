#include <bits/stdc++.h> 
using namespace std;
void sort012(int *arr, int n)
{
   // vector <int> result(arr,arr+n);
   // sort(result.begin(),result.end());
   // for(int i=0;i<n;i++)
   // {
   //    arr[i]=result[i];
   // }   
   int low=0,mid=0,high=n-1;
   while(mid<=high)
   {
      if(arr[mid]==0)
      {
         swap(arr[mid],arr[low]);
         low++;
         mid++;
      }
      else if(arr[mid]==1)
      {
         mid++;
      }
      else
      {
         swap(arr[mid],arr[high]);
         high--;
      }
   }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort012(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}