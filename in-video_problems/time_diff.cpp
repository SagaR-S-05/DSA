#include <iostream>
using namespace std;

int main() {
    int arr[]={5,20,3,2,50,80};
    int result=30;
    
    for(int i=0;i<6;i++){
        for(int j=i+1;j<6;j++){
            int maxi=max(arr[i],arr[j]);
            int mini=min(arr[i],arr[j]);
            if(maxi-mini==result){
                cout<<arr[i] <<"\t"<<arr[j];
                return 0;
            }
        }
        
    }

    return 0;
}