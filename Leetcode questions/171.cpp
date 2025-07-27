#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
/* Approach-1: Using vector
int titleToNumber(string columnTitle) 
{
    vector<pair<int, char>> alphabets = {
        {1, 'A'}, {2, 'B'}, {3, 'C'}, {4, 'D'}, {5, 'E'}, {6, 'F'}, {7, 'G'},
        {8, 'H'}, {9, 'I'}, {10, 'J'}, {11, 'K'}, {12, 'L'}, {13, 'M'}, {14, 'N'},
        {15, 'O'}, {16, 'P'}, {17, 'Q'}, {18, 'R'}, {19, 'S'}, {20, 'T'}, {21, 'U'},
        {22, 'V'}, {23, 'W'}, {24, 'X'}, {25, 'Y'}, {26, 'Z'}
    };

    int result = 0;
    
    for (char c : columnTitle) 
    {
        int value = 0;
        
        // Find the corresponding numeric value for character c
        for (auto p : alphabets) 
        {
            if (p.second == c) 
            {
                value = p.first;
                break;
            }
        }
        
        // Apply base-26 conversion
        result = result * 26 + value;
    }

    return result;
}
*/
// Approach-2
int titleToNumber(string columnTitle) {
    int result=0;
    for(auto c : columnTitle)
    {
        result=result*26+(c-'A'+1);
    }
    return result;
    
}
int main()
{
    string columnTitle;
    cin >> columnTitle;
    cout << titleToNumber(columnTitle);
}


