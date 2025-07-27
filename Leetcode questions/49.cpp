class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<pair<string,string>> map;
        vector<vector<string>> res;
        for(auto s : strs)
        {
            string sorted = s;
            sort(sorted.begin(),sorted.end());
            map.push_back(make_pair(s,sorted));
        }
        vector<bool> seen(map.size(),false);
        for(int i=0;i<map.size();i++)
        {
            if(seen[i]) continue;
            vector<string> groups;
            groups.push_back(map[i].first);
            seen[i]=true;
            for(int j=i+1;j<map.size();j++)
            {
                if(!seen[j] && map[i].second==map[j].second)
                {
                    groups.push_back(map[j].first);
                    seen[j]=true;
                }
            }
            res.push_back(groups);
        }
        return res;
        
    }
};

// Short:
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>>mp;
        for(auto str: strs){
            string s= str;
            sort(s.begin(), s.end());
            mp[s].push_back(str);
        }
        vector<vector<string>>ans;
        for(auto it= mp.begin(); it!=mp.end(); it++){
            ans.push_back(it->second);
        }
        return ans;
    }
};