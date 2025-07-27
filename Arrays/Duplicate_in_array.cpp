// O(n)
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[25];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int dup=0;
        for(int i=0;i<n;i++)
        {
            
           dup=dup^arr[i];
           
        }
        for(int i=1;i<n;i++)
        {
            dup=dup^i;
        }

        cout<<dup;
        
}

//O(n^2)
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[25];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
    
//   for(int i=0;i<arr.size();i++)
//     {
//         int count=1;
//         for(int j=i+1;j<arr.size();j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 count++;
//                 if(count==2)
//                 {
//                     return arr[j];
//                 }
//             }
     
//         }
//     }
// }
    

    // Write your code here
	
// }