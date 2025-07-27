#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int,string> m;
    // Insertion:
    m[10]="S";
    m[1]="Sagar";
    // for(auto x: m)
    // {
    //     cout<<x.first<<" "; // 1 10 -> Prints keys here.
    // }
    cout<<endl;
    // Insertion can also be done using insert():
    m.insert({2,"Sag"});
    for(auto x: m)
    {
        cout<<x.first<<" "<<x.second<<endl; 
                    /*
                    1 Sagar
                    2 Sag
                    10 S
                    */ 
    }
    // count(),erase(key needs to be given, ex: 10) 
}