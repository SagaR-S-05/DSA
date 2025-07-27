// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "enter the number of words" << endl;
    cin >> n;
    string name[n];
    
    for(int i = 0; i < n; i++) {
        cin >> name[i];
    }

    map<string, int> occur;

    for(int i = 0; i < n; i++) {
        occur[name[i]] += 1;
    }

    for(int i = 0; i < n; i++) {
        if(occur[name[i]] > 1) {
            cout << name[i]<<" ";
            occur[name[i]] = 0;
        }
    }

    return 0;
}
