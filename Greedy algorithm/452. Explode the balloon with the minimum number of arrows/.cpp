class Solution {
private:
    static bool cmp(const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    }

public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), cmp);
        int array_num = 0;
        int count = 1;
        if(points.size() == 0) return count;
        for(int i = 1; i<points.size(); i++){
            if (points[i][0] > points[i - 1][1]) {  
                count++; 
            }
            else {  
                points[i][1] = min(points[i - 1][1], points[i][1]); 
            }
        }
        return count;
    }
};
