#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n1,n2;
    cin>>n1;
    cin>>n2;
    vector <int> a1(n1),a2(n2);
    for(int i=0;i<n1;i++)
    {
        cin>>a1[i];
    }
    for(int j=0;j<n2;j++)
    {
        cin>>a2[j];
    }
    vector<int> same;
    int i=0,j=0;
    while(i<n1 && j<n2)
    {

   
            if(a1[i]==a2[j])
            {
                same.push_back(a1[i]);
                i++;j++;
            }
            else if(a1[i]<a2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
    }       
        
        
    
    for(int k=0;i<same.size();k++)
    {
        cout<<same[i]<<" ";
    }
    for (int num : same) {
        cout << num << " ";
    }

}

// 1 2 2 2 3 4
// 2 2 3 3