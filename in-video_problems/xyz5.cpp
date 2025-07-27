// Not using functions
#include<iostream>
using namespace std;

int main() 
{
    int n;
    
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=a[0];
    int min=a[n-1];

    for(int i=0;i<n;i++)
    {
        
        if(a[i]>max)
        {
            max=a[i];
        }
        cout<<max<<" ";
    }
    cout<<endl;

    for(int i=n-1;i>0;i--)
    {
        
        if(a[i]<min)
        {
            min=a[i];
        }
        cout<<min<<" ";
    }

    cout<<"Max ele is: "<<max<<endl<<"Min ele is: "<<min<<endl;


}
// Using functions and INT_MAX,INT_MIN,max(),min()
// #include<iostream>
// using namespace std;

// int getMin(int num[], int n) {

//     int mini = INT_MAX;
    
//     for(int i = 0; i<n; i++) {
        
//         mini = min( mini, num[i]);
        
//         //if(num[i] < min){
//         //    min = num[i];
//         //}
//     }

//     //returning min value
//     return mini;
// }

// int getMax(int num[], int n) {

//     int maxi = INT_MIN;
    
//     for(int i = 0; i<n; i++) {

//         maxi = max(maxi, num[i]);

//        // if(num[i] > max){
//          //   max = num[i];
//        // }
//     }

//     //returning max value
//     return maxi;
// }

// int main() {

//     int size;
//     cin >> size;

//     int num[100];

//     //taking input in array
//     for(int i = 0; i<size; i++) {
//         cin >> num[i];
//     }

//     cout << " Maximum value is " << getMax(num, size) << endl;
//     cout << " Minimum value is " << getMin(num, size) << endl;


//     return 0;
// }