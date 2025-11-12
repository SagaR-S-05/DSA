class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int count=0;
        sort(intervals.begin(),intervals.end(),
        [] (const vector<int> &a, const vector<int> &b)
        {
            return a[1]<b[1];
        });

        for(int i=0;i<intervals.size()-1;i++)
        {
            if(intervals[i][1]>intervals[i+1][0])
            {
                intervals.erase(intervals.begin()+i+1);
                count++;
                i=-1;
            }
        }
        return count;
    }
};