#include <iostream>
#include <map>
#include <sstream>
using namespace std;

void findrepeat(string text)
{
    map<string, int> wordCount;
    stringstream ss(text);
    string word;

    while (ss >> word)
    {
        wordCount[word]++;
    }

    bool repeated = false;
    
    for (auto &pair : wordCount)
    {
        if (pair.second > 1)
        {
            cout << pair.first << " ";  // Added space for better readability
            repeated = true;
        }
    }

    if (!repeated)
    {
        cout << "NA";
    }
}

int main()
{ 
    string text;
    getline(cin, text);
    findrepeat(text);
    return 0;
}
