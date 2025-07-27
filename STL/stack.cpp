#include<iostream>
#include<stack>

using namespace std;

int main()
{
   stack <string> s;

   s.push("Sagar");
   s.push("S");

   cout<<"Top element: "<<s.top()<<endl; // S
   s.pop();
   cout<<"Top element: "<<s.top()<<endl; // Sagar

   cout<<"Size: "<<s.size()<<endl; // 1

   // s.empty()
}