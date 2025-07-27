#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N; 
     int mask = 1;

    while (mask < N){
      mask = (mask << 1) + 1;
    }
    cout<<(mask ^ N)<<endl;
  }
    
