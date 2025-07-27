#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<char> a(n);  // Use vector instead of char array
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];  // Take character input properly
    }
    
    char vowel[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    
    int count = 0;

    for(int i = 0; i < n; i++) {
        int isVowel = 0;
        
        for(int j = 0; j < 10; j++) {
            if (a[i] == vowel[j]) {
                isVowel = 1;
                break;  // Stop checking once a vowel is found
            }
        }
        
        if (!isVowel) {
            // cout << a[i];  // Print only if it's not a vowel
            count++;
        }
    }
    
    cout << "\nCount of non-vowel characters: " << count << endl;

    return 0;
}
