class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> f1 (1000,0);

        for(auto c1 : s)
        {
            f1[c1]++;
        }
        for(auto c2 : t)
        {
            f1[c2]--;
        }
        
        int seen = 0;
        for(auto c : f1)
        {
            if(c==0)
            {
                seen++;
            }
        }
        if(seen==f1.size())
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};