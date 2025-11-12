#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> arr = {1,5,4,3,2,1};
   int n =arr.size();
   int flag=0;
   int sum1=0,sum2=0,max=0;
   for(int i=0;i<n-(n/3);i++)
   {
        for(int k=0;k<n;k++)
        {
            if(k<i || k>i+(n/3)-1)
            {
                if(flag<n/3)
                {
                    sum1+=arr[k];
                }
                else
                {
                    sum2+=arr[k];
                }
                flag++;
            }
        }
        max = max>(sum1-sum2)?max:(sum1-sum2);
        max = max>(sum2-sum1)?max:(sum2-sum1);
        sum1=0;
        sum2=0;
        flag=0;
   }   
   cout<<max;
}
   
