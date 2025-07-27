#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<string> q;

    q.push("Sagar");
    q.push("S");

    cout<<"First element: "<<q.front()<<endl; // Sagar

    q.pop();
    cout<<"First element: "<<q.front()<<endl; // S

    // size(),empty(),
}