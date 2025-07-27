#include<iostream>
#include<queue>

using namespace std;

int main()
{
    priority_queue<int> maxi; // max heap, i.e., max element has greatest priority
    priority_queue<int,vector<int>,greater<int>> mini; // min heap i.e., opp of max heap

    maxi.push(2);
    maxi.push(3);
    maxi.push(0);
    maxi.push(1);

    int n1=maxi.size();
    for(int i=0;i<n1;i++)
    {
        cout<<maxi.top()<<" "; // 3 2 1 0
        maxi.pop();
    }

    cout<<endl;
    mini.push(2);
    mini.push(3);
    mini.push(0);
    mini.push(1);

    int n2=mini.size();
    for(int i=0;i<n2;i++)
    {
        cout<<mini.top()<<" "; // 0 1 2 3
        mini.pop();
    }
    // mini.size()--> 1 (As all elements are popped)
}