class Solution {
private:
    static bool cmp(const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    }
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int count = 0;
        for(int i = 1; i<intervals.size(); i++){
            if(intervals[i-1][1]>intervals[i][0]){
                count += 1;
                intervals[i][1] = min(intervals[i-1][1], intervals[i][1]);
            }
        }   
        return count;
    }
};
